from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_thrusters.models',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_thrusters.models', 'uuv_thrusters.models.*')),
)
