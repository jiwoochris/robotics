// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(100);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(100);
}
