// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  if (val < 800){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, LOW);
  }
  delay(1000);
}
