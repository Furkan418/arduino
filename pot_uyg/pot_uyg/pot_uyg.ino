
// int L1=9;
// int sayac=0;
// int toplam=0;
// 
//  void setup(){
//    pinMode(L1,OUTPUT);
//    Serial.begin(9600);
//  }
//  void loop(){
//    
////    for(sayac=0;sayac<100;sayac++)
////    {  
////      toplam+=sayac;
////    }  
//    Serial.println(sayac);
//    Serial.println(toplam);
//
//   // for(;;);
//    
//    delay(500);
//   
//  }



//  
// int L=10;
// int i=0;
//  void setup(){
//  
//  pinMode(L,OUTPUT);
//  Serial.begin(9600);
// }
// void loop(){
//  
//  for(i=0;i<10;i++){
//    Serial.println(i);
//  
//    digitalWrite(L,HIGH);
//    delay(40);
//    digitalWrite(L,LOW);
//    delay(40);
//  }
//
// delay(500);
//}


//
// #define btnPin 7 
// int say=0;
// int LB=11;
// int LR=10;
// int LG=9;
// void setup(){
//    pinMode(LG,OUTPUT);
//    pinMode(LB,OUTPUT);
//    pinMode(LR,OUTPUT);
//    pinMode(btnPin,INPUT);
//    Serial.begin(9600);
// }
// void loop(){
//    
//   // Serial.println(say);
//    
//   for(;;){
//    
//     if(digitalRead(btnPin)) {
//        digitalWrite(LR,HIGH);
//        digitalWrite(LB,LOW);
//        //delay(500);
//       //break;
//     }if(!digitalRead(btnPin)) {
//        digitalWrite(LR,LOW);
//        digitalWrite(LB,HIGH);
//       // delay(500);
//        //break;
//     }
        
  //}
  
 
  //delay(50);
//}
 
// int sayac=0;
// int toplam=0;
// 
//  void setup(){
// Serial.begin(9600);
// 
//  }
//    void loop(){
//   while(sayac<100){
//     toplam+=sayac;
//      sayac++;
//   }
//      Serial.println(sayac);
//     Serial.println(toplam);
//
//
//
//}

//
// int sayac=0;
// int toplam=0;
//
//  void setup(){
// Serial.begin(9600);
//  }
//  void loop(){
//    
//   do{
//       toplam+=sayac;
//       sayac++;
//       Serial.print(sayac);    
//       Serial.print("-");
//       Serial.println(toplam); 
//       delay(500);
//     }while(sayac<100);
//     sayac=0;

















int btn=7;
int sayac=0;
 void setup(){

 Serial.begin(9600);
 pinMode(btn,INPUT);
 Serial.println("bekle");
 }
void loop(){
  
 
while(!digitalRead(btn));
delay(250);
 Serial.println("bastim");
while(digitalRead(btn));
delay(250);
Serial.println("biraktim");

}









  
