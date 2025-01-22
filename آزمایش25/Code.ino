#include <Keypad.h>

const byte ROW_NUM = 4; // تعداد ردیف‌ها 
const byte COLUMN_NUM = 4; // تعداد ستون‌ها

// تنظیمات پین‌ها برای ردیف‌ها و ستون‌ها چ
char keys[ROW_NUM][COLUMN_NUM] = { {'1','2','3','A'}, {'4','5','6','B'}, {'7','8','9','C'}, {'*','0','#','D'} };

byte pin_rows[ROW_NUM] = {2, 3, 4, 5}; // پین‌های ردیف‌ها 
byte pin_column[COLUMN_NUM] = {6, 7, 8, 9}; // پین‌های ستون‌ها

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup() { Serial.begin(9600); // شروع ارتباط سریال }

void loop() { char key = keypad.getKey(); // خواندن دکمه فشرده شده

if (key) { // اگر دکمه فشرده شده باشد 
Serial.print("Key Pressed: ");
Serial.println(key); // نمایش دکمه فشرده شده در مانیتور سریال 
} 
}
