 
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
if(digitalRead(buton)==1 && led==0){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(200);
  led=1; 
}
else if (digitalRead(buton)==1 && led==1){
 digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
 delay(200);
  led=led+1; 
}
else if (digitalRead(buton)==1 && led==2){
 digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
 delay(200);
  led=led+1;
  }
else if(digitalRead(buton)==1 && led==3){
  digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 delay(200);
  led=0;
}



 


}
