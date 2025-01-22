int sensorPin = 2; // پایه متصل به خروجی سنسور 
int ledPin = 13; // پایه متصل به LED

void setup() { 
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT); }

void loop() { 
int sensorValue = digitalRead(sensorPin); 
if (sensorValue == HIGH) {
digitalWrite(ledPin, HIGH); // LED روشن
} else 
{ digitalWrite(ledPin, LOW); // LED خاموش
} 
}
