int led = 9;
float val;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  val = analogRead(A0);
  for (int i = 0; i < 255; i = i + 5) {
    delay(10);
    analogWrite(led, i);
  }
  for (int i = 255; i > 0; i = i - 5) {
    delay(10);
    analogWrite(led, i);
  }
}
