int ledCrvena = 2;                	//definiraj ledCrvena = 2
int ledZuta = 3;                  	//definiraj ledZuta = 3
int ledZelena = 4;                	//definiraj ledZelena = 4
int ledCrvenaP = 5;              	//definiraj ledCrvenaP = 5
int ledZelenaP = 6;              	//definiraj ledZelenaP = 6
int sklopka = 8;                   	//definiraj sklopka = 8
int zuj = 9;                       	//definiraj zuj = 9
int brojac;                        	//definiraj varijablu brojac

void setup() {
  pinMode(ledCrvena, OUTPUT);     	//postavi izvod ledCrvena kao izlazni
  pinMode(ledZuta, OUTPUT);       	//postavi izvod ledZuta kao izlazni
  pinMode(ledZelena, OUTPUT);     	//postavi izvod ledZelena kao izlazni
  pinMode(ledCrvenaP, OUTPUT);   	//postavi izvod ledCrvenaP kao izlazni
  pinMode(ledZelenaP, OUTPUT);   	//postavi izvod ledZelenaP kao izlazni
  pinMode(sklopka, INPUT_PULLUP);  	//postavi izvod sklopka kao ulazni
  pinMode(zuj, OUTPUT);            	//postavi izvod zuj kao ulazni
  digitalWrite(ledCrvena, LOW);   	//isključi crvenu LED diodu - početno stanje
  digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu - početno stanje
  digitalWrite(ledZelena, LOW);   	//isključi zelenu LED diodu - početno stanje
  digitalWrite(ledCrvenaP, LOW); 	//isključi crvenu LED diodu zapješake - početno stanje
  digitalWrite(ledZelenaP, LOW); 	//isključi zelenu LED diodu za pješake - početno stanje
}

void loop() { 
  
  if (digitalRead(sklopka)==HIGH){
  digitalWrite(ledCrvena, HIGH);  	//uključi crvenu LED diodu
  digitalWrite(ledZelenaP, HIGH);	//uključi zelenu LED diodu za pješake
  for (brojac=0; brojac<6; brojac++){	//aktiviraj ton 250-250 ms
    tone(zuj, 1000);               	//generiraj ton 1000 Hz
    delay(250);                    	//čekaj 250 ms
    noTone(zuj);                   	//isključi ton
    delay(250);                    	//čekaj 250 ms
  }                                	//ukupno traje 3 sekunde
  digitalWrite(ledZelenaP, LOW); 	//isključi zelenu LED diodu za pješake
  digitalWrite(ledCrvenaP, HIGH);	//uključi crvenu LED diodu za pješake

  digitalWrite(ledZuta, HIGH);    	//uključi žutu LED diodu
  for (brojac=0; brojac<6; brojac++){	//aktiviraj ton 100-100 ms
    tone(zuj, 1000);               	//generiraj ton 1000 Hz
    delay(100);                    	//čekaj 250 ms
    noTone(zuj);                   	//isključi ton
    delay(100);                    	//čekaj 250 ms
  }                                	//ukupno traje 1 sekundu
  digitalWrite(ledCrvena, LOW);   	//isključi crvenu LED diodu
  digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu

  digitalWrite(ledZelena, HIGH);  	//uključi zelenu LED diodu
  for (brojac=0; brojac<18; brojac++){	//aktiviraj ton 100-100 ms
    tone(zuj, 1000);               	//generiraj ton 1000 Hz
    delay(100);                    	//čekaj 250 ms
    noTone(zuj);                   	//isključi ton
    delay(100);                    	//čekaj 250 ms
  }                                	//ukupno traje 1 sekundu
  digitalWrite(ledZelena, LOW);   	//isključi zelenu LED diodu

  digitalWrite(ledZuta, HIGH);    	//uključi žutu LED diodu
  for (brojac=0; brojac<6; brojac++){	//aktiviraj ton 100-100 ms
    tone(zuj, 1000);               	//generiraj ton 1000 Hz
    delay(100);                    	//čekaj 250 ms
    noTone(zuj);                   	//isključi ton
    delay(100);                    	//čekaj 250 ms
  }                                	//ukupno traje 1 sekundu
  digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu

  digitalWrite(ledCrvenaP, LOW); 	//isključi crvenu LED diodu za pješake
  } else {
    digitalWrite(ledZuta, HIGH);    	//uključi žutu LED diodu
    delay(500);                      	//čekaj 500 ms
    digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu
    delay(500);                      	//čekaj 500 ms
  }  
}

