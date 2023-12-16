from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_thruster_manager',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_thruster_manager', 'uuv_thruster_manager.*')),
)
