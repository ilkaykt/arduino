#define d1 1
#define d2 2
#define d3 3
#define d4 4
#define a 7
#define b 8
#define c 9
#define d 10
#define e 11
#define f 12
#define g 13


void setup() {
  pinMode(d1,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
 
   
   

}

void loop() {

 
  digitalWrite(d1,LOW);
 digitalWrite(d2,HIGH);
 digitalWrite(d3,LOW);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);

  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 

}
