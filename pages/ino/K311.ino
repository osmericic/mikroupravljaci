int led = 2;                  //definiraj led = 2

void setup() {
  pinMode(led, OUTPUT);       //postavi izvod led kao izlazni
  digitalWrite(led, LOW);     //isključi LED diodu - početno stanje
}

void loop() { 
  digitalWrite(led, HIGH);    //uključi LED diodu
  delay(500);                 //čekaj 500 ms - pola sekunde
  digitalWrite(led, LOW);     //isključi LED diodu
  delay(500);                 //čekaj 500 ms - pola sekunde
}


