int led1 = 2;                      //definiraj led1 = 2
int led2 = 3;                      //definiraj led2 = 3      
int led3 = 4;                      //definiraj led3 = 4
int led4 = 5;                      //definiraj led4 = 5
int led5 = 6;                      //definiraj led5 = 6
int pot = A0;                      //definiraj pot = A0
int ocitanjepot;                   //definiraj varijablu očitanjepot

void setup() {
  pinMode(led1, OUTPUT);           //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);           //postavi izvod led2 kao izlazni
  pinMode(led3, OUTPUT);           //postavi izvod led3 kao izlazni
  pinMode(led4, OUTPUT);           //postavi izvod led4 kao izlazni
  pinMode(led5, OUTPUT);           //postavi izvod led5 kao izlazni
  digitalWrite(led1, LOW);         //isključi LED diodu - početno stanje
  digitalWrite(led2, LOW);         //isključi LED diodu - početno stanje
  digitalWrite(led3, LOW);         //isključi LED diodu - početno stanje
  digitalWrite(led4, LOW);         //isključi LED diodu - početno stanje
  digitalWrite(led5, LOW);         //isključi LED diodu - početno stanje
}

void loop() { 
  ocitanjepot=analogRead(pot);     //očitaj stanje analognog ulaza
  
  if(ocitanjepot<=250){            //ako je očitanje <1V
     digitalWrite(led1,HIGH);      //uključi LED 1
     digitalWrite(led2,LOW);       //isključi LED 2
     digitalWrite(led3,LOW);       //isključi LED 3
     digitalWrite(led4,LOW);       //isključi LED 4
     digitalWrite(led5,LOW);       //isključi LED 5
  } else if(ocitanjepot>250 && ocitanjepot<=410){            
                                   //ako je očitanje >1V i <2V
     digitalWrite(led1,HIGH);      //uključi LED 1
     digitalWrite(led2,HIGH);      //uključi LED 2
     digitalWrite(led3,LOW);       //isključi LED 3
     digitalWrite(led4,LOW);       //isključi LED 4
     digitalWrite(led5,LOW);       //isključi LED 5
  } else if(ocitanjepot>410 && ocitanjepot<=615){            
                                   //ako je očitanje >2V i <3V
     digitalWrite(led1,HIGH);      //uključi LED 1
     digitalWrite(led2,HIGH);      //uključi LED 2
     digitalWrite(led3,HIGH);      //uključi LED 3
     digitalWrite(led4,LOW);       //isključi LED 4
     digitalWrite(led5,LOW);       //isključi LED 5
  } else if(ocitanjepot>615 && ocitanjepot<=820){            
                                   //ako je očitanje >3V i <4V
     digitalWrite(led1,HIGH);      //uključi LED 1
     digitalWrite(led2,HIGH);      //uključi LED 2
     digitalWrite(led3,HIGH);      //uključi LED 3
     digitalWrite(led4,HIGH);      //uključi LED 4
     digitalWrite(led5,LOW);       //isključi LED 5
  } else {                         //ako je očitanje >4V
     digitalWrite(led1,HIGH);      //uključi LED 1
     digitalWrite(led2,HIGH);      //uključi LED 2
     digitalWrite(led3,HIGH);      //uključi LED 3
     digitalWrite(led4,HIGH);      //uključi LED 4
     digitalWrite(led5,HIGH);      //uključi LED 5
  } 
}

