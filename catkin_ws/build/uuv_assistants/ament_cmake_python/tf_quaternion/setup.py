from setuptools import find_packages
from setuptools import setup

setup(
    name='tf_quaternion',
    version='0.6.1',
    packages=find_packages(
        include=('tf_quaternion', 'tf_quaternion.*')),
)
