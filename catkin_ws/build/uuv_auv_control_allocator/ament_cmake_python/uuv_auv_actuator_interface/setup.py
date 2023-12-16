from setuptools import find_packages
from setuptools import setup

setup(
    name='uuv_auv_actuator_interface',
    version='0.6.1',
    packages=find_packages(
        include=('uuv_auv_actuator_interface', 'uuv_auv_actuator_interface.*')),
)
