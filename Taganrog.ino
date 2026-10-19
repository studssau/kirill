#include "compass.h"
#include "gps.h"
#include "LoRa_E220.h"

LoRa_E220 e220ttl(8, 9, 5, 7, 6);

void setup() {
  Serial.begin(9600);
  initCompass();
  initGps();
  e220ttl.begin();
}

void loop() {
  int x, y, z; 
  float lat, lon; 

  readCompass(x,y,z);
  readGps(lat,lon);
  
  Serial.print(x + "," + y + "," + z);
  Serial.println();
  Serial.print(lat + "," + lan);
  Serial.println();
  e220ttl.sendMessage(x + "," + y + "," + z + "," + lat + "," + lan);
  
  delay(1000);
}
