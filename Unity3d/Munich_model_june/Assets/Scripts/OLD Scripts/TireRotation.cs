using UnityEngine;

public class TireRotation : MonoBehaviour
{
    public GameObject tire1; // Reference to the tire GameObject
    public GameObject tire2;
    public GameObject tire3;
    public GameObject tire4;

    public GameObject car;  // Reference to the car GameObject to detect movement
    public float rotationMultiplier = 10f; // Multiplier to convert car speed to tire rotation speed

    private Vector3 lastLocalPosition;

    // Start is called before the first frame update
    void Start()
    {
        // Initialize lastLocalPosition with the car's initial position
        lastLocalPosition = car.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
        // Calculate the movement of the car in the z-direction
        Vector3 movement = car.transform.localPosition - lastLocalPosition;

        // Calculate the speed of the car in the z-direction = d/time inseconds

        float speed = movement.z / Time.deltaTime; 

        // Calculate the rotation amount based on the speed and rotation multiplier
        float rotationAmount = speed * rotationMultiplier * Time.deltaTime;

        // Rotate the tire around the y-axis for all the objects 
        tire1.transform.Rotate(0, -rotationAmount, 0); // Negative for clockwise rotation
        tire2.transform.Rotate(0, -rotationAmount, 0); // Negative for clockwise rotation
        tire3.transform.Rotate(0, -rotationAmount, 0); // Negative for clockwise rotation
        tire4.transform.Rotate(0, -rotationAmount, 0); // Negative for clockwise rotation

        // Update lastLocalPosition for the next frame
        lastLocalPosition = car.transform.localPosition;
    }
}
