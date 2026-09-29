int led = 2;                       //definiraj led = 2
int sklopka = 3;                   //definiraj sklopka = 3 
int tipkalo = 4;                   //definiraj tipkalo = 4

void setup() {
  pinMode(led, OUTPUT);            //postavi izvod led kao izlazni
  pinMode(sklopka, INPUT_PULLUP);  //postavi izvod sklopka kao ulazni
  pinMode(tipkalo, INPUT_PULLUP);  //postavi izvod tipkalo kao ulazni
  digitalWrite(led, LOW);          //isključi led diodu - početno stanje
}

void loop() { 
  if(digitalRead(sklopka)==LOW && digitalRead(tipkalo)==LOW){   
                                   //ako je sklopka zatvorena I tipkalo pritisnuto
    digitalWrite(led, HIGH);       //uključi LED diodu
  } else {                         //inače
    digitalWrite(led, LOW);        //isključi LED diodu
  }
}

