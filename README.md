# ii_Servo Library

![Example GIF](ii_servo_banner.jpg)
 
The `ii_Servo` library provides an easy-to-use interface for controlling servo motors with Arduino, specifically designed for ESP32 devices. It simplifies the process of controlling servo positions, managing range limits, and automating movements.

## Features

- **Precision Control**: Easily write specific angles to the servo motor.
- **Auto Turn Functionality**: Automate the servo's movement, allowing it to turn back and forth within a specified range.
- **Range Limiting**: Set minimum and maximum limits for servo movement to prevent mechanical issues.
- **Inverse Movement**: Option to invert the direction of servo movement.

![Example GIF](ii_servo.gif)

## Installation

1. **Download the Library**:
   - Navigate to the `ii_Servo` GitHub repository.
   - Download the library as a ZIP file.

2. **Install in Arduino IDE**:
   - Open Arduino IDE.
   - Go to `Sketch` > `Include Library` > `Add .ZIP Library...`.
   - Select the downloaded ZIP file.

3. **Include in Your Project**:
   - In your Arduino sketch, include the library with `#include <ii_Servo.h>`.

## Usage Examples

### Example 1: Writing an Angle to Servo

```cpp
// servo_01_write_angle.ino
#include <ii_Servo.h>

// Initialize the ii_Servo library with the servo pin
ii_Servo myServo(9); // Replace '9' with your servo pin

void setup() {
  myServo.begin();
  myServo.write(90); // Write 90-degree position
}

void loop() {
  // Add code here
}
```

### Example 2: Auto Turn Functionality

```cpp
// servo_02_auto_turn.ino
#include <ii_Servo.h>

ii_Servo myServo(9); // Replace '9' with your servo pin

void setup() {
  myServo.begin();
  myServo.turn(); // Auto turn the servo
}

void loop() {
  // Add code here
}
```

### Example 3: Limiting Servo Range

```cpp
// servo_03_limit_range.ino
#include <ii_Servo.h>

ii_Servo myServo(9); // Replace '9' with your servo pin

void setup() {
  myServo.begin();
  myServo.setRange(30, 90, 150); // Set range (min, center, max)
}

void loop() {
  // Add code here
}
```
---

## API Documentation

For detailed information on how to use the various functions provided by the `ii_Servo` library, please refer to our comprehensive [API documentation](https://github.com/ii-lk/ii_Servo/blob/main/API.md). This documentation includes a complete reference guide to all the functions available in the library, along with descriptions, parameters, and example usage to help you get the most out of `ii_Servo` in your projects.

---

## Contributing

Contributions to the `ii_Servo` library are welcome. Feel free to fork the repository, make your changes, and submit a pull request.

## License

The `ii_Servo` library is licensed under the [MIT License](LICENSE). See the LICENSE file in the repository for more details.
