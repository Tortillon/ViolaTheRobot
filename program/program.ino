#include "motor.h"

void showstart() {
  for(int i=0; i<=4; i++)
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
}
void setup() {
 pinMode(13, OUTPUT);
 showstart();
pinMode(tylp, OUTPUT);
pinMode(tyll, OUTPUT);
pinMode(przodl, OUTPUT);
pinMode(przodp, OUTPUT);
pinMode(PWM1, OUTPUT);
pinMode(PWM2, OUTPUT);

luz();
}

void loop() {
  // put your main code here, to run repeatedly:
  luz();
forward();
delay(2000);
luz();
backward();
delay(2000);
}
