int pot = A0;                       //definiraj pot = A0

void setup() {
  Serial.begin(9600);               //inicijalizacija serijske veze
}

void loop() { 
  Serial.println(analogRead(pot));  //očitaj analogni izvod i pošalji
                                    //rezultat putem serijske veze
  delay(100);                       //čekaj 100 ms
}

