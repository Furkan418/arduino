/// ????????

 int LB=9
 int LR=10;
 int LG=11;
 int p1=7;
 int p2=2;
 int p3=4;
 #define sure 0
 
 
 void setup(){
  pinMode(p1,INPUT)
  pinMode(p2,INPUT);
  pinMode(p3,INPUT);
  pinMode(LB,OUTPUT);
  pinMode(LR,OUTPUT);
  pinMode(LG,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  p1=digitalRead(7);
  p2=digitalRead(2);
  p3=digitalRead(4);
  sure=digitalRead(0);
 if(p1==1||p2==1||p3==1){
  digitalWrite(LR,HIGH);
//  delay(500);
//  digitalWrite(LR,LOW);
  
 } else digitalWrite(LR,LOW); 
 //if(p2==1){
  //digitalWrite(LG,HIGH);
//  delay(500);
//   digitalWrite(LG,LOW);
   
 //else digitalWrite(LG,LOW);
 
 //if(p3==1){
    //digitalWrite(LB,HIGH);
//    delay(500);
//    digitalWrite(LB,LOW);
   
  //else digitalWrite(LB,LOW);
}













  
  

