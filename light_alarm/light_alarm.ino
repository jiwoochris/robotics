#include <Time.h>
#include <TimeLib.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setTime(16,0,0,17,11,21);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalClockDisplay();
  delay(1000);
}

void digitalClockDisplay()
{
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print(" ");
  Serial.print(month());
  Serial.print(" ");
  Serial.print(year());
  Serial.println();
}

void printDigits(int digits)
{
  // utility function for clock display: prints preceding colon and leading 0
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);  
}
