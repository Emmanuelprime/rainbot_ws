from setuptools import find_packages, setup

package_name = 'rainbot_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='emmanuel',
    maintainer_email='emmanuelprime2@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rain_publisher = rainbot_py.simple_publisher:main', #added our packge
            'rain_subscriber = rainbot_py.simple_subscriber:main',
            'rain_parameter = rainbot_py.simple_parameter:main',

        ],
    },
)
