using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosPosRot = RosMessageTypes.UnityRoboticsDemo.PosRotMsg;

public class SteeringWheelRotationSub : MonoBehaviour
{
    public GameObject steeringWheel; // Reference to the steering wheel GameObject
    private const float minRotation = -120f;
    private const float maxRotation = 120f;
    private float currentRotation = 0f;

    private Quaternion lastRotation;
    private float lastRotationChangeTime = 0f;
    private const float straightTimeThreshold = 2f;// Time threshold to consider the car moving straight
    private bool isStraight = false;

    // Start is called before the first frame update
    void Start()
    {
        // Initialize lastRotation with the current rotation of the steering wheel in the start
        lastRotation = steeringWheel.transform.localRotation;

        // Subscribe to the ROS topic for rotation
        ROSConnection.GetOrCreateInstance().Subscribe<RosPosRot>("pose_publisher", RotationChange);
    }

    void RotationChange(RosPosRot rotationMessage) // callback funcytion
    {
        // Extract the rotation from ROS message as it was in the subscriber nbode on ROS interface
        Quaternion rosRotation = new Quaternion(rotationMessage.rot_x, rotationMessage.rot_y, rotationMessage.rot_z, rotationMessage.rot_w);

        // Remap y rotation to x and invert the rotation
        Quaternion remappedRotation = new Quaternion(-rosRotation.y, -rosRotation.x, -rosRotation.z, rosRotation.w);

        // Convert the remapped rotation to Euler angles
        Vector3 eulerRotation = remappedRotation.eulerAngles;




        // Convert the angle from [0, 360] to [-180, 180] for easier clamping
        eulerRotation.x = NormalizeAngle(eulerRotation.x);

        // Clamp the x rotation between minRotation and maxRotation
        float clampedXRotation = Mathf.Clamp(eulerRotation.x, minRotation, maxRotation);

        // Apply the clamped rotation to the steering wheel
        currentRotation = clampedXRotation;
        steeringWheel.transform.localRotation = Quaternion.Euler(currentRotation, 0, 0);




        // Check if the rotation has changed 
        if (Quaternion.Angle(steeringWheel.transform.localRotation, lastRotation) > 1f)
        {
            lastRotationChangeTime = Time.time;
            isStraight = false;
        }

        // Update the last rotation
        lastRotation = steeringWheel.transform.localRotation;
    }

    // Helper function to normalize an angle to the range [-180, 180]
    private float NormalizeAngle(float angle)
    {
        while (angle > 180) angle -= 360;
        while (angle < -180) angle += 360;
        return angle;
    }




    // Update is called once per frame
    void Update()
    {
        // Check if the car has been moving straight for longer than the straightTimeThreshold
        if (Time.time - lastRotationChangeTime > straightTimeThreshold)
        {
            isStraight = true;
        }

        // If the car is moving straight, smoothly reset the steering wheel to the initial rotation
        if (isStraight)
        {
            float step = Time.deltaTime * 7000; // cahnge according to need can test and see how it works

            currentRotation = Mathf.MoveTowards(currentRotation, 0, step);
            steeringWheel.transform.localRotation = Quaternion.Euler(currentRotation, 0, 0);
        }
    }
}
