int ledR = 3;                  	//definiraj ledR = 3
int ledG = 5;                  	//definiraj ledG = 5
int ledB = 6;                  	//definiraj ledB = 6

void setup() {
  pinMode(ledR, OUTPUT);       	//postavi izvod ledR kao izlazni
  pinMode(ledG, OUTPUT);       	//postavi izvod ledG kao izlazni
  pinMode(ledB, OUTPUT);       	//postavi izvod ledB kao izlazni
  digitalWrite(ledR, HIGH);    	//isključi crveni segment - početno stanje
  digitalWrite(ledG, HIGH);    	//isključi zeleni segment - početno stanje
  digitalWrite(ledB, HIGH);    	//isključi plavi segment - početno stanje
}

void loop() { 
  analogWrite(ledR, 127);      	//uključi crveni segment na 50%
  analogWrite(ledG, 51);       	//uključi zeleni segment na 80%
  analogWrite(ledB, 192);      	//uključi plavi segment na 25%
}


