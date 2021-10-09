// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    int times = Serial.parseInt();

    Serial.println(times);
    
    for (int i = 0; i < times; i++){
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(8, LOW);
      delay(1000);
    }
  }
}
