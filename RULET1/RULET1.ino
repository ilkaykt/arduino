 
  #define buton 7
  int led=0;
  void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(buton,INPUT);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  

}

void loop() {
 

while(digitalRead(buton)!=1){
digitalWrite(8,LOW);
delay(200);
digitalWrite(8,HIGH);
delay(200);
digitalWrite(9,LOW);
delay(200);
 digitalWrite(9,HIGH);
 delay(200);
  digitalWrite(10,LOW);
  delay(200);
  digitalWrite(10,HIGH);
  delay(200);  

}
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);

digitalWrite(10,HIGH);
 


}
