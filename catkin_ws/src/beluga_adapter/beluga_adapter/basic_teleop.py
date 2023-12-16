#!/usr/bin/env python3

import rclpy
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from rclpy.node import Node


class BasicTeleopNode(Node):
    def __init__(self):
        super().__init__('basic_teleop')
        self.joy_subscriber_ = self.create_subscription(Joy, '/joy', self.callback, 10)
        self.teleop_publisher_ = self.create_publisher(Twist, '/basic_teleop/output', 10)

    def callback(self, msg:Joy):
        output = Twist()
        output.linear.x = msg.axes[1]
        output.linear.y = 0
        output.linear.z = msg.axes[2] - msg.axes[5]
        output.angular.x = -msg.axes[3]
        output.angular.y = msg.axes[4]
        output.angular.z = msg.axes[0]
        self.teleop_publisher_.publish(output)
    
def main(args=None):
    rclpy.init(args=args)
    node = BasicTeleopNode()
    basic_teleop = BasicTeleopNode()
    rclpy.spin(basic_teleop)

if __name__ == '__main__':
    main()

    


























# class BasicTeleopNode:
#     def __init__(self):
#         rclpy.init_node('basic_teleop')
#         rclpy.Subscriber('/joy', Joy, self.callback)
#         self.pub = rclpy.Publisher('/basic_teleop/output', Twist, queue_size=10)

#     def callback(self, msg: Joy):
#         output = Twist()
#         output.linear.x = msg.axes[1]
#         output.linear.y = 0
#         output.linear.z = msg.axes[2] - msg.axes[5]
#         output.angular.x = -msg.axes[3]
#         output.angular.y = msg.axes[4]
#         output.angular.z = msg.axes[0]
#         self.pub.publish(output)


# if __name__ == '__main__':
#     BasicTeleopNode()
#     rclpy.spin()
