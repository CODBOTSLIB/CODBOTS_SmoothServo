#include <ii_Servo.h>

//servo
#define PIN_SERVO 18

ii_Servo servo(PIN_SERVO);

void setup() {
  Serial.begin(115200);
  servo.begin();
}

void loop() {
  if (servo.isReached()) {
    servo.turn();
  }
}
