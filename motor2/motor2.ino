#define onSensor() digitalRead(s1)
#define arkaSensor() digitalRead(s2)
#define dikSensor() digitalRead(s3)
#define yataySensor() digitalRead(s4)
#define bariyerac()  analogWrite(enb,50); sagMotorGeri()
#define bariyerkapat() analogWrite(enb,46);sagMotorIleri()//;delay(150);  analogWrite(enb,40);
#define bariyerDur()   sagMotorDur()

///***////
int in1 = 2; // s1 sensörünün bağlı olduğu pin, dijital okuma yapılacak pin.
int in2 = 4;
int ena = 3;
int in3 = 7;
int in4 = 8;
int enb = 9;
int Maxdeger = 0;
int toplam = 0;
int s1 = 6;
int s2 = 5;
int s3 = 10;
int s4 = 11;

// alttaki fonksiypnların tanımlanması.

void sagMotorGeri();
void sagMotorDur();
void sagMotorIleri();

void setup() {

  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);

  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);

  pinMode(s1, INPUT);
  pinMode(s2, INPUT);


  //Serial.println(toplam);
}

void loop() {

  if (!onSensor()  && dikSensor()) {
    bariyerac();
  }

  if (!dikSensor() && arkaSensor()  ) {

    bariyerDur();
  }

  if (!arkaSensor()  && onSensor()&& !dikSensor() ) {
    bariyerkapat();

  }

  if (!yataySensor() && dikSensor()&& onSensor()  )                         //&& onSensor() && dikSensor() !arka sensor
  {
    bariyerDur();
  }

  ////cıkış yonü


  //
  //    if (!arkaSensor()  && dikSensor() && onSensor() ) {
  //      bariyerac();
  //
  //    }


  //   if(!onSensor() && !dikSensor() && yataySensor() && arkaSensor()){
  //     bariyerkapat();
  //   }

  //     if(!onSensor() && !dikSensor() && yataySensor()&& arkaSensor()){          //duşun
  //       bariyerkapat();
  //   }


  //   if ( !yataySensor()&&onSensor()&&arkaSensor() ) {
  //      bariyerDur();
  //  }


}//loop

////  ***   ////
void solMotorIleri() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

}

void solMotorGeri() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void solMotorDur() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void sagMotorIleri() {
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

}

void sagMotorGeri() {
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void sagMotorDur() {
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}







