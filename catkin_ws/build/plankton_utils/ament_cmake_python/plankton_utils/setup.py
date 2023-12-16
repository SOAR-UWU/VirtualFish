from setuptools import find_packages
from setuptools import setup

setup(
    name='plankton_utils',
    version='0.6.1',
    packages=find_packages(
        include=('plankton_utils', 'plankton_utils.*')),
)
