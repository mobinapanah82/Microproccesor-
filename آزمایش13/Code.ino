#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

lcd.begin(16, 2); // تنظیم ابعاد LCD به 16 ستون و 2 سطر

lcd.clear(); // پاک کردن صفحه LCD

}

void loop() {

lcd.setCursor(2, 0); // تنظیم مکان نما در ستون 2 سطر 0

lcd.print("Hello ");

lcd.setCursor(2, 1); // تنظیم مکان نما در ستون 2 سطر 1

lcd.print("Hello 👋🏻");

}
