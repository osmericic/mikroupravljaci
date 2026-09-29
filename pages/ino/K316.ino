int ledCrvena = 2;                //definiraj ledCrvena = 2
int ledZuta = 3;                  //definiraj ledZuta = 3
int ledZelena = 4;                //definiraj ledZelena = 4

void setup() {
  pinMode(ledCrvena, OUTPUT);     //postavi izvod ledCrvena kao izlazni
  pinMode(ledZuta, OUTPUT);       //postavi izvod ledZuta kao izlazni
  pinMode(ledZelena, OUTPUT);     //postavi izvod ledZelena kao izlazni
  digitalWrite(ledCrvena, LOW);   //isključi crvenu LED diodu - početno stanje
  digitalWrite(ledZuta, LOW);     //isključi žutu LED diodu - početno stanje
  digitalWrite(ledZelena, LOW);   //isključi zelenu LED diodu - početno stanje
}

void loop() { 
  digitalWrite(ledCrvena, HIGH);  //uključi crvenu LED diodu
  delay(3000);                    //čekaj 3 s - svijetli C

  digitalWrite(ledZuta, HIGH);    //uključi žutu LED diodu
  delay(1000);                    //čekaj 1 s - svijetli C+Ž

  digitalWrite(ledCrvena, LOW);   //isključi crvenu LED diodu
  digitalWrite(ledZuta, LOW);     //isključi žutu LED diodu

  digitalWrite(ledZelena, HIGH);  //uključi zelenu LED diodu
  delay(3000);                    //čekaj 3 s - svijetli Z
  digitalWrite(ledZelena, LOW);   //isključi zelenu LED diodu

  digitalWrite(ledZuta, HIGH);    //uključi žutu LED diodu
  delay(1000);                    //čekaj 1 s - svijetli Ž
  digitalWrite(ledZuta, LOW);     //isključi žutu LED diodu
}



