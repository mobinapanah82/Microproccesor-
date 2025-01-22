#include <Wire.h>

void setup() { Wire.begin(); // شروع ارتباط I2C به عنوان مستر 
Serial.begin(9600); }

void loop() { Wire.beginTransmission(8); // شروع ارتباط با اسلِو که آدرس 8 دارد 
Wire.write("Hello Slave"); // ارسال داده به اسلِو 
Wire.endTransmission(); // پایان ارتباط 
delay(1000); // تاخیر یک ثانیه }
