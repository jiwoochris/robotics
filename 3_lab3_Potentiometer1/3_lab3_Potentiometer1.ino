// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(516 < analogRead(A0)){
    digitalWrite(9, HIGH);
  }
  else if(516 > analogRead(A0)){
    digitalWrite(9, LOW);
  }
}
