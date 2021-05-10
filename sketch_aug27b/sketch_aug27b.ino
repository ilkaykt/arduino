int LDR_Pin = A2; //analog pin 0
void setup(){
Serial.begin(9600);
}
void loop(){
int LDRReading = analogRead(LDR_Pin);
Serial.println(LDRReading);
delay(250); //Değerleri serial monitörden daha kolay okuyabilmeniz için konuldu kaldırılabilir...
}
