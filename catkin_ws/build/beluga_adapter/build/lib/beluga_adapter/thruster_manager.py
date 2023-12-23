#!/usr/bin/env python3

import numpy as np
from typing import Sequence

import rclpy
from math import sin, pi
from geometry_msgs.msg import Twist
from common_msgs.msg import FloatStamped
from rclpy.node import Node
from rclpy.clock import Clock

class Thruster(Node):
    def __init__(self, node_name: str, id: int):
        super().__init__(node_name)
        self.thruster_publisher_ = self.create_publisher(FloatStamped, "/beluga/thrusters/id_" + str(id) + '/input', 10)

    def publish(self, value: float):
        output = FloatStamped()
        time_stamp = Clock().now()
        output.header.stamp = time_stamp.to_msg()
        output.data = value[0]
        self.thruster_publisher_.publish(output)

class ThrusterManagerNode(Node):
    def __init__(self):
        self.node_name = 'thruster_manager'
        super().__init__(self.node_name) 
        
        # Do math
        theta = 45/180*pi
        self.transform_mat = np.array([
        #             x            y            z            r            p            h      
        [    sin(theta),  sin(theta),         0.0,         0.0,         0.0, -sin(theta)   ],          # left    front   motor
        [    sin(theta), -sin(theta),         0.0,         0.0,         0.0,  sin(theta)   ],          # right   front   motor
        [   -sin(theta),  sin(theta),         0.0,         0.0,         0.0,  sin(theta)   ],          # left    back    motor
        [   -sin(theta), -sin(theta),         0.0,         0.0,         0.0, -sin(theta)   ],          # right   back    motor
        [           0.0,         0.0,         1.0,        -1.0,         0.0,         0.0   ],          # left    middle  motor
        [           0.0,         0.0,         1.0,         1.0,         0.0,         0.0   ],          # right   middle  motor
        [           0.0,         0.0,         1.0,         0.0,        -1.0,         0.0   ],          # middle  back    motor
        ])

        self.scale = 100
        self.num_thrusters = len(self.transform_mat)
        self.thrusters = [Thruster(f'thrusters_id_{i+1}', i+1) for i in range(self.num_thrusters)]
        #self.twist_subscriber_ = self.create_subscription(Twist, self.node_name + '/input', self.input_callback, 10)
        self.twist_subscriber_ = self.create_subscription(Twist, 'cmd_vel', self.input_callback, 10)
        print("[Thruster Manager]: ThrusterManagerNode started")

    def input_callback(self, msg: Twist):
        control_vector = np.array([
             [msg.linear.x],  [msg.linear.y],  [msg.linear.z],
            [msg.angular.x], [msg.angular.y], [msg.angular.z]
        ])
        output = self.scale * self.transform_mat @ control_vector
        self.update_thrusters(output.astype(float))

    def update_thrusters(self, output: Sequence[float]):
        for i in range(self.num_thrusters):
            self.thrusters[i].publish(output[i])

def main(args=None):
    rclpy.init(args=args)
    thruster_manager = ThrusterManagerNode()
    rclpy.spin(thruster_manager)

if __name__ == '__main__':
    main()
