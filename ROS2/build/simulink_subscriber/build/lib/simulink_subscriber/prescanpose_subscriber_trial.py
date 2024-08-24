import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from unity_robotics_msgs.msg import PosRot
import numpy as np
import math

class PoseSubscriberPublisher(Node):
    def __init__(self):
        super().__init__('pose_subscriber_publisher')
        self.subscription = self.create_subscription(Pose, 'prescanpose', self.listener_callback, 10)
        self.publisher = self.create_publisher(PosRot, 'pose_publisher', 10)
        self.initial_transform_set = False
        self.initial_transform = np.eye(4)

    def listener_callback(self, msg):
        current_transform = self.compute_transformation_matrix(msg)

        if not self.initial_transform_set:
            self.initial_transform = current_transform
            self.initial_transform_set = True
            self.get_logger().info("Initial transformation matrix set.")
            return

        # Compute the transformation relative to the initial pose
        relative_transform = np.linalg.inv(self.initial_transform) @ current_transform
        adjusted_position = relative_transform[:3, 3]
        adjusted_orientation = self.rotation_matrix_to_quaternion(relative_transform[:3, :3])

        # Prepare the message to Unity using the transformed position
        pos_rot_msg = PosRot()
        pos_rot_msg.pos_x = round(adjusted_position[2], 2)  # Unity z is ROS x
        pos_rot_msg.pos_y = round(adjusted_position[0], 2)  # Unity x is ROS -y
        pos_rot_msg.pos_z = -round(adjusted_position[1], 2)  # Unity y is ROS z

        pos_rot_msg.rot_x, pos_rot_msg.rot_y, pos_rot_msg.rot_z, pos_rot_msg.rot_w = adjusted_orientation

        self.publisher.publish(pos_rot_msg)
        self.get_logger().info(f"Transformed Pose: {pos_rot_msg}")

    def compute_transformation_matrix(self, msg):
        R = self.euler_to_rotation_matrix(
            math.radians(msg.orientation.x),
            math.radians(msg.orientation.y),
            math.radians(msg.orientation.z)
        )
        T = np.eye(4)
        T[:3, :3] = R
        T[:3, 3] = [msg.position.x, msg.position.y, msg.position.z]
        return T

    def euler_to_rotation_matrix(self, roll, pitch, yaw):
        Rx = np.array([[1, 0, 0],
                       [0, math.cos(roll), -math.sin(roll)],
                       [0, math.sin(roll), math.cos(roll)]])
        Ry = np.array([[math.cos(pitch), 0, math.sin(pitch)],
                       [0, 1, 0],
                       [-math.sin(pitch), 0, math.cos(pitch)]])
        Rz = np.array([[math.cos(yaw), -math.sin(yaw), 0],
                       [math.sin(yaw), math.cos(yaw), 0],
                       [0, 0, 1]])
        return Rz @ Ry @ Rx

    def rotation_matrix_to_quaternion(self, R):
        q_w = math.sqrt(max(0, 1 + R[0, 0] + R[1, 1] + R[2, 2])) / 2
        q_x = math.sqrt(max(0, 1 + R[0, 0] - R[1, 1] - R[2, 2])) / 2
        q_y = math.sqrt(max(0, 1 - R[0, 0] + R[1, 1] - R[2, 2])) / 2
        q_z = math.sqrt(max(0, 1 - R[0, 0] - R[1, 1] + R[2, 2])) / 2
        q_x *= np.sign(q_x * (R[2, 1] - R[1, 2]))
        q_y *= np.sign(q_y * (R[0, 2] - R[2, 0]))
        q_z *= np.sign(q_z * (R[1, 0] - R[0, 1]))
        
        return q_x, q_y, q_z, q_w






def main(args=None):
    rclpy.init(args=args)  # Initialize ROS node
    
    pose_subscriber_publisher = PoseSubscriberPublisher()  # Create the ROS node

    rclpy.spin(pose_subscriber_publisher)  # Keep the node active
    pose_subscriber_publisher.destroy_node()
    rclpy.shutdown()  # Shutdown 

if __name__ == '__main__':
    main()
