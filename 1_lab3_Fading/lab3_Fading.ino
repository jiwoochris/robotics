// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<256; i++){
    analogWrite(10, i);
    analogWrite(11, 256 - i);
    delay(10);
  }
}
