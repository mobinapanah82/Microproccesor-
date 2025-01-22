#include <DHT.h>

#define DHTPIN 7 // پین متصل به سنسورDHT11
#define DHTTYPE DHT11 // نوع سنسور (در اینجا DHT11)

DHT dht(DHTPIN, DHTTYPE);

void setup() { Serial.begin(9600); // راه‌اندازی ارتباط سریال
dht.begin(); // راه‌اندازی سنسور DHT11 }

void loop() { delay(2000); // زمان تأخیر برای خواندن دما و رطوبت

// خواندن دما و رطوبت 
float h = dht.readHumidity();
float t = dht.readTemperature();

// بررسی صحت داده‌ها
if (isnan(h) || isnan(t)) { 
  Serial.println("خطا در خواندن داده‌ها!"); 
  return; 
}

// نمایش دما و رطوبت در سریال مانیتور
Serial.print("رطوبت: "); 
Serial.print(h);
Serial.print("% دما: "); 
Serial.print(t);
Serial.println("°C"); 
}
