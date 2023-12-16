from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_sensor_ros_plugins_msgs',
    version='0.6.13',
    packages=find_packages(
        include=('uuv_sensor_ros_plugins_msgs', 'uuv_sensor_ros_plugins_msgs.*')),
)
