
int L1=8;
int L2=9;
int L3=10;
int L4=11;
//int led[4] = {8,9,10,11};
int deger=0,yon=0;

float adim=(float)(5.0/1024.0);
float volt=0.0;

  void setup() {
  
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(L4,OUTPUT);

  Serial.begin(9600);
  //Serial.println("furkn merb....");
  }
   
  void loop (){
    
       
       
        //analogWrite(11,(int)(deger/4.0));
//      volt=deger*adim;
//    if(volt>=1.25)digitalWrite(L1,HIGH);
//    if(volt>=2.5)digitalWrite(L2,HIGH);
//    if(volt>=3.75)digitalWrite(L3,HIGH);
//    if(volt>=4.9)digitalWrite(L4,HIGH);

    
    Serial.println(deger); 
  
    analogWrite(9,deger);
    analogWrite(10,deger);
    
    if(deger>255)yon=1;
    if(deger<1)yon=0;
    if(yon==0)deger++;
    else deger--; 
    
    delay(5);
 
}

  //  digitalWrite(led[0],LOW);
//  digitalWrite(led[1],HIGH);
//  delay(time);
//  
//  digitalWrite(led[2],LOW); 
//  digitalWrite(led[3],HIGH);
//  delay(time);


  














