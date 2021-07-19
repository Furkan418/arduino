 //LDR deki ışık şiddetine göre RGB led de frklı renklerin elde edilmesi...
 // 15/06/2018
 
 int deger;
 int LB=9;
 int LR=10;
 int LG=11;
 int bekle=100;
 int maxDeger=0;
 int sure=0;
 int parca=0;
 
 void setup(){
  pinMode(LB,OUTPUT);
  pinMode(LR,OUTPUT);
  pinMode(LG,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
    deger=analogRead(0);
    if(deger>maxDeger)maxDeger=deger;
    parca=maxDeger/9;
    Serial.print("deger:"); Serial.println(deger);
    Serial.print("maxDeger:"); Serial.println(maxDeger);
    sure++;
    if(sure>10000){   //bunu sor;            
      sure=0;
      maxDeger=0;
    }
  
    if(deger<parca){
       analogWrite(LR,255);analogWrite(LG,255);analogWrite(LB,255); //White
    }
      if((deger<(parca)*2)&&(deger>(parca)*1)){
       analogWrite(LR,128);analogWrite(LG,128);analogWrite(LB,128); //Gray
    }
    if((deger<(parca)*3)&&(deger>(parca)*2)){
       analogWrite(LR,47);analogWrite(LG,79);analogWrite(LB,79); //dark slate Gray 
    }
    if((deger<(parca)*4)&&(deger>(parca)*3)){
       analogWrite(LR,255);analogWrite(LG,69);analogWrite(LB,0); //orange(kırmızı)
    }
    if((deger<(parca)*5)&&(deger>(parca)*4)){ 
       analogWrite(LR,255);analogWrite(LG,255);analogWrite(LB,0);  //sarı
    }
    if((deger<(parca)*6)&&(deger>(parca)*5)){
       analogWrite(LR,255);analogWrite(LG,215);analogWrite(LB,0);  //gold   
    }
    if((deger<(parca)*7)&&(deger>(parca)*6)){
       analogWrite(LR,220);analogWrite(LG,20);analogWrite(LB,60); //crismon
    }
    if((deger<(parca)*8)&&(deger>(parca)*7)){
       analogWrite(LR,255);analogWrite(LG,0);analogWrite(LB,0); //red(kırmızı)  
    }
    if((deger<(parca)*9)&&(deger>(parca)*8)){
       analogWrite(LR,139);analogWrite(LG,0);analogWrite(LB,0); //dark(kırmızı)
        
    }
    
   delay(bekle);  
}











  
  

