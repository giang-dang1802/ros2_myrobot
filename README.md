<img width="1291" height="144" alt="image" src="https://github.com/user-attachments/assets/851675e0-4ec8-4b47-bd78-339b1996f924" /># Autonomous Lifting AGV Forklift
*A complete hardware-software stack for an autonomous mobile robot platform.*

## 📺 Project Showcase
https://youtube.com/shorts/ts7t1EAcZg8
*Description: AGV performing real-time SLAM, point-to-point navigation, and automated load picking.*

## 🚀 Overview
[cite_start]This project involves the end-to-end development of an autonomous forklift platform (AGV/AMR) built from scratch over 4 months.
* [cite_start]**High-level:** ROS 2 Humble/Foxy running on Raspberry Pi for SLAM and Navigation.
* [cite_start]**Low-level:** STM32 (HAL Library) for real-time motor control and sensor processing.
## 🛠 Hardware Architecture
* [cite_start]**Main Controller:** Raspberry Pi 4.
* [cite_start]**Motor Controller:** STM32 Microcontroller (HAL/FreeRTOS).
* **Custom PCB:** Designed 2-layer PCB including:
    * [cite_start]Power regulation and H-Bridge motor driver circuitry.
    * [cite_start]Opto-isolated MCU protection for noise reduction.
* [cite_start]**Sensors:** LiDAR for SLAM, Encoders for PID feedback.

## 💻 Software Stack
* [cite_start]**Robot OS:** ROS 2 Humble/Foxy.
* [cite_start]**Navigation:** Nav2 Stack for autonomous point-to-point navigation.
* [cite_start]**Perception:** SLAM (slam_toolbox/Gmapping) for real-time map building.
* [cite_start]**Firmware:** C/C++ using STM32 HAL, featuring PID control and UART communication.

## 📸 Technical Results
### SLAM & Navigation
<img width="1280" height="814" alt="image" src="https://github.com/user-attachments/assets/c9402ed1-19ea-4e71-9505-aa06d602ad1a" />

*Real-time occupancy grid mapping and path planning.*

### PCB Design
<img width="1536" height="2048" alt="image" src="https://github.com/user-attachments/assets/cbacf7b5-2bf0-4eea-b3c2-a01e6d495586" />

*Custom 2-layer PCB for motor driving and power management.*

## 📂 Repository Structure
* [cite_start]`src/`: ROS 2 packages for bringup, description (URDF), and navigation.
* [cite_start]`firmware/`: STM32CubeIDE project files (HAL-based).
* [cite_start]`hardware/`: Schematic and PCB layout files.
