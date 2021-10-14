// 202037071 정지우

int arr[] = {392, 392, 440, 440, 392, 392, 329,
  329, 392, 392, 329, 329, 294, 294};

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i< 14; i++){
    tone(8, arr[i], 500);
    delay(500);
  }
}
