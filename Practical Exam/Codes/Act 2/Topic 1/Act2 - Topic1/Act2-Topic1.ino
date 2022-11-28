int ledNum = 8;
int ledPin[] = { 2, 3, 4, 5, 6, 7, 8, 9};
int delayTime = 100;
int potPin = A0;

void setup() {
  for (int x = 0; x < ledNum; x++){
    pinMode(ledPin[x], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++){
    delayTime = analogRead(potPin);
    digitalWrite(ledPin[i], HIGH);
    delay(delayTime);
   	digitalWrite(ledPin[i], LOW);
  }
  for (int i = 7; i >= 0; i--){
    delayTime = analogRead(potPin);
    digitalWrite(ledPin[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPin[i], LOW);
  }
}
