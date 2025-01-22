const int xPin = A0; // پین آنالوگ برای محور 
X const int yPin = A1; // پین آنالوگ برای محور
Y const int buttonPin = 2; // پین دیجیتال برای دکمه

void setup() { Serial.begin(9600); // شروع ارتباط سریال 
pinMode(buttonPin, INPUT_PULLUP); // تنظیم دکمه برای ورودی }

void loop() { int xValue = analogRead(xPin); // خواندن مقدار محور
X int yValue = analogRead(yPin); // خواندن مقدار محور
Y int buttonState = digitalRead(buttonPin); // خواندن وضعیت دکمه

// ارسال مقادیر به مانیتور سریال 
Serial.print("X: ");
Serial.print(xValue); 
Serial.print("\tY: "); 
Serial.print(yValue); 
Serial.print("\tButton: ");
Serial.println(buttonState == LOW ? "Pressed" : "Released");

delay(100);
// تأخیر برای خواندن راحت‌تر }
