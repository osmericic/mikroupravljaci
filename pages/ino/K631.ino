int zuj = 3;                  //definiraj zuj = 3

void setup() {
  pinMode(zuj, OUTPUT);       //postavi izvod zuj kao izlazni
}

void loop() { 
  tone(zuj, 1000);            //generiraj ton 1000Hz na zujalici
  delay(1000);                //čekaj jednu sekundu
  noTone(zuj);                //isključi ton
  delay(500);                 //čekaj pola sekunde
}

