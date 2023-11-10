from setuptools import find_packages
from setuptools import setup

setup(
    name='rainbot_utils',
    version='0.0.0',
    packages=find_packages(
        include=('rainbot_utils', 'rainbot_utils.*')),
)
