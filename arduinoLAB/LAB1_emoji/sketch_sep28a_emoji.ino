#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

uint32_t frame1[3] = {0xFFF80199, 0x9801A059, 0xF9801FFF};
uint32_t frame2[3] = {0xFFF80199, 0x98018019, 0xF9801FFF};
uint32_t frame3[3] = {0xFFF80199, 0x98019F9A, 0x05801FFF};

void setup() {
  matrix.begin();
}

void loop() {
  int interval = 1000;

  matrix.loadFrame(frame1);
  delay(interval);
  matrix.loadFrame(frame2);
  delay(interval);
  matrix.loadFrame(frame3);
  delay(interval);
  matrix.loadFrame(frame2);
  delay(interval);
}
