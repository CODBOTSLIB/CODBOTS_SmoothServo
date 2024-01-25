#include <ii_Servo.h>

//servo
#define PIN_SERVO 13

ii_Servo servo(PIN_SERVO);

void setup() {
  Serial.begin(115200);
  servo.begin();
}

void loop() {
  for (int a = 0; a < 180; a += 10) {
    servo.write(a);
    servo.wait();
  }
  for (int a = 180; a > 0; a -= 10) {
    servo.write(a);
    servo.wait();
  }
}
