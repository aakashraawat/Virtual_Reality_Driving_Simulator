using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosSteeringAngle = RosMessageTypes.UnityRobotics.SteeringAngleMsg;

public class SteeringAngle : MonoBehaviour
{
    public GameObject SteeringWheel; // Reference to the GameObject to move

    void Start()
    {
        // Subscribe to the ROS topic
        ROSConnection.GetOrCreateInstance().Subscribe<RosSteeringAngle>("unity_steering_angle", PoseChange);
    }
 // storing the data and p
    void PoseChange(RosSteeringAngle msg)
    {
        Quaternion rotation = new Quaternion((float)msg.x, (float)msg.y, (float)msg.z, (float)msg.w);
        // Apply the rotation to the SteeringWheel
        SteeringWheel.transform.localRotation = rotation;

        // Log the received quaternion values
        Debug.Log($"Received quaternion: x={msg.x}, y={msg.y}, z={msg.z}, w={msg.w}");
    }
}
