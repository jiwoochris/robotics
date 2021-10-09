// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(10) == HIGH){
    analogWrite(9, 0);
  }
  else{
    int val = map(analogRead(A0), 0, 1023, 0, 255);
    analogWrite(9, 255 - val);
  }

  delay(100);
}
