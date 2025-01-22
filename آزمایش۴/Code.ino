void setup() {
  Serial.begin(9600); // تنظیم سرعت انتقال داده روی پورت سریال بر روی 9600 بیت بر ثانیه
}

void loop() {
  Serial.println("Hello World!"); // ارسال پیام "Hello World!" به همراه یک خط جدید
  delay(1000); // مکث به مدت 1 ثانیه
}
