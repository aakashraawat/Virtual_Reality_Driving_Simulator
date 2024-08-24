using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosPosRot = RosMessageTypes.UnityRobotics.PosRotMsg; // name of your ROS package where our custom msg is located 

public class PoseSubscriber : MonoBehaviour // add this script to the RosOrigin so you can control the local object ie Car
{
    public GameObject car; // Reference to the GameObject to move 

    void Start()
    {


        // Subscribe to the ROS topic             //msgtypefromros2   //pbNAme   //function to store new values
        ROSConnection.GetOrCreateInstance().Subscribe<RosPosRot>("pose_publisher", PoseChange);// name the topic name where data is publishing

       
    }

    void PoseChange(RosPosRot poseMessage) // this is a callback function which store data in the object poseMessage 
    {
        // Setting the position from ROS message


        Vector3 newPosition = new Vector3(poseMessage.pos_x , poseMessage.pos_y, poseMessage.pos_z);

        car.transform.localPosition = newPosition; // store the updated value to the child class ie position is relative to 

        //  keep the adjustments relative to the parent object

        Quaternion rosRotation = new Quaternion(poseMessage.rot_x, poseMessage.rot_y, poseMessage.rot_z, poseMessage.rot_w);
       
      
       // Quaternion newRotation = rotationOffset * rosRotation; // Apply rotation offset

        
        car.transform.localRotation = rosRotation;  // Changed from transform.rotation
    }
    } 