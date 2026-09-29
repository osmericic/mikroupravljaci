int led1 = 2;                  //definiraj led1 = 2
int led2 = 3;                  //definiraj led2 = 3

void setup() {
  pinMode(led1, OUTPUT);       //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);       //postavi izvod led2 kao izlazni
  digitalWrite(led1, LOW);     //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);     //isključi LED diodu 2 - početno stanje
}

void loop() { 
  digitalWrite(led1, HIGH);   //uključi LED diodu 1
  digitalWrite(led2, LOW);    //isključi LED diodu 2
  delay(500);                 //čekaj 500 ms - pola sekunde
  digitalWrite(led1, LOW);    //isključi LED diodu 1
  digitalWrite(led2, HIGH);   //uključi LED diodu 2
  delay(500);                 //čekaj 500 ms - pola sekunde
}

