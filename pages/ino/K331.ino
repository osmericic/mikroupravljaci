int segA = 2;                	//definiraj seg_a = 2 
int segB = 3;                	//definiraj seg_b = 3 
int segC = 4;                	//definiraj seg_c = 4 
int segD = 5;                	//definiraj seg_d = 5 
int segE = 6;                	//definiraj seg_e = 6 
int segF = 7;                	//definiraj seg_f = 7 
int segG = 8;                	//definiraj seg_g = 8  

void setup() {   
pinMode(segA, OUTPUT);       	//postavi izvod segA kao izlazni   
pinMode(segB, OUTPUT);       	//postavi izvod segB kao izlazni   
pinMode(segC, OUTPUT);       	//postavi izvod segC kao izlazni   
pinMode(segD, OUTPUT);       	//postavi izvod segD kao izlazni   
pinMode(segE, OUTPUT);       	//postavi izvod segE kao izlazni   
pinMode(segF, OUTPUT);       	//postavi izvod segF kao izlazni   
pinMode(segG, OUTPUT);       	//postavi izvod segG kao izlazni   
digitalWrite(segA, LOW);     	//isključi a segment - početno stanje   
digitalWrite(segB, LOW);     	//isključi b segment - početno stanje   
digitalWrite(segC, LOW);     	//isključi c segment - početno stanje   
digitalWrite(segD, LOW);     	//isključi d segment - početno stanje   
digitalWrite(segE, LOW);     	//isključi e segment - početno stanje   
digitalWrite(segF, LOW);     	//isključi f segment - početno stanje   
digitalWrite(segG, LOW);     	//isključi g segment - početno stanje 
}  

void loop() {    
digitalWrite(segA, HIGH);    	//uključi a segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segA, LOW);     	//isključi a segment      
digitalWrite(segB, HIGH);    	//uključi b segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segB, LOW);     	//isključi b segment      
digitalWrite(segC, HIGH);    	//uključi c segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segC, LOW);     	//isključi c segment      
digitalWrite(segD, HIGH);    	//uključi d segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segD, LOW);     	//isključi d segment      
digitalWrite(segE, HIGH);    	//uključi e segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segE, LOW);     	//isključi e segment      
digitalWrite(segF, HIGH);    	//uključi f segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segF, LOW);     	//isključi f segment      
digitalWrite(segG, HIGH);    	//uključi g segment   
delay(300);                   	//čekaj 300 ms   
digitalWrite(segG, LOW);     	//isključi g segment 
}

