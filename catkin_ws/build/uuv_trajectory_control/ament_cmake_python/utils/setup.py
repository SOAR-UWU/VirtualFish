from setuptools import find_packages
from setuptools import setup

setup(
    name='utils',
    version='0.6.1',
    packages=find_packages(
        include=('utils', 'utils.*')),
)
