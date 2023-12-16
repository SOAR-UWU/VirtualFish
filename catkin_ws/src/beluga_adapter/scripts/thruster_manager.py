#!/usr/bin/env python3

import numpy as np
from typing import Sequence

import rclpy
from geometry_msgs.msg import Twist
from uuv_gazebo_ros_plugins_msgs.msg import FloatStamped
from rclpy.node import Node

class Thruster:
    def __init__(self, node_name: str):
        self.thruster_publisher_ = self.create_publisher(FloatStamped, node_name + '/input', 10)

    def publish(self, value:float):
        output = FloatStamped()
        output.header.stamp = rclpy.Time.now()
        output.data = value
        self.thruster_publisher_.publish(output)

class ThrusterManagerNode(Node):
    def __init__(self):
        self.node_name = 'thruster_manager'
        super().__init__(self.node_name)
        
        # Do math
        self.transform_mat = np.array([
        #     x     y     z     r     p     h      
        [  0.5,  0.5,  0.0,  0.0,  0.0, -0.5  ],   # left   front  motor
        [  0.5, -0.5,  0.0,  0.0,  0.0,  0.5  ],   # right  front  motor
        [ -0.5,  0.5,  0.0,  0.0,  0.0,  0.5  ],   # left   back   motor
        [ -0.5, -0.5,  0.0,  0.0,  0.0, -0.5  ],   # right  back   motor
        [  0.0,  0.0,  1.0, -1.0,  0.0,  0.0  ],   # left   middle motor
        [  0.0,  0.0,  1.0,  1.0,  0.0,  0.0  ],   # right  middle motor
        [  0.0,  0.0,  1.0,  0.0, -1.0,  0.0  ],   # middle back   motor
        ])

        self.scale = 10
        self.num_thrusters = len(self.transform_mat)
        self.thrusters = [Thruster(f'thrusters/{i}') for i in range(self.num_thrusters)]
        self.twist_subscriber_ = self.create_subscription(Twist, self.node_name + '/input', self.input_callback, 10)
        rclpy.loginfo("ThrusterManagerNode started")

    def input_callback(self, msg: Twist):
        control_vector = np.array([
             [msg.linear.x],  [msg.linear.y],  [msg.linear.z],
            [msg.angular.x], [msg.angular.y], [msg.angular.z]
        ])
        output = self.scale * self.transform_mat @ control_vector
        self.update_thrusters(output)

    def update_thruster(self, output: Sequence[float]):
        for i in range(self.num_thrusters):
            self.thrusters[i].publish(output[i])

def main(args=None):
    ThrusterManagerNode()
    rclpy.spin()

if __name__ == '__main__':
    main()