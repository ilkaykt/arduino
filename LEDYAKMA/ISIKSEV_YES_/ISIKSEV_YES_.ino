int isikdegeri;
void setup() {
  
Serial.begin(9600);

}

void loop() {
  isikdegeri=analogRead(A0);
  Serial.println(isikdegeri);
  delay(200);

}
