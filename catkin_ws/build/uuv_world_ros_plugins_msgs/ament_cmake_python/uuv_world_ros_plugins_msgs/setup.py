from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_world_ros_plugins_msgs',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_world_ros_plugins_msgs', 'uuv_world_ros_plugins_msgs.*')),
)
