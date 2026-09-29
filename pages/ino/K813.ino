int segR = 3;                    	        //definiraj segR = 3
int segG = 5;                    	        //definiraj segG = 5
int segB = 6;                    	        //definiraj segB = 6
int potR = A2;                    	        //definiraj potR = A2
int potG = A1;                    	        //definiraj potG = A1
int potB = A0;                    	        //definiraj potB = A0
int ocitanjepotR;                 	        //definiraj varijablu ocitanjepotR
int ocitanjepotG;                 	        //definiraj varijablu ocitanjepotG
int ocitanjepotB;                 	        //definiraj varijablu ocitanjepotB
int jacinaR;                      	        //definiraj varijablu jacinaR
int jacinaG;                      	        //definiraj varijablu jacinaG
int jacinaB;                      	        //definiraj varijablu jacinaB

void setup() {
  pinMode(segR, OUTPUT);         	        //postavi izvod seg_R kao izlazni
  pinMode(segG, OUTPUT);         	        //postavi izvod seg_G kao izlazni
  pinMode(segB, OUTPUT);         	        //postavi izvod seg_B kao izlazni
  digitalWrite(segR, HIGH);      	        //isključi segment RGB diode - početno stanje
  digitalWrite(segG, HIGH);      	        //isključi segment RGB diode - početno stanje
  digitalWrite(segB, HIGH);      	        //isključi segment RGB diode - početno stanje
}

void loop() { 
  ocitanjepotR=analogRead(potR);  	        //očitaj stanje analognog ulaza
  ocitanjepotG=analogRead(potG);  	        //očitaj stanje analognog ulaza
  ocitanjepotB=analogRead(potB);  	        //očitaj stanje analognog ulaza  
  jacinaR=map(ocitanjepotR, 0, 1023, 0, 255);   //skaliraj očitanje na 0-255                                	      
  jacinaG=map(ocitanjepotG, 0, 1023, 0, 255);   //skaliraj očitanje na 0-255                                  	
  jacinaB=map(ocitanjepotB, 0, 1023, 0, 255);   //skaliraj očitanje na 0-255                                  	                                
  analogWrite(segR, 255-jacinaR);	        //postavi analogni izlaz na izračunatu vrijednost
  analogWrite(segG, 255-jacinaG);	        //postavi analogni izlaz na izračunatu vrijednost
  analogWrite(segB, 255-jacinaB);	        //postavi analogni izlaz na izračunatu vrijednost
  delay(50);                      	        //čekaj 50 milisekundi
}

