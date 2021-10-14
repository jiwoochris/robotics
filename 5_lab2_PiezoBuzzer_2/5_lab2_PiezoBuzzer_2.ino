// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH){
    tone(8, 262);
  }
  else if (digitalRead(3) == HIGH){
    tone(8, 294);
  }
  else if (digitalRead(2) == HIGH){
    tone(8, 330);
  }
  else{
    noTone(8);
  }
}
