#include <ii_Servo.h>

//servo
#define PIN_SERVO 13

ii_Servo servo(PIN_SERVO);

void setup() {
  Serial.begin(115200);
  servo.begin();
  servo.setRange(45,90,135);
}

void loop() {
    if (servo.isReached()) {
    servo.turn();
  }
}
