int led = 9;
float val = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  val = val * 5.0 / 1023;
  Serial.print("voltage:");
  Serial.print(val);
  Serial.println(" ");
}
