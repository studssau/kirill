#include "gps.h"
#include <TinyGPS++.h>
#include <SoftwareSerial.h>
static TinyGPSPlus gps;
static SoftwareSerial gpsSerial(4, 3);
void initGps() {
  gpsSerial.begin(9600);
  Serial.println("GPS инициализирован");
}
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
  }
    var1 = gps.location.lat(); //запись значения широты в переменную var1
    var1 = gps.location.lng() 
    var1 = gps.altitude.meters()
    var1 = gps.satellites.value()
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
