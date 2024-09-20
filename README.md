# Square-Traversing Wheel Robot

#### Video Demo:  <https://youtube.com/shorts/4BLlZ7qaLtk?feature=share>

#### Description:

This Square-Traversing Wheel Robot is an Arduino-based project designed to control a robot that moves in a square pattern. The system demonstrates the use of motor control, timing, and basic movement algorithms in robotics.

Key Features:
1. **Square Movement**: The robot moves in a square pattern, demonstrating basic geometric navigation.
2. **Motor Control**: Uses PWM (Pulse Width Modulation) to control the speed and direction of two DC motors.
3. **Timing Control**: Utilizes precise timing to control the duration of each movement, ensuring accurate square traversal.
4. **Customizable**: The code includes commented sections that allow for easy customization of movement patterns and speeds.

Technical Implementation:
The project is implemented using Arduino, which is based on C++, and makes use of several key concepts:

- `pinMode()`: Used to set up the motor control pins as outputs.
- `analogWrite()`: Employed for controlling the speed of the motors using PWM.
- `delay()`: Utilized to control the timing of each movement segment.

The main loop of the program consists of two movement phases:
1. Forward-right movement for 330 milliseconds.
2. Forward-left movement for 1000 milliseconds.

This sequence is repeated continuously, resulting in the square traversal pattern.

Hardware Requirements:
- Arduino board (e.g., Arduino Uno)
- 2 DC motors
- Motor driver (e.g., L298N)
- Power supply for motors
- Wheels and chassis for the robot

Pin Configuration:
- Pin 5: Left motor forward
- Pin 6: Left motor backward
- Pin 10: Right motor forward
- Pin 11: Right motor backward

Usage:
1. Connect the motors to the appropriate pins on the Arduino and motor driver.
2. Upload the provided code to your Arduino board.
3. Power on the robot and place it on a flat surface.
4. The robot will automatically start moving in a square pattern.

Customization:
The code includes commented-out sections that can be modified to adjust the robot's movement pattern. Users can experiment with different speed values and delay times to change the size and shape of the robot's path.

In conclusion, this Square-Traversing Wheel Robot project demonstrates the use of Arduino programming, motor control, and basic robotics principles to create a simple but effective robot movement system. It serves as a foundation for more complex robotics projects and can be easily expanded upon for various applications in robotics education and prototyping.
