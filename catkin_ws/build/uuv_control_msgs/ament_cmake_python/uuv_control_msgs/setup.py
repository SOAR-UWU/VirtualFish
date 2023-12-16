from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_control_msgs',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_control_msgs', 'uuv_control_msgs.*')),
)
