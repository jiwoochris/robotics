// 202037071 정지우

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH)
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);
  if (digitalRead(3) == HIGH)
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW);
  if (digitalRead(4) == HIGH)
    digitalWrite(10, HIGH);
  else
    digitalWrite(10, LOW);

}
