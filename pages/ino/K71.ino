void setup() {
  Serial.begin(9600);               //inicijalizacija serijske veze
}

void loop() { 
  Serial.println("VOLIM ARDUINO!"); //pošalji putem serijske veze
  delay(1000);                      //čekam 1 s
}

