import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from unity_robotics_msgs.msg import WheelAngularVelocity  # Replace with your actual package name

class AngularVelocityNode(Node):

    def __init__(self):
        super().__init__('angular_velocity_r_right')
        self.subscription = self.create_subscription(Twist, 'angular_velocity_r_right', self.listener_callback, 10)

        self.publisher_ = self.create_publisher(WheelAngularVelocity, 'angular_velocity_r_right_unity', 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
    
        self.get_logger().info(f'Received Angular Velocity: x={msg.angular.x}, y={msg.angular.y}, z={msg.angular.z}')

        # Create the new message
        new_msg = WheelAngularVelocity()
        # unity             #ros2 from simulink
        new_msg.linear.x = msg.linear.x
        new_msg.linear.y = msg.linear.y
        new_msg.linear.z = msg.linear.z

        new_msg.angular.x = msg.angular.x
        new_msg.angular.y = msg.angular.y
        new_msg.angular.z = msg.angular.z

        # Publish the new message
        self.publisher_.publish(new_msg)
        self.get_logger().info(f"Publishing to Unity {new_msg}")

def main(args=None):
    rclpy.init(args=args)
    angular_velocity_r_right = AngularVelocityNode()
    rclpy.spin(angular_velocity_r_right)
    angular_velocity_r_right.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
