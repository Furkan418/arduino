#define s4  11
int val = 0; 
 
void setup() {
  pinMode(s4, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(s4)==0){
    Serial.println("aktif");
  }
//    val = analogRead(0);    // read the input pin
//
//  Serial.println(val);             // debug value

  delay(500);
}
