int led = 13; 
int but = 2;

void setup() { 
  pinMode(led, OUTPUT); 
  pinMode(but, INPUT); 
}

void loop() {
  int pinState = digitalRead(but); 
  if(pinState == HIGH)
{ 
  digitalWrite(led, HIGH); } 
  else 
  { digitalWrite(led, LOW); } }
