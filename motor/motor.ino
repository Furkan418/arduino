// Başlık:

int in1 =2; // s1 sensörünün bağlı olduğu pin, dijital okuma yapılacak pin.
int in2 =4;
int ena =3;
int in3 =7;  
int in4 =8;  
int enb =9;  
int Maxdeger = 0;
int toplam = 0;
int s1 = 6;
int s2=5;
int s3=10;   
int s4=11;


// alttaki fonksiypnların tanımlanması.
void sagMotorGeri();
void sagMotorDur();
void sagMotorIleri();
//

void setup(){

  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);
  
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  
 analogWrite(enb,50);
 Serial.println(toplam);
}
  

void loop(){

     if(!digitalRead(s1)){     
         
        while(!digitalRead(s1)){     
             sagMotorGeri();  
           
          while(!digitalRead(s3)){
               sagMotorDur();       
   
            
            
             
         
                  while((digitalRead(s1))&&(!digitalRead(s2))){
                         sagMotorIleri();
                  
                     while((!digitalRead(s4))&&(!digitalRead(s2))){
                           sagMotorDur();
                        
                            toplam++;
                            Serial.println(toplam);
                            delay(1000); 
                         }
                      }
                    }  
                  }
                }         
            
           

 
   if (!digitalRead(s2)){
  
      while  (!digitalRead(s2)){ 
          sagMotorGeri();                    //sagMotorGeri yazılmlıştı
          
          while(!digitalRead(s3)) {
            sagMotorDur();
             
            while ((digitalRead(s2))&&(!digitalRead(s1))){
                sagMotorIleri();

            while(!digitalRead(s4)){
                sagMotorDur();
                  
               toplam--;
                Serial.println(toplam);
                delay(1000);
            } 
          } 
       }
    }
  }
  
}//LOOP


void solMotorIleri(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
}

void solMotorGeri(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void solMotorDur(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void sagMotorIleri(){
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
}

void sagMotorGeri(){
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void sagMotorDur(){
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}



 
