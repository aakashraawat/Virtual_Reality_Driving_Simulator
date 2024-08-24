# Virtual Reality Driving Simulator

This repository contains the source code and models for a Virtual Reality Driving Simulator. The project integrates ROS2, Simcenter Prescan, and Unity3D to create a cohesive simulation environment for testing and development in autonomous driving and vehicle dynamics.

## Repository Structure

The repository is organized into the following directories:

### 1. ROS2
This directory contains all the ROS2 nodes, including subscribers and publishers, required for the simulation. It is designed to interact with the Unity3D environment and the Simcenter Prescan experiments.

- **Subscribers:** Nodes that subscribe to various topics, receiving data from different parts of the system.
- **Publishers:** Nodes that publish data to topics, sharing information with other nodes or systems.

### 2. Simcenter Prescan
This directory includes all the Prescan experiments and Simulink models used for the simulation. These experiments are crucial for creating realistic driving scenarios, which are then fed into the Unity3D environment.

- **Prescan Experiments:** Simulations that define the driving environment, traffic conditions, and sensor configurations.
- **Simulink Models:** Models that handle the dynamics and control aspects of the vehicle within the simulation.

### 3. Unity3D
This directory contains all the scripts required for the subscription of ROS2 nodes within the Unity environment. The Unity Robotics Hub is utilized to facilitate the communication between ROS2 and Unity3D.

- **Unity Scripts:** Scripts that manage the interactions between Unity3D and ROS2, including receiving data from ROS2 topics and using that data within the Unity3D simulation.

## Software and Operating System Versions

The following versions of software and operating systems are used in this project:

- **Windows:** WSL2 on Windows 11
- **Linux:** Ubuntu 20.04 on WSL2
- **ROS2:** Foxy Fitzroy
- **Simcenter Prescan:** Version 2302
- **Unity3D:** Version 2022.04
- **MATLAB:** Version 2022b

## Getting Started

To run the simulation, follow these steps:

1. **Set up ROS2:** Ensure ROS2 Foxy is installed and properly configured on your system. [ROS2 Installation Guide](https://docs.ros.org/en/foxy/Installation.html)
   
2. **Simcenter Prescan:** Install and configure Simcenter Prescan. Ensure that all the required dependencies are met for running the experiments included in the `Simcenter Prescan` directory.

3. **Unity3D Setup:** Set up Unity3D and integrate the Unity Robotics Hub. Follow the instructions in the Unity Robotics Hub documentation to link ROS2 nodes with Unity. [Unity Robotics Hub Guide](https://github.com/Unity-Technologies/Unity-Robotics-Hub)

4. **Run the Simulation:** 
   - Start the ROS2 nodes by running the relevant launch files.
   - Open the Prescan experiments in Simcenter Prescan and run the simulations.
   - Launch the Unity3D project and start the simulation. Ensure that the ROS2 nodes are properly communicating with Unity3D.

## Contributions

Contributions to this project are welcome. Please submit a pull request or create an issue if you encounter any problems or have suggestions for improvements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any inquiries or support, please contact the repository owner.

