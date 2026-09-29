int led1 = 2;                  //definiraj led1 = 2
int led2 = 3;                  //definiraj led2 = 3
int led3 = 4;                  //definiraj led3 = 4

void setup() {
  pinMode(led1, OUTPUT);       //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);       //postavi izvod led2 kao izlazni
  pinMode(led3, OUTPUT);       //postavi izvod led3 kao izlazni
  digitalWrite(led1, LOW);     //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);     //isključi LED diodu 2 - početno stanje
  digitalWrite(led3, LOW);     //isključi LED diodu 3 - početno stanje
}

void loop() { 
  digitalWrite(led1, HIGH);    //uključi LED diodu 1
  delay(300);                  //čekaj 300 ms
  digitalWrite(led1, LOW);     //isključi LED diodu 1
  
  digitalWrite(led2, HIGH);    //uključi LED diodu 2
  delay(300);                  //čekaj 300 ms
  digitalWrite(led2, LOW);     //isključi LED diodu 2
  
  digitalWrite(led3, HIGH);    //uključi LED diodu 3
  delay(300);                  //čekaj 300 ms
  digitalWrite(led3, LOW);     //isključi LED diodu 3
}

