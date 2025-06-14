# jetson-interactive-sensor-system

# Jetson Nano Interactive Sensor-Based System 

This project was developed as part of the **EEE 313 - Introduction to Embedded Systems** final exam application. It demonstrates an interactive sensor-based system utilizing the **NVIDIA Jetson Nano Developer Kit**, integrating motion sensing, LCD display, servo motor control, and visual/audio feedback.

## Purpose of the Application

The goal is to design a multi-component embedded system where:

- A button triggers **LED + RGB LED + Buzzer** activation.
- A **motion sensor** (ultrasonic) detects object proximity and displays the distance on an **LCD screen**.
- A **step motor** (servo) adjusts its position based on the distance measured by the sensor.
- System behavior dynamically responds to real-time sensor data.

This application showcases the integration of sensors, actuators, and display elements in an embedded Linux environment using Python.

---

## Hardware Components Used

| Component        | Description                        |
|------------------|------------------------------------|
| Board          | NVIDIA Jetson Nano Dev. Kit          |
| RGB LED        | Common Cathode                       |
| Motor          | Servo motor (PWM control)            |
| Sensor         | Ultrasonic Motion Sensor (HC-SR04)   |
| Display        | 16x2 LCD                             |
| Button         | Digital input for activation         |
| Buzzer         | Digital output for audio signal      |
| LED            | Digital output for light indicator   |
| 🎚Potentiometer  | Used for brightness or contrast     |

---

## Software & Tools

- **Python** with Jetson.GPIO library
- 🖋Gedit (code editing)
- Fritzing (circuit design)
- Linux terminal (Jetson Nano environment)

---

## Code Overview

Main Python script includes:

- GPIO setup for all components
- LCD control using direct pin toggling
- Ultrasonic distance measurement
- PWM control for servo angle
- Real-time LCD updates
- Button-triggered audio-visual feedback

> The full source code is available in `last_project.ino`  
> Project report and circuit schematic are also provided.

---

## File Structure

├── last_project.ino # Full Python code for the application

├── Final Exam Application Homework.docx # Official project report

├── jetson_finder_schmetics_last_project.fzz # Circuit design (Fritzing)

├── README.md


---

## Video Demonstration

[YouTube Video] (https://youtu.be/cGWIf6S6mco)

Watch the project in action!  
The video includes: system overview, code explanation, successful compilation and upload, and live demo with all components.

---

## Team

- Suat Deniz  
- Ata Güneş

---

## Notes

- This project does **not** use Arduino IDE.
- It was implemented entirely using **Python** on Jetson Nano.
- LCD control is manually implemented via GPIO pins (no I2C library).

---

## License

This project is licensed under the [MIT License](LICENSE).

You are free to use, modify, and distribute this project for personal, academic, or commercial purposes — just make sure to include proper attribution.


