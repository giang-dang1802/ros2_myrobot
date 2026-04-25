# Autonomous Lifting AGV Forklift
*A complete hardware-software stack for an autonomous mobile robot platform.*

## 📺 Project Showcase
[Add link to your YouTube/Drive video here]
*Description: AGV performing real-time SLAM, point-to-point navigation, and automated load picking.*

## 🚀 Overview
This project involves the end-to-end development of an autonomous forklift platform (AGV/AMR) built from scratch over 4 months.
**High-level:** ROS 2 Humble/Foxy running on Raspberry Pi for SLAM and Navigation.
**Low-level:** STM32 (HAL Library) for real-time motor control and sensor processing.

## 🛠 Hardware Architecture
**Main Controller:** Raspberry Pi 4.
**Motor Controller:** STM32 Microcontroller (HAL/FreeRTOS).
 **Custom PCB:** Designed 2-layer PCB including:
    * Power regulation and H-Bridge motor driver circuitry.
    * Opto-isolated MCU protection for noise reduction.
 **Sensors:** LiDAR for SLAM, Encoders for PID feedback.

## 💻 Software Stack
 **Robot OS:** ROS 2 Humble/Foxy.
 **Navigation:** Nav2 Stack for autonomous point-to-point navigation.
 **Perception:** SLAM (slam_toolbox/Gmapping) for real-time map building.
 **Firmware:** C/C++ using STM32 HAL, featuring PID control and UART communication.

## 📸 Technical Results
### SLAM & Navigation
<img width="1874" height="1138" alt="image" src="https://github.com/user-attachments/assets/3b43775b-d7bb-43ec-a626-6b39d867ff80" />

*Real-time occupancy grid mapping and path planning.*

### PCB Design
<img width="1536" height="2048" alt="image" src="https://github.com/user-attachments/assets/6a6d4fb0-c5c3-4875-89e0-cf5ab461616e" />

*Custom 2-layer PCB for motor driving and power management.*

## 📂 Repository Structure
* `src/`: ROS 2 packages for bringup, description (URDF), and navigation[cite: 18].
* `firmware/`: STM32CubeIDE project files (HAL-based)[cite: 17, 26].
* `hardware/`: Schematic and PCB layout files[cite: 17, 26].
