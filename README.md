# Square-Traversing Wheel Robot

This Arduino project controls a wheel robot to traverse a square path. The robot uses four pins to control two motors, allowing it to move in a square pattern.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- 2 DC motors
- Motor driver (e.g., L298N)
- Power supply for motors
- Wheels and chassis for the robot

## Pin Configuration

- Pin 5: Left motor forward
- Pin 6: Left motor backward
- Pin 10: Right motor forward
- Pin 11: Right motor backward

## Functionality

The robot performs the following sequence:

1. Moves forward-right for 330 milliseconds
2. Moves forward-left for 1000 milliseconds
3. Repeats the sequence

This movement pattern should result in the robot traversing a square path.

## Usage

1. Connect the motors to the appropriate pins on the Arduino and motor driver.
2. Upload the provided code to your Arduino board.
3. Power on the robot and place it on a flat surface.
4. The robot will start moving in a square pattern automatically.

## Notes

- The `analogWrite()` function is used to control the speed of the motors. Values range from 0 (off) to 255 (full speed).
- The `delay()` function pauses the program for the specified number of milliseconds, controlling how long each movement lasts.
- Ensure your power supply is sufficient for your motors and Arduino board.

## Troubleshooting

If the robot is not moving as expected:
1. Check all wiring connections.
2. Verify that the motors are receiving enough power.
3. Adjust the speed values (`analogWrite()`) if the robot is moving too fast or too slow.
4. Modify the delay times to change the size of the square pattern.
