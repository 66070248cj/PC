void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert the voltage to temperature in degrees Celsius
  float temperature = voltage - 0.5;
  temperature = temperature / 0.01;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}
