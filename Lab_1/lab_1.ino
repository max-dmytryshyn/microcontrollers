const unsigned char ledPins[8] = {49, 48, 47, 46, 45, 44, 43, 42};
const unsigned char buttonPin = 27;

void setup() {
  DDRL = 0xFF;
  PORTL = 0x00;
  
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    for (int i = 0; i < 4; i ++) {
      digitalWrite(ledPins[7-i], HIGH);
      delay(750);
      digitalWrite(ledPins[7-i], LOW);
      
      digitalWrite(ledPins[i], HIGH);
      delay(750);
      digitalWrite(ledPins[i], LOW);
    }
  }
}
