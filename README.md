# IR Flame Sensor

#### Project Overview

The IR Flame Sensor project demonstrates how to use an IR flame sensor with an Arduino Mega to detect the presence of a flame. The IR flame sensor provides a digital output, which changes state when it detects infrared light emitted by a flame. This project reads the sensor state and prints the result to the Serial Monitor, indicating whether a flame is detected or not.

#### Components Needed

- **Arduino Mega**
- **IR Flame Sensor Module**
- **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect the IR Flame Sensor to Arduino Mega:**
   - **Signal Pin** of the IR flame sensor module to digital pin 2 (`flameSensorPin`) on Arduino Mega
   - **VCC** of the IR flame sensor module to **5V** on Arduino Mega
   - **GND** of the IR flame sensor module to **GND** on Arduino Mega

#### Instructions

1. **Circuit Setup:**
   - Connect the IR flame sensor module to the Arduino Mega as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Mega.
   - Open the serial monitor in Arduino IDE (set to 9600 baud).
   - Observe the Serial Monitor for messages indicating the state of the flame sensor module and flame detection.

#### Applications

- **Fire Detection Systems:** Integrate into projects that require fire or flame detection for safety and alarm systems.
- **Robotics:** Use in robotic projects for detecting and avoiding fire or hazardous areas.
- **Safety Automation:** Implement in automation systems to trigger actions such as activating alarms or shutting down equipment when a flame is detected.

#### Notes

- Ensure the IR flame sensor is positioned correctly to detect flames effectively.
- Adjust the delay time in the `loop()` function to control the frequency of sensor readings based on your project requirements.
- Test the sensor with a controlled flame source to ensure it is working correctly and calibrate if necessary.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-ir-flame-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner