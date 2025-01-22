// تعریف پین‌ها int IN1 = 3;

int IN2 = 4;

int ENA = 5;

void setup() {

// تنظیم پین‌ها به عنوان خروجی

pinMode(IN1, OUTPUT);

pinMode(IN2, OUTPUT);

pinMode(ENA, OUTPUT);

// تنظیم سرعت موتور

analogWrite(ENA, 255);

// سرعت کامل (مقدار بین 0 تا 255)

// حرکت به جلو 
  digitalWrite(IN1, HIGH);

digitalWrite(IN2, LOW);

}

void loop() {

// حرکت به جلو برای 2 ثانیه

delay(2000);

// توقف موتور

digitalWrite(IN1, LOW);

digitalWrite(IN2, LOW);

delay(1000);

// حرکت به عقب

digitalWrite(IN1, LOW);

digitalWrite(IN2, HIGH);

delay(2000);

// توقف موتور

digitalWrite(IN1, LOW);

digitalWrite(IN2, LOW);

delay(1000);
