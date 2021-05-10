
#include "DHT.h"
#define DHTPIN 3    
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println(F("Baslıyor.."));
  dht.begin();
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("SENSORDEN OKUNAMADI."));
    return;
  }
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);
  if (h>30){
      digitalWrite(10,LOW);
  }
  else   digitalWrite(10,HIGH);
 if(t>31){
  digitalWrite(8,LOW);
  
 }
 else digitalWrite(8,HIGH);

  Serial.print(F("Nem: "));
  Serial.print(h);
  Serial.print(F("%  Sıcaklık: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.println();
}
