import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from unity_robotics_msgs.msg import PosRot
import numpy as np
import math

class PoseSubscriberPublisher(Node):
    def __init__(self):
        super().__init__('prescanpose_subscriber')
        # Subscribe to receive Pose messages from the 'prescanpose' topic
        self.subscription = self.create_subscription(Pose, 'pose_prescan', self.listener_callback, 10)

        # Publisher to send transformed poses to Unity
        self.publisher = self.create_publisher(PosRot, 'pose_publisher', 10)

        # set tge tranform set as false as node needs to be clear before getting any data (this is best practice when you a are dealing with some calculations)
        self.initial_transform_set = False
        self.initial_transform = None





    def listener_callback(self, msg): # called everytime when pose is recieved 

        if not self.initial_transform_set:

            # Initialize the transformation matrix with the first incoming Pose message
            self.initial_transform = self.compute_transformation_matrix(msg, set_initial=True)

            self.initial_transform_set = True

            print("Initial Transformation Matrix:\n", self.initial_transform)# just to see the first transformation 


            self.get_logger().info(f'Initial transformation matrix recieved and stored(finished)')
            return





        # Compute the current transformation matrix from incoming pose and store them in adjusted_pose and orientaion

        current_transform = self.compute_transformation_matrix(msg) # returns transformation matrices on the base of data(pose) from simulink
        
        # we use insverse if we have one tranformation and want to know for other direction we simply take inverse of the (rotaion+translation) matric 

       #By multiplying the inverse of the initial matrix by the current matrix, you transform the current pose into the 
       #coordinate system defined by the initial pose

        adjusted_transform = np.linalg.inv(self.initial_transform) @ current_transform # location of the actor (car) frame in unity wrt to frame in prescan

        adjusted_position = adjusted_transform[:3, 3] # u take the 4 column first 3 values ie x,y,z and store in adjusted_postion

        adjusted_orientation = self.rotation_matrix_to_quaternion(adjusted_transform[:3, :3]) # here you are taking everthing expect the translation part  and converting it to quaternion usimg methof rotation_matrix_to_quaternion




        # Prepare and publish the transformed PosRot message as we have same type message type on unity side !!!!
        pos_rot_msg = PosRot()

        #POSE to Unity
        pos_rot_msg.pos_x, pos_rot_msg.pos_y, pos_rot_msg.pos_z= ( 
        -round(adjusted_position[1], 2) , # X position remains the same
        round(adjusted_position[2], 2)  ,# Y position remains the same
        round(adjusted_position[0], 2)  # Z position remains the same
        )



        # Orientation to Unity

        # Adjust quaternion values to match Unity's coordinate system and axis rotation expectations
        pos_rot_msg.rot_x, pos_rot_msg.rot_y, pos_rot_msg.rot_z, pos_rot_msg.rot_w = (
           - adjusted_orientation[1],  # New X is the original z all( angles are counterclock wise in ros and in unity its clockwise so we use negetive sign with all the angles )
           - adjusted_orientation[2],  # New Y is the original X
           - adjusted_orientation[0], # New Z is the negative of the original Y
             adjusted_orientation[3]
        )
        


        # Publish the transformed pose and also keeping in mind the unity orientation to the topic pose_publisher 
        self.publisher.publish(pos_rot_msg)
        self.get_logger().info(f'Transformed Pose: {pos_rot_msg}')





    def compute_transformation_matrix(self, msg, set_initial=False): #This function creates a transformation matrixx from the pose data in the msgg
        # Generate rotation matrix from Euler angles
        R = self.euler_to_rotation_matrix(
            math.radians(msg.orientation.x),
            math.radians(msg.orientation.y),
            math.radians(msg.orientation.z)
        )
        # Translate position coordinates into a numpy array (4*4 matrix is formed )
        translation = np.array([msg.position.x, msg.position.y, msg.position.z])

        # Form the full 4x4 transformation matrix
        transformation_matrix = np.identity(4) # create a identity matrix 4*4

        transformation_matrix[:3, :3] = R # top left r part of matric is replaced by rotation martrix ie R

        transformation_matrix[:3, 3] = translation # 4th column first 3 rows are replaced by trnslation (in python index starts form 0 )

        return transformation_matrix # complete tranformation matrix ie rotation+translation(homegenous tranformation matrix)





    def euler_to_rotation_matrix(self, roll, pitch, yaw): # tal=king values from compute_trandformation_matrix R
        # Matrix rotations for each Euler angle
        Rx = np.array([[1,         0,                  0],
                       [0, math.cos(roll), -math.sin(roll)],
                       [0, math.sin(roll), math.cos(roll)]])

        Ry = np.array([[math.cos(pitch), 0, math.sin(pitch)],
                       [0,            1,              0     ],
                       [-math.sin(pitch), 0, math.cos(pitch)]])

        Rz = np.array([[math.cos(yaw), -math.sin(yaw), 0],
                       [math.sin(yaw), math.cos(yaw), 0],
                       [0,                     0,     1]])
        # Combine rotations into a single matrix R = Rz*Ry*Rx to get the rotaion matrix 
        return Rz @ Ry @ Rx







    def rotation_matrix_to_quaternion(self, R):
        # Convert rotation matrix to quaternion, considering right-hand rule and is in the function euler_toRotation_matrix https://www.euclideanspace.com/maths/geometry/rotations/conversions/matrixToQuaternion/

        q_w = math.sqrt(max(0, 1 + R[0, 0] + R[1, 1] + R[2, 2])) / 2
        q_x = math.sqrt(max(0, 1 + R[0, 0] - R[1, 1] - R[2, 2])) / 2
        q_y = math.sqrt(max(0, 1 - R[0, 0] + R[1, 1] - R[2, 2])) / 2
        q_z = math.sqrt(max(0, 1 - R[0, 0] - R[1, 1] + R[2, 2])) / 2


        q_x *= np.sign(q_x * (R[2, 1] - R[1, 2])) # just to recover the signs after the squaring use np.sign ie it will just ouput signs  
        q_y *= np.sign(q_y * (R[0, 2] - R[2, 0]))
        q_z *= np.sign(q_z * (R[1, 0] - R[0, 1]))

        return q_x, q_y, q_z, q_w 




def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS node
    prescanpose_subscriber = PoseSubscriberPublisher()
    rclpy.spin(prescanpose_subscriber)  # Keep the node running

    prescanpose_subscriber.destroy_node()
    rclpy.shutdown()  # Properly shutdown the ROS node

if __name__ == '__main__':
    main()
