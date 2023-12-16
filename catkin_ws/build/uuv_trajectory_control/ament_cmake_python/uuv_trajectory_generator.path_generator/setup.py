from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_trajectory_generator.path_generator',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_trajectory_generator.path_generator', 'uuv_trajectory_generator.path_generator.*')),
)
