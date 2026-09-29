int led1 = 3;                 //definiraj led1 = 3
int led2 = 5;                 //definiraj led2 = 5

void setup() {
  pinMode(led1, OUTPUT);      //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);      //postavi izvod led2 kao izlazni
  digitalWrite(led1, LOW);    //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);    //isključi LED diodu 2 - početno stanje
}

void loop() { 
  analogWrite(led1, 51);      //uključi LED diodu 1 na 20%
  analogWrite(led2, 204);     //uključi LED diodu 2 na 80%
}

