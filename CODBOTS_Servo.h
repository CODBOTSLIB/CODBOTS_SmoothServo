
#ifndef CODBOTS_Servo_h
#define CODBOTS_Servo_h

#include <Arduino.h>

class CODBOTS_Servo
{
private:
    uint8_t pin_servo;

    int range[3] = {0, 90, 180};
    int turn_speed = 5;
    bool inverse;

    long write_time;
    long target_time;

public:
    bool turn_dir;
    int c_angle = 0;
    CODBOTS_Servo(int pin_servo_);
    void begin();
    void setRange(int min, int center, int max);
    void setInverse(bool inverse_);

    bool write(int angle);
    bool isReached();
    void wait();

    bool turn(int plus);
    bool turn(bool dir);
    void turn();

    void writeServo(int angle);
};

#endif