#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
lcd.init();
lcd.backlight();
Serial.begin(9600);
}

void loop() {
lcd.setCursor(4,0);
lcd.print("merhaba");
 }
 
