include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// تعریف کاراکترهای سفارشی
byte heart[8] = { 0b00000, 0b01010, ... (تعریف سایر کاراکترها) };

void setup() { lcd.begin(16, 2);

// ایجاد کاراکترهای سفارشی در حافظه 
LCD lcd.createChar(0, heart); ... (ایجاد سایر کاراکترها)

lcd.setCursor(0, 0); 
lcd.print("I ");
lcd.write(byte(0)); // نمایش کاراکتر قلب 
lcd.print(" Arduino! "); 
lcd.write((byte)1); // نمایش کاراکتر شکلک }

void loop() { // (بخش اختیاری برای ایجاد افکت حرکتی با پتانسیومتر) ...

lcd.setCursor(4, 1);
lcd.write(3); // نمایش کاراکتر آدمک با دست‌های پایین 
delay(delayTime); 
lcd.setCursor(4, 1); 
lcd.write(4); // نمایش کاراکتر آدمک با دست‌های بالا
delay(delayTime); }
