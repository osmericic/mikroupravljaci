int ledCrvena = 2;             	        //definiraj ledCrvena = 2 
int ledZuta = 3;               	        //definiraj ledZuta = 3 
int ledZelena = 4;             	        //definiraj ledZelena = 4 
int ledCrvenaP = 5;           	        //definiraj ledCrvenaP = 5 
int ledZelenaP = 6;           	        //definiraj ledZelenaP = 6  

void setup() {   
pinMode(ledCrvena, OUTPUT);  	        //postavi izvod led_crvena kao izlazni   
pinMode(ledZuta, OUTPUT);    	        //postavi izvod led_zuta kao izlazni   
pinMode(ledZelena, OUTPUT);  	        //postavi izvod led_zelena kao izlazni   
pinMode(ledCrvenaP, OUTPUT);	        //postavi izvod led_crvena_p kao izlazni
pinMode(ledZelenaP, OUTPUT);	        //postavi izvod led_zelena_p kao izlazni
digitalWrite(ledCrvena, LOW);	        //isključi crvenu diodu - početno stanje
digitalWrite(ledZuta, LOW);  	        //isključi žutu LED diodu - početno stanje
digitalWrite(ledZelena, LOW);	        //isključi zel. LED diodu - početno stanje
digitalWrite(ledCrvenaP, LOW);	        //isključi crv diodu pj - početno stanje
digitalWrite(ledZelenaP, LOW);	        //isključi zel diodu pj - početno stanje
}  

void loop() {    
digitalWrite(ledCrvena, HIGH); 	        //uključi crvenu LED diodu   
digitalWrite(ledZelenaP, HIGH);	        //uključi zelenu LED diodu za pješake   
delay(3000);                     	//čekaj 3 s - svjetli C+Zp  
digitalWrite(ledZelenaP, LOW); 	        //isključi zelenu LED diodu za pješake   
digitalWrite(ledCrvenaP, HIGH);	        //uključi crvenu LED diodu za pješake    
digitalWrite(ledZuta, HIGH);    	//uključi žutu LED diodu   
delay(1000);                     	//čekaj 1 s - svjetli C+Ž+Cp    
digitalWrite(ledCrvena, LOW);   	//isključi crvenu LED diodu   
digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu    
digitalWrite(ledZelena, HIGH);  	//uključi zelenu LED diodu   
delay(3000);                     	//čekaj 3 s - svjetli Z+Cp
digitalWrite(ledZelena, LOW);   	//isključi zelenu LED diodu    
digitalWrite(ledZuta, HIGH);    	//uključi žutu LED diodu   
delay(1000);                     	//čekaj 1 s - svjetli Ž+Cp 
digitalWrite(ledZuta, LOW);     	//isključi žutu LED diodu    
digitalWrite(ledCrvenaP, LOW); 	        //isključi crvenu LED diodu za pješake 
}

