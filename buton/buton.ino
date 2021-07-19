  

 #define btnPin   8
 #define LB       9 
 #define LR       10
 #define LG       11
 
 #define girisPin(pin)  pinMode(pin,INPUT)
 #define pinBirYap(pin) digitalWrite(pin,HIGH);
 
 int sayac=0;
 
 void setup(){
  
  pinMode(LB,OUTPUT);
  pinMode(LR,OUTPUT);
  pinMode(LG,OUTPUT);
  //pinMode(btnPin,INPUT);
  girisPin(btnPin);
  Serial.begin(9600);
}
   void loop(){
   //tus=digitalRead(buton);
   // Serial.print("deger:"); Serial.println(btnPin);
     Serial.print("deger2:");Serial.println(sayac); 
    //if(tus) digitalWrite(LR,HIGH);
    //if(digitalRead(btnPin)){
    if(!digitalRead(btnPin)){
        delay(200);
      sayac++; 
     
    }
    if(sayac==1){
      //digitalWrite(LR,HIGH);
       pinBirYap(LR);
      digitalWrite(LG,LOW);
      digitalWrite(LB,LOW);
    }
    if(sayac==2){
      //analogWrite(LR,255);analogWrite(LG,255);analogWrite(LB,255); //White
      digitalWrite(LR,LOW);
      digitalWrite(LG,HIGH);
      digitalWrite(LB,LOW);
    }
    if(sayac==3){
      //analogWrite(LR,255);analogWrite(LG,127);analogWrite(LB,64);
      digitalWrite(LR,LOW);
      digitalWrite(LG,LOW);
      digitalWrite(LB,HIGH);
      
    }
    if(sayac==4){
      sayac=1;





      
    }
   // 
    //else digitalWrite(LR,LOW);


















    
    delay(100);
//    if(sayac==1);
//    
//     if(sayac==2);
//     analogWrite(LR,255);analogWrite(LG,0);analogWrite(LB,0); //red(kırmızı) 
   } 
