using UnityEngine;
using RosAngularVelocity = RosMessageTypes.UnityRobotics.WheelAngularVelocityMsg; // for angular_vel
using Unity.Robotics.ROSTCPConnector;
using System;

public class AngularVelocityWheelFLeft : MonoBehaviour
{
    public GameObject wheel;

    private float angularVelocity;
    private Quaternion steeringRotation;

    void Start()
    {
        // Subscribe to the ROS topics
        ROSConnection.GetOrCreateInstance().Subscribe<RosAngularVelocity>("angular_velocity_f_right_unity", OnReceiveWheelVelocity);
        
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
