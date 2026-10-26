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

  if (e220ttl.available() > 1) {
    
    ResponseContainer response = e220ttl.receiveMessage();
    
    String Message = response.data;

  }

  readCompass(x,y,z);
  readGps(lat,lon);
  
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.print(z);
  Serial.print(",");
  Serial.print(lat);
  Serial.print(",");
  Serial.print(lon)
  Serial.println();
  
  /*
  e220ltt.sendMessage(x);
  e220ltt.sendMessage(",");
  e220ltt.sendMessage(y);
  e220ltt.sendMessage(",");
  e220ltt.sendMessage(z);
  e220ltt.sendMessage(",");
  e220ltt.sendMessage(lat);
  e220ltt.sendMessage(",");
  e220ltt.sendMessage(lon);
  */
  delay(1000);
}
