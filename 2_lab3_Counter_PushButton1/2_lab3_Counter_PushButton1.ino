// 202037071 정지우
int counter = 0;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(counter);
  Serial.print(" sec\n");
  delay(1000);
  counter++;

  buttonState = digitalRead(8);

  if (buttonState == HIGH)
    counter = 0;
}
