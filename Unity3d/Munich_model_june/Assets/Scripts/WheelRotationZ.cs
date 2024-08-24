using UnityEngine;
using RosSteeringAngle = RosMessageTypes.UnityRobotics.SteeringAngleMsg; // for steering_angle
using Unity.Robotics.ROSTCPConnector;

public class WheelRotationZ : MonoBehaviour
{
    public GameObject wheel;
    private float maxSteeringAngle = 45.0f; // Maximum steering angle in degrees

    void Start()
    {
        // Subscribe to the ROS topic for steering angle
        ROSConnection.GetOrCreateInstance().Subscribe<RosSteeringAngle>("unity_steering_angle", OnReceiveSteeringAngle);
    }

    void OnReceiveSteeringAngle(RosSteeringAngle msg)
    {
        // Convert the quaternion to Euler angles
        Vector3 euler = new Quaternion(0, 0, (float)msg.x, (float)msg.w).eulerAngles;

        // Normalize the angle to be within the range [-180, 180]
        euler.z = NormalizeAngle(euler.z);

        // Clamp the z-axis rotation to -45 and 45 degrees
        euler.z = Mathf.Clamp(euler.z, -maxSteeringAngle, maxSteeringAngle);

        // Convert the clamped Euler angles back to a quaternion
        Quaternion clampedRotation = Quaternion.Euler(euler.x, euler.y, euler.z);

        // Apply the clamped rotation to the wheel
        wheel.transform.localRotation = clampedRotation;

        // Log the received quaternion values
        //Debug.Log($"Received and clamped quaternion: x={clampedRotation.x}, y={clampedRotation.y}, z={clampedRotation.z}, w={clampedRotation.w}");
    }

    float NormalizeAngle(float angle) // so the angle stays between -180f and +180f
    {
        while (angle > 180f)
        {
            angle -= 360f;
        }
        while (angle < -180f)
        {
            angle += 360f;
        }
        return angle;
    }
}
