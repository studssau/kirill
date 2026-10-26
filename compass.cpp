#include "compass.h"
#include <Wire.h>
#include <QMC5883LCompass.h>
static QMC5883LCompass compass;
void initCompass() {
  compass.init();
  Serial.println("Компас инициализирован");
}
void ReadCompass(int &X, int &Y, int &Z) {
compass.read();
X = compass.getX();
Y = compass.getY();
Z = compass.getZ();
}
