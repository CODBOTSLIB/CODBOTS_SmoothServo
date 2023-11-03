#include <CODBOTS_Servo.h>

CODBOTS_Servo::CODBOTS_Servo(int pin_servo_)
{
    pin_servo = pin_servo_;
    
}

void CODBOTS_Servo::begin(){
    servo.attach(pin_servo);
}

void CODBOTS_Servo::setInverse(bool inverse_){
    inverse = inverse_;
}

bool CODBOTS_Servo::write(int angle){
    angle = angle < range[0] ? range[0] : (angle > range[2] ? range[2] : angle);
    bool changed = c_angle != angle;
    if(changed){
        if(inverse){
        servo.write(range[2]-angle);
        }else{
            servo.write(angle);
        }

        write_time = millis();
        target_time = abs(c_angle - angle)*2;

        c_angle = angle;
    }
    return changed;
}

bool CODBOTS_Servo::isReached(){
    return millis() - write_time > target_time;
}

bool CODBOTS_Servo::turn(int plus){
    return write(c_angle + plus);
}

bool CODBOTS_Servo::turn(bool dir){
     if(dir){
        return turn(turn_speed);
     }else{
        return turn(-turn_speed);
     }
}

void CODBOTS_Servo::turn(){
    if(!turn(turn_dir)){
        turn_dir = !turn_dir;
    }
}

 void CODBOTS_Servo::wait(){
    while(!isReached()){}
 }