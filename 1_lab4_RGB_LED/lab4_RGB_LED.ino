// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH); //Green
  delay(1000);
  digitalWrite(9, LOW); //Green
  
  digitalWrite(10, HIGH); //Red
  delay(1000);
  digitalWrite(10, LOW); //Red
  
  digitalWrite(11, HIGH); //Blue
  delay(1000);
  digitalWrite(11, LOW); //Blue
  
}
