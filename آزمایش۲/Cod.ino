int led1 = 9; // تعریف پین LED اول 
int led2 = 13; // تعریف پین LED دوم

void setup() {

pinMode(led1, OUTPUT); // تنظیم پین LED اول به عنوان خروجی

pinMode(led2, OUTPUT); // تنظیم پین LED دوم به عنوان خروجی }

void loop() {

digitalWrite(led1, HIGH); // روشن کردن LED اول

digitalWrite(led2, HIGH); // روشن کردن LED دوم

delay(5000); // مکث به مدت 5 ثانیه 
digitalWrite(led1, LOW); // خاموش کردن LED اول

digitalWrite(led2, LOW); // خاموش کردن LED دوم

delay(500); // مکث به مدت 0.5 ثانیه }
