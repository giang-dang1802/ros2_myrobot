from setuptools import find_packages
from setuptools import setup

setup(
    name='stm32_diff_drive_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('stm32_diff_drive_msgs', 'stm32_diff_drive_msgs.*')),
)
