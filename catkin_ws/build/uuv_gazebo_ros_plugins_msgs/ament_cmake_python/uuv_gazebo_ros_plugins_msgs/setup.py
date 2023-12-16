from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_gazebo_ros_plugins_msgs',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_gazebo_ros_plugins_msgs', 'uuv_gazebo_ros_plugins_msgs.*')),
)
