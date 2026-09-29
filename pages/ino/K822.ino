int led = 3;                      //definiraj led = 3
int fo = A0;                      //definiraj pot = A0
int ocitanjefo;                   //definiraj varijablu ocitanjepot

void setup() {
  pinMode(led, OUTPUT);           //postavi izvod led kao izlazni
  digitalWrite(led, LOW);         //isključi LED diodu - početno stanje
  Serial.begin(9600);             //inicijalizaija serijske veze
}

void loop() { 
  ocitanjefo=analogRead(fo);      //očitaj stanje analognog ulaza
  Serial.println(ocitanjefo);     //pošalji očitanje serijskim putem

  if (ocitanjefo<400){            //ukoliko je očitanje < 400 - tama
    digitalWrite(led, HIGH);      //uključi LED diodu
  } else {                        //inače - svijetlost
    digitalWrite(led, LOW);       //isključi LED diodu
  } 
  
  delay(50);                      //čekaj 50 ms
}

