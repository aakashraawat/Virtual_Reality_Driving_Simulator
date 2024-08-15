import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64  # from Simulink
from unity_robotics_msgs.msg import SteeringAngle  # to Unity 3D
from tf_transformations import quaternion_from_euler # sudo apt-get install ros-<ros_distro>-tf-transformations ->

class SteeringAngleSimulink(Node):
    def __init__(self):
        super().__init__('steering_angle_simulink')
        self.subscription = self.create_subscription(Float64, 'steering_angle', self.listener_callback, 10)  # be careful with the msg type

        self.publisher = self.create_publisher(SteeringAngle, 'unity_steering_angle', 10)

    def listener_callback(self, msg):
        self.get_logger().info('Received steering angle: "%f"' % msg.data)
        
        # Convert the single Euler angle to a Quaternion
        euler_angle = msg.data
        quaternion = quaternion_from_euler(euler_angle, 0, 0)
        
        # Create and publish the SteeringAngle message
        steering_angle_msg = SteeringAngle()
        steering_angle_msg.x = -quaternion[0]  # negative for the unity plane as it's flipped
        steering_angle_msg.y = -quaternion[1]
        steering_angle_msg.z = -quaternion[2]
        steering_angle_msg.w = quaternion[3]
        
        self.get_logger().info(
            f'Publishing quaternion: x={steering_angle_msg.x}, y={steering_angle_msg.y}, z={steering_angle_msg.z}, w={steering_angle_msg.w}'
        )
        
        self.publisher.publish(steering_angle_msg)

def main(args=None):
    rclpy.init(args=args)
    steering_angle_simulink = SteeringAngleSimulink()
    rclpy.spin(steering_angle_simulink)
    steering_angle_simulink.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
