#define SET_BUTTON 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SET_BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(SET_BUTTON == HIGH)
  {
    Serial.println("Button High");
  }
  else
    Serial.println("Button Low");

  delay(500);
}
