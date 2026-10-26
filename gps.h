#ifndef GPS_H
#define GPS_H
#include <Arduino.h>
void initGps(); // для инициализации GPS-модуля
void readGps(float &var1, float &var2); // для чтения показаний
#endif

