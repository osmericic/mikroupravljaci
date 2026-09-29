int led = 2;                       //definiraj led = 2
int tipkalo = 3;                   //definiraj tipkalo = 3 
int stanje = LOW;                  //definiraj varijablu stanje

void setup() {
  pinMode(led, OUTPUT);            //postavi izvod led kao izlazni
  pinMode(tipkalo, INPUT_PULLUP);  //postavi izvod tipkalo1 kao ulazni
  digitalWrite(led, LOW);          //isključi led diodu - početno stanje
}

void loop() { 
  if(digitalRead(tipkalo)==LOW){   //ako je pritisnuto tipkalo                 
    if(stanje==LOW){               //ako je stanje LOW
      stanje=HIGH;                 //postavi stanje u HIGH
    } else {                       //inače
      stanje=LOW;                  //postavi stanje u HIGH
    }
    digitalWrite(led, stanje);     //postavi izvod led u stanje "stanje"
  } 
}


