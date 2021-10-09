// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val1 = map(analogRead(A0), 0, 1023, 0, 255);
  int val2 = map(analogRead(A1), 0, 1023, 0, 255);
  int val3 = map(analogRead(A2), 0, 1023, 0, 255);

  analogWrite(9, val1);
  analogWrite(10, val2);
  analogWrite(11, val3);
  
}
