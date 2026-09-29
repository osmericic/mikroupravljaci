int segA = 2;                  	//definiraj seg_a = 2
int segB = 3;                  	//definiraj seg_b = 3
int segC = 4;                  	//definiraj seg_c = 4
int segD = 5;                  	//definiraj seg_d = 5
int segE = 6;                  	//definiraj seg_e = 6
int segF = 7;                  	//definiraj seg_f = 7
int segG = 8;                  	//definiraj seg_g = 8

void setup() {
  pinMode(segA, OUTPUT);       	//postavi izvod seg_a kao izlazni
  pinMode(segB, OUTPUT);       	//postavi izvod seg_b kao izlazni
  pinMode(segC, OUTPUT);       	//postavi izvod seg_c kao izlazni
  pinMode(segD, OUTPUT);       	//postavi izvod seg_d kao izlazni
  pinMode(segD, OUTPUT);       	//postavi izvod seg_e kao izlazni
  pinMode(segF, OUTPUT);       	//postavi izvod seg_f kao izlazni
  pinMode(segG, OUTPUT);       	//postavi izvod seg_g kao izlazni
  digitalWrite(segA, LOW);     	//isključi a segment - početno stanje
  digitalWrite(segB, LOW);     	//isključi b segment - početno stanje
  digitalWrite(segC, LOW);     	//isključi c segment - početno stanje
  digitalWrite(segD, LOW);     	//isključi d segment - početno stanje
  digitalWrite(segE, LOW);     	//isključi e segment - početno stanje
  digitalWrite(segF, LOW);     	//isključi f segment - početno stanje
  digitalWrite(segG, LOW);     	//isključi g segment - početno stanje
}

void loop() { 
  
  digitalWrite(segB, HIGH);    	//uključi b segment
  digitalWrite(segC, HIGH);    	//uključi c segment
  delay(1000);                	//čekaj 1 s - prikaz broja 1
  digitalWrite(segB, LOW);     	//isključi b segment
  digitalWrite(segC, LOW);     	//isključi c segment
  
  digitalWrite(segA, HIGH);    	//uključi a segment
  digitalWrite(segB, HIGH);    	//uključi b segment
  digitalWrite(segG, HIGH);    	//uključi g segment
  digitalWrite(segE, HIGH);    	//uključi e segment
  digitalWrite(segD, HIGH);    	//uključi d segment
  delay(1000);                 	//čekaj 1 s - prikaz broja 2
  digitalWrite(segA, LOW);     	//isključi a segment
  digitalWrite(segB, LOW);     	//isključi b segment
  digitalWrite(segG, LOW);     	//isključi g segment
  digitalWrite(segE, LOW);     	//isključi e segment
  digitalWrite(segD, LOW);     	//isključi d segment
  
  digitalWrite(segA, HIGH);    	//uključi a segment
  digitalWrite(segB, HIGH);    	//uključi b segment
  digitalWrite(segC, HIGH);    	//uključi c segment
  digitalWrite(segD, HIGH);    	//uključi d segment
  digitalWrite(segG, HIGH);    	//uključi g segment
  delay(1000);                 	//čekaj 1 s - prikaz broja 3
  digitalWrite(segA, LOW);     	//isključi a segment
  digitalWrite(segB, LOW);     	//isključi b segment
  digitalWrite(segC, LOW);     	//isključi c segment
  digitalWrite(segD, LOW);     	//isključi d segment
  digitalWrite(segG, LOW);     	//isključi g segment
} 

