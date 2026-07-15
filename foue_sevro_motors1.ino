#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void moveAll(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}

void loop() {

  if (millis() <= 2000) {

    for (int angle = 0; angle <= 180; angle += 2) {
      moveAll(angle);
      delay(10);
    }

    for (int angle = 180; angle >= 0; angle -= 2) {
      moveAll(angle);
      delay(10);
    }

  } else {

    moveAll(90);

    while (true) {
    }

  }
}