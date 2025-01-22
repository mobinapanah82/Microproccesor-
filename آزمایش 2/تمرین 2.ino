int led = 13; // تعریف پین LED

void setup() {

pinMode(led, OUTPUT); // تنظیم پین LED به عنوان خروجی }

void loop() { digitalWrite(led, HIGH); // روشن کردن 
LED delay(2000); // مکث به مدت 2 ثانیه 
digitalWrite(led, LOW); // خاموش کردن
LED delay(2000); // مکث به مدت 2 ثانیه }
