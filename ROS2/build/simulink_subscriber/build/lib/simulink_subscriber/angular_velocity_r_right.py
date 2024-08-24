import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from unity_robotics_msgs.msg import WheelAngularVelocity
from tf_transformations import quaternion_from_euler

from unity_robotics_msgs.msg import PosRot

class AngularVelocityNode(Node):


    def __init__(self):

        super().__init__('angular_velocity_f_right')
        self.subscription = self.create_subscription(Twist,'angular_velocity_r_right', self.listener_callback,10)

        self.publisher_ = self.create_publisher( PosRot, 'angular_velocity_r_right_unity', 10)

        self.subscription  # prevent unused variable warning

 
    def listener_callback(self, msg):

        self.get_logger().info(f'Received Angular Velocity: x={msg.angular.x}, y={msg.angular.y}, z={msg.angular.z}')

        # Convert Euler angles to quaternion
        quaternion = quaternion_from_euler(msg.angular.x, msg.angular.y, msg.angular.z)

        # Create the new message
        new_msg = PosRot()

        # Set the translation (linear) values directly
        new_msg.translation.x = 0
        new_msg.translation.y = 0
        new_msg.translation.z = 0

 
        # Set the quaternion values directly
        new_msg.quaternion.x = -quaternion[0]
        new_msg.quaternion.y = -quaternion[1]
        new_msg.quaternion.z = -quaternion[2]
        new_msg.quaternion.w = quaternion[3]

 

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