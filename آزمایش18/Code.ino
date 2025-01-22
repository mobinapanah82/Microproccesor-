// فرکانس‌های نت‌ها
(C4, D4, E4, F4, G4, A4, B4, C5) const int notes[] = {262, 294, 330, 349, 392, 440, 494, 523};

// پین‌های متصل به سوییچ‌ها
const int switches[] = {2, 3, 4, 5, 6, 7, 8};

// پین متصل به بلندگو
const int speakerPin = 9;

void setup() { // تنظیم پین بلندگو به عنوان خروجی 
pinMode(speakerPin, OUTPUT);

// تنظیم پین‌های سوییچ‌ها به عنوان ورودی با مقاومت
Pull-up for (int i = 0; i < 8; i++) 
{ 
  pinMode(switches[i], INPUT_PULLUP);
}
}

void loop() { // بررسی وضعیت هر سوییچ
  for (int i = 0; i < 8; i++) 
{ // اگر سوییچ فشرده شده باشد 
if (digitalRead(switches[i]) == LOW) {
// پخش نت مربوطه 
tone(speakerPin, notes[i]);
delay(300); // مدت زمان پخش نت
noTone(speakerPin); // خاموش کردن صدای بلندگو بعد از پخش نت 
} 
} 
}
