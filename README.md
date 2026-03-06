💧 Ultrasonic Water Level Monitoring System

A simple Arduino-based water level monitoring system that measures the distance between the ultrasonic sensor and the water surface inside a tank. The system displays the distance and water level on an LCD and gives buzzer alerts as the tank fills.

🚀 Features

📏 Real-time distance measurement using ultrasonic sensor
📟 Displays distance and water level on 16x2 LCD
🔔 3 buzzer beeps at half level
⚡ Faster beeping as tank approaches full level
🚨 Continuous buzzer when tank is full

⚙️ Working Principle

1️⃣ The HC-SR04 ultrasonic sensor sends ultrasonic waves toward the water surface.

2️⃣ The sensor measures the time taken for the echo to return.

3️⃣ Distance is calculated using:
Distance = (Time × Speed of Sound) / 2

4️⃣ Water level is calculated using:
Water Level = Tank Height − Measured Distance

5️⃣ The LCD displays the distance and water level in real time.

6️⃣ Buzzer alerts:

🔔 Half tank → 3 beeps

⚡ Near full → faster beeps

🚨 Full tank → continuous beep

## 🎥 Project Demo

Click the image below to watch the project video.

[![Watch the Demo](https://img.shields.io/badge/Watch-Project%20Video-blue?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/posts/activity-7403021258071740416-1NJh)
