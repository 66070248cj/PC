void setup() {
  pinMode(4, INPUT);  // ปุ่มสีแดง
  pinMode(5, INPUT);  // ปุ่มสีเขียว
  pinMode(6, INPUT);  // ปุ่มสีน้ำเงิน
  pinMode(8, OUTPUT); // ควบคุมไฟสีแดง
  pinMode(9, OUTPUT); // ควบคุมไฟสีเขียว
  pinMode(10, OUTPUT); // ควบคุมไฟสีน้ำเงิน
}

void loop() {
  if (digitalRead(4) == HIGH) {
    digitalWrite(8, HIGH);  // เปิดไฟสีแดง
  } else {
    digitalWrite(8, LOW); // ปิดไฟสีแดง
  }

  if (digitalRead(5) == HIGH) {
    digitalWrite(9, HIGH);  // เปิดไฟสีเขียว
  } else {
    digitalWrite(9, LOW); // ปิดไฟสีเขียว
  }

  if (digitalRead(6) == HIGH) {
    digitalWrite(10, HIGH);  // เปิดไฟสีน้ำเงิน
  } else {
    digitalWrite(10, LOW); // ปิดไฟสีน้ำเงิน
  }
}
