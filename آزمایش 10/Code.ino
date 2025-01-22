
int led = 9;
float val = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  val = val / 4;
  analogWrite(led, val);
  Serial.println(val);
}
