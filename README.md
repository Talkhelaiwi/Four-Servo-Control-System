# Four Servo Motors Project

## Project Overview

This project was developed using Arduino Uno and Tinkercad to control four servo motors.


## Tinkercad Project

https://www.tinkercad.com/things/8sVpnqrNNWt-foue-sevro-motors



### Task

Program four servo motors to perform the following actions:

1. Run using the Sweep motion for 2 seconds.
2. After that, make all the motors stop and hold at 90 degrees.

---

## Components Used

- Arduino Uno R3
- Breadboard
- 4 × Servo Motors
- Jumper Wires

---

## Circuit Connections

| Servo Motor | Signal Pin |
|-------------|------------|
| Servo 1 | D3 |
| Servo 2 | D5 |
| Servo 3 | D6 |
| Servo 4 | D9 |

Power Connections:

- All red wires → 5V
- All brown wires → GND

---

## Arduino Code
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


---

## Project Result

- All four servo motors move together using the Sweep motion.
- The Sweep motion runs for 2 seconds.
- After that, all motors stop and hold at 90°.

---

## Files Included

- four_servo_motors.ino
- README.md

---
## Author

Turki Alkhelaiwi for Smart Methods Summer Training
