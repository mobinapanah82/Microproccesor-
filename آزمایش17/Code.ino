// پین‌های متصل به سون گمنت
int segmentPins[] = {2, 3, 4, 5, 6, 7, 8};

// آرایه ای از کدهای باینری که نشان دهنده اعداد 0 تا 9 است
int digits[10] = {
  B00111111, // 0
  B00000110, // 1
  B01011011, // 2
  B01001111, // 3
  B01100110, // 4
  B01101101, // 5
  B01111101, // 6
  B00000111, // 7
  B01111111, // 8
  B01101111  // 9
};

void setup(){

  // تنظیم پین‌ها به عنوان خروجی
  for (int i = 0; i < 7; i++) {
   
   pinMode(segmentPins[i], OUTPUT);
  }
  
}

void loop() {

  for (int i = 0; i < 10; i++) {
   
   // نمایش عدد i بر روی سون گمنت
    displayDigit(i);
    delay(1000);  // نمایش عدد به مدت 1 ثانیه
  }
}

void displayDigit(int num) {

  for (int i = 0; i < 7; i++) {
 
   // بررسی وضعیت هر پین و تنظیم آن بر اساس باینری عدد
    if (digits[num] & (1 << i)) {
      digitalWrite(segmentPins[i],
     
 
  HIGH); // روشن کردن پین
    } else {
      digitalWrite(segmentPins[i], LOW);  // خاموش کردن پین
    }
  }
}
