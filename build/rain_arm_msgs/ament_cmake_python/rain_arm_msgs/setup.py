from setuptools import find_packages
from setuptools import setup

setup(
    name='rain_arm_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rain_arm_msgs', 'rain_arm_msgs.*')),
)
