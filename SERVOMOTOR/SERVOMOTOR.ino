#include <Servo.h>
Servo smotor;
int direnc=0;
float sayi=0;
int pozisyon=0;
void setup() {
  Serial.begin(9600);
  smotor.attach(2);
  smotor.write(0);

}

void loop() {
  direnc=analogRead(A0);
//Serial.println(direnc);
sayi=direnc/5,6888888889;
smotor.write(sayi);
Serial.println(sayi);

}
