
int isikdegeri;
void setup() {
 pinMode(8,OUTPUT);
 Serial.begin(9600);
digitalWrite(8,HIGH);
}

void loop() {
 
isikdegeri=analogRead(A0);
Serial.println(isikdegeri);
delay(200);
if(isikdegeri<600){
  digitalWrite(8,LOW);
}
else{
  digitalWrite(8,HIGH);
}
}
