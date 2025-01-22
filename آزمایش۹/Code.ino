int pinLed[] = { 5, 6, 7, 8, 9, 10 };
int but = A0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 8; i++) {
    pinMode(pinLed[i], OUTPUT);
  }
  pinMode(but, INPUT);
  randomSeed(analogRead(0));
}

void loop() {
  int ran = random(1, 8);
  int pinState = digitalRead(but);
  if (pinState == HIGH) {
    digitalWrite(pinLed[ran], HIGH);
    Serial.println(ran + 1);
    delay(2000);
    digitalWrite(pinLed[ran], LOW);
  }
}
