int led = 2;                         //definiraj led = 2
int tipkalo1 = 3;                    //definiraj tipkalo1 = 3 
int tipkalo2 = 4;                    //definiraj tipkalo2 = 4

void setup() {
  pinMode(led, OUTPUT);              //postavi izvod led kao izlazni
  pinMode(tipkalo1, INPUT_PULLUP);   //postavi izvod tipkalo1 kao ulazni
  pinMode(tipkalo2, INPUT_PULLUP);   //postavi izvod tipkalo2 kao ulazni
  digitalWrite(led, LOW);            //isključi led diodu - početno stanje
}

void loop() { 
  if(digitalRead(tipkalo1)==LOW || digitalRead(tipkalo2)==LOW){   
                                     //ako je pritisnuto tipkalo1 ILI tipkalo2
    digitalWrite(led, HIGH);         //uključi LED diodu
  } else {                           //inače
    digitalWrite(led, LOW);          //isključi LED diodu
  }
}

