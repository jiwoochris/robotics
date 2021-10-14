// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delayMicroseconds(50);
  digitalWrite(3, LOW);

  int duration = pulseIn(2, HIGH);

  Serial.print("\n\nduration = ");
  Serial.print(duration);

  if (duration < 300){
    tone(8, 262);
  }
  else if (duration > 300 && 800 > duration){
    tone(8, 294);
  }
  else if (800 < duration && 2000 > duration){
    tone(8, 330);
  }
  else{
    noTone(8);
  }
}
