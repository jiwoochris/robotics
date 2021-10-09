// 202037071 정지우

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int count = 0;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(count);
  Serial.print(" sec\n");
  count++;
  delay(1000);
}
