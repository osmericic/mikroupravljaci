int ledR = 2;                  //definiraj ledR = 2
int ledG = 3;                  //definiraj ledG = 3
int ledB = 4;                  //definiraj ledB = 4

void setup() {
  pinMode(ledR, OUTPUT);       //postavi izvod ledR kao izlazni
  pinMode(ledG, OUTPUT);       //postavi izvod ledG kao izlazni
  pinMode(ledB, OUTPUT);       //postavi izvod ledB kao izlazni
  digitalWrite(ledR, HIGH);    //isključi crveni segment - početno stanje
  digitalWrite(ledG, HIGH);    //isključi zeleni segment - početno stanje
  digitalWrite(ledB, HIGH);    //isključi plavi segment - početno stanje
}

void loop() { 
  digitalWrite(ledR, LOW);     //uključi crveni segment
  delay(1000);                 //čekaj 1 s
  digitalWrite(ledR, HIGH);    //isključi crveni segment
  delay(500);                  //čekaj 500 ms
  
  digitalWrite(ledG, LOW);     //uključi zeleni segment
  delay(1000);                 //čekaj 1 s
  digitalWrite(ledG, HIGH);    //isključi zeleni segment
  delay(500);                  //čekaj 500 ms
  
  digitalWrite(ledB, LOW);     //uključi plavi segment
  delay(1000);                 //čekaj 1 s
  digitalWrite(ledB, HIGH);    //isključi plavi segment
  delay(500);                  //čekaj 500 ms
}

