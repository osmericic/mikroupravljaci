int led1 = 2;                  //definiraj led1 = 2
int led2 = 3;                  //definiraj led2 = 3
int led3 = 4;                  //definiraj led3 = 4
int led4 = 5;                  //definiraj led4 = 5
int led5 = 6;                  //definiraj led5 = 6

void setup() {
  pinMode(led1, OUTPUT);       //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);       //postavi izvod led2 kao izlazni
  pinMode(led3, OUTPUT);       //postavi izvod led3 kao izlazni
  pinMode(led4, OUTPUT);       //postavi izvod led4 kao izlazni
  pinMode(led5, OUTPUT);       //postavi izvod led5 kao izlazni
  digitalWrite(led1, LOW);     //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);     //isključi LED diodu 2 - početno stanje
  digitalWrite(led3, LOW);     //isključi LED diodu 3 - početno stanje
  digitalWrite(led4, LOW);     //isključi LED diodu 4 - početno stanje
  digitalWrite(led5, LOW);     //isključi LED diodu 5 - početno stanje
}

void loop() { 
  digitalWrite(led1, HIGH);    //uključi LED diodu 1
  digitalWrite(led5, HIGH);    //uključi LED diodu 5
  delay(750);                  //čekaj 750 ms
  digitalWrite(led1, LOW);     //isključi LED diodu 1
  digitalWrite(led5, LOW);     //isključi LED diodu 5
  
  digitalWrite(led2, HIGH);    //uključi LED diodu 2
  digitalWrite(led4, HIGH);    //uključi LED diodu 4
  delay(750);                  //čekaj 750 ms
  digitalWrite(led2, LOW);     //isključi LED diodu 2
  digitalWrite(led4, LOW);     //isključi LED diodu 4
  
  digitalWrite(led3, HIGH);    //uključi LED diodu 3
  delay(750);                  //čekaj 750 ms
  digitalWrite(led3, LOW);     //isključi LED diodu 3
}

