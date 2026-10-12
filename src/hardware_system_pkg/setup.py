import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'hardware_system_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='toro',
    maintainer_email='toro@todo.todo',
    description='Practica 3 - Integracion de Sistemas ROS 2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'emulator_node = hardware_system_pkg.emulator_node:main',
            'monitor_node = hardware_system_pkg.monitor_node:main',
            'operator_node = hardware_system_pkg.operator_node:main',
        ],
    },
)
