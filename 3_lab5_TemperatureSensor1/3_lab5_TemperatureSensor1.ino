// 202037071 정지우

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(5.0*analogRead(A0)*100.0 / 1024.0);
  delay(1000);
  
}
