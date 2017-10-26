#include "ExpSmooth.h"

ExpSmooth ExpSmth;

void setup() {
  Serial.begin(9600);
  int y = analogRead(A0);
  ExpSmth.setInitial(y);
}

void loop() {
  int y = analogRead(A0);
  int z = ExpSmth.calc25(y);
  Serial.print(y);
  Serial.print(",");
  Serial.print(z);
  Serial.println();
  delay(200);
}
