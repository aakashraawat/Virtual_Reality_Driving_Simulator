using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target; // The target object the camera will follow
    public float smoothing = 15f; // Speed of the camera movement

    public Vector3 offsetPosition; // Positional offset from the target, relative to the target's rotation
    public Vector3 offsetRotation; 

    void LateUpdate()
    {
        // Calculate the position offset in the target's local space
        Vector3 rotatedOffsetPosition = target.TransformPoint(offsetPosition) - target.position;


        // TRANSLATION 
         
        // Target position the camera needs to move towards
        Vector3 targetPosition = target.position + rotatedOffsetPosition;

        // Using Lerp for smooth transition of the camera's position
        transform.position = Vector3.Lerp(transform.position, targetPosition, smoothing * Time.deltaTime);


        // ROTATION 

        // Target rotation the camera needs to align to
        Quaternion targetRotation = target.rotation * Quaternion.Euler(offsetRotation);

        // Using Lerp for smooth transition of the camera's rotation
        transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, smoothing * Time.deltaTime);
    }
}
