from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_auv_control_allocator',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_auv_control_allocator', 'uuv_auv_control_allocator.*')),
)
