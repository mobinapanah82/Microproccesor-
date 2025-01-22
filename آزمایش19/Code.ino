// تعریف پین ورودی برای سنسور
LM35 int sensorPin = A0; float voltage, temperatureC;

void setup() { 
// شروع ارتباط سریال
Serial.begin(9600); }

void loop() { 
// خواندن مقدار آنالوگ از سنسور 
LM35 int sensorValue = analogRead(sensorPin);

// تبدیل مقدار آنالوگ به ولتاژ (5 ولت برای آردوینو معمولی)
voltage = sensorValue * (5.0 / 1023.0);

// تبدیل ولتاژ به دما (در درجه سلسیوس)
temperatureC = voltage * 100.0;

// چاپ دما در سریال مانیتور
Serial.print("Temperature: "); 
Serial.print(temperatureC); 
Serial.println(" C");

// توقف به مدت ۱ ثانیه
delay(1000); }
