import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from unity_robotics_msgs.msg import PosRot

class PoseSubscriberPublisher(Node):
    def __init__(self):
        super().__init__('pose_simple_publisher')
        self.subscription = self.create_subscription(Point, '/location', self.listener_callback, 10)

        
        self.publisher = self.create_publisher(PosRot, 'pose_publisher', 10)
        self.get_logger().info("PoseSubscriberPublisher node has been started.")

    def listener_callback(self, msg):
        # Directly map the ROS Pose message to the PosRot message
        pos_rot_msg = PosRot()
        self.get_logger().info("I have received.")


        self.publisher.publish(pos_rot_msg)
        self.get_logger().info(f"Published Pose: {pos_rot_msg}")

def main(args=None):
    rclpy.init(args=args)  # Initialize ROS node
    pose_subscriber_publisher = PoseSubscriberPublisher()  # Create the ROS node
    rclpy.spin(pose_subscriber_publisher)  # Keep the node active
    pose_subscriber_publisher.destroy_node()
    rclpy.shutdown()  # Shutdown

if __name__ == '__main__':
    main()
