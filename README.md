💧 Ultrasonic Water Level Monitoring System

A simple Arduino-based water level monitoring system that measures the distance between the ultrasonic sensor and the water surface inside a tank. The system displays the distance and water level on an LCD and gives buzzer alerts as the tank fills.

🚀 Features

📏 Real-time distance measurement using ultrasonic sensor
📟 Displays distance and water level on 16x2 LCD
🔔 3 buzzer beeps at half level
⚡ Faster beeping as tank approaches full level
🚨 Continuous buzzer when tank is full

⚙️ How It Works

1️⃣ The ultrasonic sensor measures the distance between the sensor and the water surface.

2️⃣ The tank height is predefined in the code (in this project 6 cm).

3️⃣ Water level is calculated using:

Water Level = Tank Height − Measured Distance

4️⃣ The LCD displays:

Distance from sensor

Current water level

5️⃣ Buzzer alerts:

🔔 3 beeps at half tank level

⚡ Faster beeps as water level increases

🚨 Continuous beep when tank is full
