int direnc=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
direnc=analogRead(A0);
Serial.println(direnc);

}
