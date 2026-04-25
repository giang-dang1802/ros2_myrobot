# Autonomous Lifting AGV Forklift
*A complete hardware-software stack for an autonomous mobile robot platform.*

## 📺 Project Showcase
[Add link to your YouTube/Drive video here]
*Description: AGV performing real-time SLAM, point-to-point navigation, and automated load picking.*

## 🚀 Overview
[cite_start]This project involves the end-to-end development of an autonomous forklift platform (AGV/AMR) built from scratch over 4 months[cite: 16].
* [cite_start]**High-level:** ROS 2 Humble/Foxy running on Raspberry Pi for SLAM and Navigation[cite: 7, 18].
* [cite_start]**Low-level:** STM32 (HAL Library) for real-time motor control and sensor processing[cite: 7, 17].

## 🛠 Hardware Architecture
* [cite_start]**Main Controller:** Raspberry Pi 4[cite: 7, 18].
* [cite_start]**Motor Controller:** STM32 Microcontroller (HAL/FreeRTOS)[cite: 7, 17, 26].
* **Custom PCB:** Designed 2-layer PCB including:
    * [cite_start]Power regulation and H-Bridge motor driver circuitry[cite: 17, 26].
    * [cite_start]Opto-isolated MCU protection for noise reduction[cite: 17, 26].
* [cite_start]**Sensors:** LiDAR for SLAM, Encoders for PID feedback[cite: 17, 18].

## 💻 Software Stack
* [cite_start]**Robot OS:** ROS 2 Humble/Foxy[cite: 7, 18].
* [cite_start]**Navigation:** Nav2 Stack for autonomous point-to-point navigation[cite: 18].
* [cite_start]**Perception:** SLAM (slam_toolbox/Gmapping) for real-time map building[cite: 18].
* [cite_start]**Firmware:** C/C++ using STM32 HAL, featuring PID control and UART communication[cite: 17].

## 📸 Technical Results
### SLAM & Navigation
![Add a screenshot of your RViz map here]
*Real-time occupancy grid mapping and path planning.*

### PCB Design
![Add your Altium/KiCad 3D View image here]
*Custom 2-layer PCB for motor driving and power management.*

## 📂 Repository Structure
* [cite_start]`src/`: ROS 2 packages for bringup, description (URDF), and navigation[cite: 18].
* [cite_start]`firmware/`: STM32CubeIDE project files (HAL-based)[cite: 17, 26].
* [cite_start]`hardware/`: Schematic and PCB layout files[cite: 17, 26].
