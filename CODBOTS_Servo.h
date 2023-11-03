
#ifndef CODBOTS_Servo_h
#define CODBOTS_Servo_h

#include <Arduino.h>
#include <ESP32Servo.h>


class CODBOTS_Servo
{
private:
    Servo servo;
    uint8_t pin_servo;
    int c_angle = 0;
    int range[3] = {0,90,180};
    int turn_speed = 1;
    bool inverse;

    long write_time;
    long target_time;

    bool turn_dir;

public:
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
    
};


#endif