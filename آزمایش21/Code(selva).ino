#include <Wire.h>

void setup() { Wire.begin(8); // آدرس اسلِو 8 
Wire.onReceive(receiveData); // تابع برای دریافت داده‌ها
Serial.begin(9600); }

void loop() { delay(100); }

void receiveData(int byteCount) {
while (Wire.available()) { // تا زمانی که داده‌ای دریافت شود 
char c = Wire.read(); // خواندن داده 
Serial.print(c); // چاپ داده‌ها } }
