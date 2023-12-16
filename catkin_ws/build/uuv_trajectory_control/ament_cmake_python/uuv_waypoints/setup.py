from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_waypoints',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_waypoints', 'uuv_waypoints.*')),
)
