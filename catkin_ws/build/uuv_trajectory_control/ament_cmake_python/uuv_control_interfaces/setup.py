from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_control_interfaces',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_control_interfaces', 'uuv_control_interfaces.*')),
)
