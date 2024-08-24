Virtual Reality Driving Simulator
Welcome to the Virtual Reality Driving Simulator repository! This project is a part of a master's thesis focusing on developing an immersive and efficient simulation environment integrating contemporary technologies. The aim is to create a robust platform for conducting advanced vehicle simulations, particularly in automotive engineering and virtual reality.

Table of Contents
Introduction
Project Structure
Technologies Used
Setup and Installation
Usage
Contributing
License
Acknowledgements
Introduction
This project demonstrates the integration of simulation software, real-time systems, and VR technologies to build a comprehensive driving simulator. The simulator is designed with sustainability, efficiency, and practical application in mind, providing a valuable tool for Advanced Driver Assistance Systems (ADAS) testing and development through Human-in-the-Loop (HIL) simulations.

Project Structure
bash
Copy code
Virtual_Reality_Driving_Simulator/
│
├── Simcenter Prescan/       # Prescan Experinment for vehicle dynamics and control
│   ├── Simulink Models/
│   └── Prescan Experimnent/
│
├── Unity3D/         # Unity3D project for VR environment
│   ├── Assets/
│   └── Scripts/
│
├── ROS2/            # ROS2 nodes for communication between Simulink and Unity
│   ├── build/
│   └── install/
│   └── Src/
│
├── Docs/                  # Documentation and thesis-related materials
│   ├── Thesis.pdf
│   └── Presentation/
│
└── README.md              # Project README file
Technologies Used
Prescan/Simulink: For vehicle dynamics and control simulation.
Unity3D: For creating the immersive VR environment.
ROS2 Foxy: Middleware for communication between Simulink and Unity3D.
Varjo Aero VR Headset: For high-resolution VR visualization.(Hardware)

Setup and Installation

Prerequisites
Ubuntu 20.04
ROS2 Foxy
Unity3D 2020.2 or later
MATLAB R2022b with Simulink
MOOG Software Suite
Installation
Clone the repository:

bash
Copy code
git clone https://github.com/aakashraawat/Virtual_Reality_Driving_Simulator.git
Setting up ROS2:

Follow the official ROS2 Foxy installation guide here.
Setting up Unity:

Open the Unity_Project folder in Unity3D.
Import necessary assets and ensure all required packages are installed.
Setting up Simulink:

Open the Simulink models in MATLAB.
Configure the models according to the project's specifications.
MOOG Platform Configuration:

Refer to the MOOG_Setup directory for detailed instructions on integrating the MOOG platform with the simulator.
Usage
Running the Simulation:

Power on the MOOG steering wheel and Varjo Aero VR headset.
Start SimWB on the workstation.
Initialize the MOOG steering wheel and pedals.
Launch the Unity scene and ROS2 nodes.
Run the Simulink model to initiate the simulation.
Data Recording:

Use SimWB to record simulation data during the driving session.
Save the data in .mat format for post-analysis.
Motion Simulation:

Replay the recorded data to drive the MOOG Hexapod platform, providing a fully immersive VR experience.
Contributing
Contributions are welcome! Feel free to fork this repository, make your changes, and submit a pull request. For significant changes, please open an issue first to discuss your proposed modifications.

License
This project is licensed under the MIT License - see the LICENSE file for details.
