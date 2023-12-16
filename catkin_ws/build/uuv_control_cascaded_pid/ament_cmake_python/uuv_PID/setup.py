from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_PID',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_PID', 'uuv_PID.*')),
)
