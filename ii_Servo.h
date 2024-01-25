#ifndef ii_Servo_h
#define ii_Servo_h

#include <Arduino.h>

class ii_Servo
{
private:
    uint8_t pin_servo; // Pin number for the servo

    int range[3] = {0, 90, 180}; // Array to store min, center, and max angles for servo
    int turn_speed = 5;          // Speed of the servo's turn
    bool inverse;                // Flag to indicate if servo direction should be inverted

    long write_time;  // Time at which the servo was last instructed to move
    long target_time; // Time by which the servo should reach its target

    void writeServo(int angle); // Internal method to write an angle to the servo

public:
    bool turn_dir;   // Flag indicating the current direction of turn
    int c_angle = 0; // Current angle of the servo

    ii_Servo(int pin_servo_); // Constructor: initializes a servo on the specified pin
    void begin();             // Initialize the servo

    // Set the range of motion for the servo (minimum, center, maximum angles)
    void setRange(int min, int center, int max);

    // Set whether the servo's movement should be inverted
    void setInverse(bool inverse_);

    // Write a specific angle to the servo
    bool write(int angle);

    // Check if the servo has reached the target angle
    bool isReached();

    // Wait for the servo to reach its target angle (blocking call)
    void wait();

    // Turn the servo by a relative angle (positive or negative)
    bool turn(int plus);

    // Turn the servo one step in a specified direction
    bool turn(bool dir);

    // Auto-turn the servo; reverses direction upon reaching limits
    void turn();
};

#endif
