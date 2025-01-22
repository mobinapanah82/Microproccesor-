LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trig=10;
int echo=13;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  long duration;
  long distances;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  distances=(duration/2)*0.0343;

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(distances);
  lcd.print(" CM");
  delay(1000);
}
