### `API.md` for `ii_Servo` Library

```markdown
# ii_Servo Library API Reference

## Overview

The `ii_Servo` library provides an interface for controlling servo motors with Arduino, designed for ease of use and flexibility. This document serves as a comprehensive API reference guide.

## Constructor

### `ii_Servo(int pin_servo_)`

Initializes a new instance of the `ii_Servo` class.

- **Parameters**
  - `pin_servo_`: The GPIO pin number used to control the servo.
- **Returns**
  - An instance of the `ii_Servo` class.

## Methods

### `void begin()`

Initializes the servo motor.

- **Returns**
  - None.

### `void setRange(int min, int center, int max)`

Sets the range of motion for the servo motor.

- **Parameters**
  - `min`: Minimum angle the servo can turn to.
  - `center`: Center angle for the servo.
  - `max`: Maximum angle the servo can turn to.
- **Returns**
  - None.

### `void setInverse(bool inverse_)`

Sets whether the servo's movement should be inverted.

- **Parameters**
  - `inverse_`: A boolean value where `true` inverts the movement.
- **Returns**
  - None.

### `bool write(int angle)`

Writes a specific angle to the servo.

- **Parameters**
  - `angle`: The target angle to move the servo to.
- **Returns**
  - `true` if the operation is successful, `false` otherwise.

### `bool isReached()`

Checks if the servo has reached the target angle.

- **Returns**
  - `true` if the servo has reached the target angle, `false` otherwise.

### `void wait()`

Waits for the servo to reach its target angle.

- **Returns**
  - None.

### `bool turn(int plus)`

Turns the servo by a relative angle.

- **Parameters**
  - `plus`: The angle to turn the servo, positive or negative.
- **Returns**
  - `true` if the operation is successful, `false` otherwise.

### `bool turn(bool dir)`

Turns the servo one step in a specified direction.

- **Parameters**
  - `dir`: The direction to turn the servo.
- **Returns**
  - `true` if the operation is successful, `false` otherwise.

### `void turn()`

Automatically turns the servo back and forth within the set range.

- **Returns**
  - None.

## Example Usage

```cpp
#include <ii_Servo.h>

ii_Servo myServo(9); // Replace '9' with your servo pin

void setup() {
  myServo.begin();
  myServo.setRange(0, 90, 180);
  myServo.write(90);
}

void loop() {
  // Add code for servo control
}
```

This example demonstrates how to initialize the servo, set its range, and write a specific angle.

```

This `API.md` file provides a detailed reference for the `ii_Servo` library's API, including descriptions of its constructor, methods, parameters, and an example of how to use the library. Make sure to adjust the content to match the actual implementation and capabilities of your library.