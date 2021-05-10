
#define echo 5
#define trig 6
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
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {  
 digitalWrite(trig,HIGH);
 delay(2);
 digitalWrite(trig,LOW);
 float sure= pulseIn(echo,HIGH);
 float cm=sure/58.2; 
 int sayi=cm;
 int sayi1=sayi/10;
 int sayi2=sayi%10;
 delay(1);
Serial.println(cm);
if(cm<99.99){
/*switch(sayi){
  case 1:  
 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 digitalWrite(d1,LOW);
 delay(1);
 
 break;
 case 2:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 3:
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
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 4:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 5:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 6:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 7:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 break;
 case 8:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 9:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 0:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay(1);
 break;
}*/



//if(cm>=10 && cm<=99.99){
switch(sayi1){
  case 1:  
 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 break;
 case 2:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 3:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 4:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 5:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 6:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 7:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 break;
 case 8:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 9:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;
 case 0:
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay(1);
 break;
}

switch(sayi2){
  case 1:
 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 break;

 case 2:


 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 3:


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
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 4:
 
 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 5:

 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 6:

  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 7:

digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1);
 break;

 case 8:

 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 9:

 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay(1);
 break;

 case 0:

 digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay(1);
 break;
}


}
else{
   digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,HIGH);
 digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
delay(1);
  digitalWrite(d1,LOW);
 digitalWrite(d2,LOW);
 digitalWrite(d3,HIGH);
 digitalWrite(d4,LOW);
 digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
delay(1);
  digitalWrite(d1,LOW);
 digitalWrite(d2,HIGH);
 digitalWrite(d3,LOW);
 digitalWrite(d4,LOW);
 digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
delay(1);
  digitalWrite(d1,HIGH);
 digitalWrite(d2,LOW);
 digitalWrite(d3,LOW);
 digitalWrite(d4,LOW);
 digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay(1);
}
}
