from setuptools import setup

package_name = 'simulink_subscriber'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aakashraawat',
    maintainer_email='aakashraawat@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'prescanpose_subscriber = simulink_subscriber.prescanpose_subscriber:main',
            'pose_subscriber_publisher = simulink_subscriber.prescanpose_subscriber_trial:main',
            'steering_angle_simulink = simulink_subscriber.steering_angle_simulink:main',
            'angular_velocity_f_left = simulink_subscriber.angular_velocity_f_left:main',
            'angular_velocity_f_right = simulink_subscriber.angular_velocity_f_right:main',
            'angular_velocity_r_left = simulink_subscriber.angular_velocity_r_left:main',
            'angular_velocity_r_right = simulink_subscriber.angular_velocity_r_right:main',


        ],
    },
)
