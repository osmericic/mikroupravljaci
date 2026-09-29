int led1 = 2;                       //definiraj led1 = 2
int led2 = 3;                       //definiraj led2 = 3
int led3 = 4;                       //definiraj led3 = 4

int tipkalo1 = 5;                   //definiraj tipkalo1 = 5
int tipkalo2 = 6;                   //definiraj tipkalo2 = 6

void setup() {
  pinMode(led1, OUTPUT);            //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);            //postavi izvod led2 kao izlazni
  pinMode(led3, OUTPUT);            //postavi izvod led3 kao izlazni
  pinMode(tipkalo1, INPUT_PULLUP);  //postavi izvod tipkalo1 kao ulazni
  pinMode(tipkalo2, INPUT_PULLUP);  //postavi izvod tipkalo2 kao ulazni
  digitalWrite(led1, LOW);          //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);          //isključi LED diodu 2 - početno stanje
  digitalWrite(led3, LOW);          //isključi LED diodu 3 - početno stanje
}

void loop() { 
  if(digitalRead(tipkalo1)==LOW){   //ako je tipkalo1 pritisnuto
    digitalWrite(led1, HIGH);       //uključi LED diodu 1
    delay(500);                     //čekaj 500 ms
    digitalWrite(led1, LOW);        //isključi LED diodu 1
    
    digitalWrite(led2, HIGH);       //uključi LED diodu 2
    delay(500);                     //čekaj 500 ms
    digitalWrite(led2, LOW);        //isključi LED diodu 2
    
    digitalWrite(led3, HIGH);       //uključi LED diodu 3
    delay(500);                     //čekaj 500 ms
    digitalWrite(led3, LOW);        //isključi LED diodu 3
  }
  
  if(digitalRead(tipkalo2)==LOW){   //ako je tipkalo1 pritisnuto
    digitalWrite(led3, HIGH);       //uključi LED diodu 3
    delay(500);                     //čekaj 500 ms
    digitalWrite(led3, LOW);        //isključi LED diodu 3
    
    digitalWrite(led2, HIGH);       //uključi LED diodu 2
    delay(500);                     //čekaj 500 ms
    digitalWrite(led2, LOW);        //isključi LED diodu 2
    
    digitalWrite(led1, HIGH);       //uključi LED diodu 1
    delay(500);                     //čekaj 500 ms
    digitalWrite(led1, LOW);        //isključi LED diodu 1
  }
}

