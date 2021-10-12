// 202037071 정지우
#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = map(analogRead(A0), 0, 1023, 0, 180);
  myservo.write(val);
}
