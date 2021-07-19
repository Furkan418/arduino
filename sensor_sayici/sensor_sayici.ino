// Başlık:

int s1 = 5;   // s1 sensörünün bağlı olduğu pin, dijital okuma yapılacak pin.
int s2 = 8;
int LB = 11;
int LR = 10;
int sayac = 0;
int toplam = 0;


void setup() {

  Serial.begin(9600);
  pinMode(LB, OUTPUT);
  pinMode(LR, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);

  Serial.println(toplam);
}
void loop() {

  if (!digitalRead(s1)) {
    digitalWrite(LR, HIGH);
    while (!digitalRead(s1));
    digitalWrite(LR, LOW);
    while (digitalRead(s2));
    digitalWrite(LB, HIGH);
    while (!digitalRead(s2));
    digitalWrite(LB, LOW);
    toplam++;
    Serial.println(toplam);
    delay(1000);
  }
  
  if (!digitalRead(s2)) {
    digitalWrite(LB, HIGH);
    while (!digitalRead(s2));
    digitalWrite(LB, LOW);
    while (digitalRead(s1));
    digitalWrite(LR, HIGH);
    while (!digitalRead(s1));
    digitalWrite(LR, LOW);
    toplam--;
    Serial.println(toplam);
    delay(1000);

  }

}//loop























//  while(sayac)
//
//     sayac=digitalRead(s1);
//     Serial.println(sayac);
//     delay(500);



//Serial.println(toplam);


