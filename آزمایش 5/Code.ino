void setup() {
  Serial.begin(9600); // تنظیم سرعت انتقال داده روی پورت سریال بر روی 9600 بیت بر ثانیه
}

void loop() {
  float a, b, result;
  char c;

  Serial.println("number1:");
  while (!Serial.available());  // منتظر دریافت داده از سریال
  a = Serial.parseFloat();     // خواندن عدد اول
  Serial.println(a);

  Serial.println("enter + - * /:");
  while (!Serial.available());  // منتظر دریافت عملگر
  c = Serial.read();           // خواندن عملگر
  Serial.println(c);

  Serial.println("number2:");
  while (!Serial.available());  // منتظر دریافت عدد دوم
  b = Serial.parseFloat();     // خواندن عدد دوم
  Serial.println(b);

  switch (c) {
    case '+':
      result = a + b;
      Serial.print("result:");
      Serial.println(result);
      break;
    case '-':
      result = a - b;
      Serial.print("result:");
      Serial.println(result);
      break;
    case '*':
      result = a * b;
      Serial.print("result:");
      Serial.println(result);
      break;
    case '/':
      if (b != 0) {
        result = a / b;
        Serial.print("result:");
        Serial.println(result);
      } else {
        Serial.println("error");
      }
      break;
  }
}
