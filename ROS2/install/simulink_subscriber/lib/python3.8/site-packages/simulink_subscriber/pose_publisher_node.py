import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from unity_robotics_msgs.msg import PosRot
import numpy as np
import math

class PosePublisherNode(Node):
    def __init__(self):
        super().__init__('pose_publisher_node')
        
        # Subscriber to receive Pose messages from the 'prescanpose' topic
        self.subscription = self.create_subscription(Pose, 'prescanpose', self.listener_callback, 10)
        self.get_logger().info('Subscription to prescanpose topic created')

        # Publisher to send transformed poses to Unity
        self.publisher = self.create_publisher(PosRot, 'pose_publisher', 10)
        self.get_logger().info('Publisher to pose_publisher topic created')

        # Initialize transformation settings
        self.initial_transform_set = False
        self.initial_transform = None

    def listener_callback(self, msg):
        self.get_logger().info(f'Received Pose: {msg}')

        if not self.initial_transform_set:
            self.initial_transform = self.compute_transformation_matrix(msg, set_initial=True)
            self.initial_transform_set = True
            self.get_logger().info('Initial transformation matrix received and stored')
            return

        current_transform = self.compute_transformation_matrix(msg)
        adjusted_transform = np.linalg.inv(self.initial_transform) @ current_transform
        adjusted_position = adjusted_transform[:3, 3]
        adjusted_orientation = self.rotation_matrix_to_quaternion(adjusted_transform[:3, :3])

        pos_rot_msg = PosRot()
        
        pos_rot_msg.pos_x, pos_rot_msg.pos_y, pos_rot_msg.pos_z = (
            -round(adjusted_position[1], 2),
            round(adjusted_position[2], 2),
            round(adjusted_position[0], 2)
        )

        pos_rot_msg.rot_x, pos_rot_msg.rot_y, pos_rot_msg.rot_z, pos_rot_msg.rot_w = (
            -adjusted_orientation[1],
            -adjusted_orientation[2],
            -adjusted_orientation[0],
            adjusted_orientation[3]
        )

        self.get_logger().info(f'Publishing Transformed Pose: {pos_rot_msg}')
        self.publisher.publish(pos_rot_msg)
        self.get_logger().info('Transformed Pose Published')

    def compute_transformation_matrix(self, msg, set_initial=False):
        R = self.euler_to_rotation_matrix(
            math.radians(msg.orientation.x),
            math.radians(msg.orientation.y),
            math.radians(msg.orientation.z)
        )
        translation = np.array([msg.position.x, msg.position.y, msg.position.z])
        transformation_matrix = np.identity(4)
        transformation_matrix[:3, :3] = R
        transformation_matrix[:3, 3] = translation
        return transformation_matrix

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
    rclpy.init(args=args)
    node = PosePublisherNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
