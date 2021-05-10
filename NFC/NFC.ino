#include <SPI.h>
#include <Servo.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo smotor;
#include <Wire.h>
#include <RFID.h>
RFID rfid(10,9);
int yet0=0;
int yet1=0;
int yet2=0;
int yet3=0;
int yet4=0;
int mas0=208;
int mas1=217;
int mas2=96;
int mas3=50;
int mas4=91;
void setup() {
 Serial.begin(9600);
 smotor.attach(5);
  smotor.write(50);
 SPI.begin();
 rfid.init();
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(7,INPUT);
 lcd.init();
lcd.backlight();
}
void loop() {
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
 
if(rfid.isCard()){
  
}
if(rfid.readCardSerial()){
  Serial.print("KART ID:");
  Serial.print(rfid.serNum[0]);
  Serial.print(",");
  Serial.print(rfid.serNum[1]);
  Serial.print(",");
  Serial.print(rfid.serNum[2]);
  Serial.print(",");
  Serial.print(rfid.serNum[3]);
  Serial.print(",");
  Serial.print(rfid.serNum[4]);
  Serial.println();
  if(rfid.serNum[0]==mas0){
    if(rfid.serNum[1]==mas1){
      if(rfid.serNum[2]==mas2){
        if(rfid.serNum[3]==mas3){
          if(rfid.serNum[4]==mas4){
            lcd.setCursor(0,0);
            lcd.print("MASTERCARD");
            lcd.setCursor(10,0);
            lcd.print("      ");
            
            digitalWrite(3,LOW);
             if(digitalRead(7)==1){
           lcd.setCursor(0,1);
            lcd.print("KART EKLEMEK?");
            delay(2000);
           do{
              lcd.setCursor(0,1);
            lcd.print("LUTFEN KART OKUT");
            if(rfid.isCard()){
  
}
           
            if(rfid.readCardSerial()){
            
            yet0=rfid.serNum[0];
            Serial.print(rfid.serNum[0]);
            Serial.print(",");
            yet1=rfid.serNum[1];
            Serial.print(rfid.serNum[1]);
            Serial.print(",");
            yet2=rfid.serNum[2];
            Serial.print(rfid.serNum[2]);
            Serial.print(",");
            yet3=rfid.serNum[3];
            Serial.print(rfid.serNum[3]);
            Serial.print(",");
            yet4=rfid.serNum[4];
            Serial.print(rfid.serNum[4]);
            delay(500);}
            } while(digitalRead(7)!=1);
  }
  
            
          }
          else 
  {
    lcd.setCursor(0,0);
            lcd.print("GECERSIZ");
            digitalWrite(4,LOW);
            lcd.setCursor(8,0);
            lcd.print("  ");
            
            
  }
        }
        else 
  {
    lcd.setCursor(0,0);
            lcd.print("GECERSIZ");
            digitalWrite(4,LOW);
            lcd.setCursor(8,0);
            lcd.print("  ");
  }
      }
      else 
  {
    lcd.setCursor(0,0);
            lcd.print("GECERSIZ");
            digitalWrite(4,LOW);
            lcd.setCursor(8,0);
            lcd.print("  ");
  }
    }
    else 
  {
    lcd.setCursor(0,0);
            lcd.print("GECERSIZ");
            digitalWrite(4,LOW);
            lcd.setCursor(8,0);
            lcd.print("  ");
  }
  
  }
  
  else 
  {
    lcd.setCursor(0,0);
            lcd.print("GECERSIZ");
            digitalWrite(4,LOW);
            lcd.setCursor(8,0);
            lcd.print("  ");
  }
if(rfid.serNum[0]==yet0){
  if(rfid.serNum[1]==yet1){
    if(rfid.serNum[2]==yet2){
      if(rfid.serNum[3]==yet3){
        if(rfid.serNum[4]==yet4){
          lcd.setCursor(0,0);
            lcd.print("YETKART ONAY");
            
            digitalWrite(3,LOW);
            smotor.write(0);
            smotor.write(180);
            
        }
      

      }

    }

  }

}

}
rfid.halt();
delay(500);
}
