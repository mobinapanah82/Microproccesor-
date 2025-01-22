int ledPins[] = { 6, 7, 8, 9, 10 };
int but1 = A0;
int ledPattern[6][5] = {
  { 1, 0, 0, 0, 0 },
  { 1, 1, 0, 0, 0 },
  { 0, 1, 1, 0, 0 },
  { 0, 0, 1, 1, 0 },
  { 0, 0, 0, 1, 1 },
  { 0, 0, 0, 0, 1 }
};

void setup() {
  pinMode(but1, INPUT);
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int pinState1 = digitalRead(but1);
  if (pinState1 == HIGH) {
    state3();
  }
}

void state3() {
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 5; j++) {
      if (ledPattern[i][j] == 1) {
        digitalWrite(ledPins[i], HIGH);
        digitalWrite(ledPins[i + 1], HIGH);
        delay(100);
      } else {
        digitalWrite(ledPins[i], LOW);
        digitalWrite(ledPins[i + 1], LOW);
        delay(100);
      }
    }
  }
  digitalWrite(ledPins[4], LOW);
}
