using UnityEngine;
using RosAngularVelocity = RosMessageTypes.UnityRobotics.WheelAngularVelocityMsg;
using Unity.Robotics.ROSTCPConnector;
using System;

public class AngularVelocityWheelRleft : MonoBehaviour // rear left tire
{
    public GameObject wheel;

    private float angularVelocity;

    void Start()
    {
        // Subscribe to the ROS topic with the appropriate message type and callback function
        ROSConnection.GetOrCreateInstance().Subscribe<RosAngularVelocity>("angular_velocity_r_left_unity", OnReceiveWheelVelocity);
    }

    void OnReceiveWheelVelocity(RosAngularVelocity msg)
    {
        // Process the received message (angular velocity around y-axis)
        angularVelocity = (float)msg.angular_vel;
        
        // Debug.Log($"Received Angular Velocity: y={angularVelocity}");
    }

    void Update()
    {
        // Apply the incremental rotation around the y-axis
        Quaternion deltaRotation = Quaternion.Euler(0, angularVelocity * Time.deltaTime, 0);

        // Apply the incremental rotation to the current wheel rotation
        wheel.transform.localRotation *= deltaRotation;
    }
}
