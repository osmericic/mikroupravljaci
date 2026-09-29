int ledR = 3;                  	        //definiraj ledR = 3
int ledG = 5;                  	        //definiraj ledG = 5
int ledB = 6;                  	        //definiraj ledB = 6
int tpk1 = 8;                   	//definiraj tpk1 = 8
int tpk2 = 9;                   	//definiraj tpk2 = 9
int tpk3 = 10;                  	//definiraj tpk3 = 10
int tpk4 = 11;                  	//definiraj tpk4 = 11
int tpk5 = 12;                  	//definiraj tpk5 = 12
int tpk6 = 13;                  	//definiraj tpk6 = 13
int jacinaR = 0;                	//definiraj jacinaR = 0
int jacinaG = 0;                	//definiraj jacinaG = 0
int jacinaB = 0;                	//definiraj jacinaB = 0

void setup() {
  pinMode(ledR, OUTPUT);         	//postavi izvod ledR kao izlazni
  pinMode(ledG, OUTPUT);       	        //postavi izvod ledG kao izlazni
  pinMode(ledB, OUTPUT);       	        //postavi izvod ledB kao izlazni
  pinMode(tpk1, INPUT_PULLUP);  	//postavi izvod tpk1 kao ulazni
  pinMode(tpk2, INPUT_PULLUP);  	//postavi izvod tpk2 kao ulazni
  pinMode(tpk3, INPUT_PULLUP);  	//postavi izvod tpk3 kao ulazni
  pinMode(tpk4, INPUT_PULLUP);  	//postavi izvod tpk4 kao ulazni
  pinMode(tpk5, INPUT_PULLUP);  	//postavi izvod tpk5 kao ulazni
  pinMode(tpk6, INPUT_PULLUP);  	//postavi izvod tpk6 kao ulazni
  digitalWrite(ledR, HIGH);    	        //isključi crveni segment-početno stanje
  digitalWrite(ledG, HIGH);    	        //isključi zeleni segment-početno stanje
  digitalWrite(ledB, HIGH);    	        //isključi plavi segment-početno stanje
}

void loop() { 
  if(digitalRead(tpk1)==LOW){   	//ukoliko je pritisnuto tipkalo 1
    if(jacinaR>=5){             	//ukoliko je jacinaR veća ili jednaka 5
      jacinaR=jacinaR-5;        	//smanji jačinu za 5
    }
  }
  if(digitalRead(tpk2)==LOW){   	//ukoliko je pritisnuto tipkalo 2
    if(jacinaR<=250){           	//ukoliko je jacinaR manja ili jednaka 5
      jacinaR=jacinaR+5;        	//pojačaj jačinu za 5
    }
  }
  
  if(digitalRead(tpk3)==LOW){   	//ukoliko je pritisnuto tipkalo 3
    if(jacinaG>=5){             	//ukoliko je jacinaG veća ili jednaka 5
      jacinaG=jacinaG-5;        	//smanji jačinu za 5
    }
  }
  if(digitalRead(tpk4)==LOW){   	//ukoliko je pritisnuto tipkalo 4
    if(jacinaG<=250){           	//ukoliko je jacinaR manja ili jednaka 5
      jacinaG=jacinaG+5;        	//pojačaj jačinu za 5
    }
  }
  
  if(digitalRead(tpk5)==LOW){   	//ukoliko je pritisnuto tipkalo 5
    if(jacinaB>=5){             	//ukoliko je jacinaB veća ili jednaka 5
      jacinaB=jacinaB-5;        	//smanji jačinu za 5
    }
  }
  if(digitalRead(tpk6)==LOW){   	//ukoliko je pritisnuto tipkalo 6
    if(jacinaB<=250){           	//ukoliko je jacinaB manja ili jednaka 5
      jacinaB=jacinaB+5;        	//pojačaj jačinu za 5
    }
  }
  
  analogWrite(ledR, 255-jacinaR);	//postavi crveni segment na 255-jacinaR
  analogWrite(ledG, 255-jacinaG);	//postavi zeleni segment na 255-jacinaG
  analogWrite(ledB, 255-jacinaB);	//postavi plavi  segment na 255-jacinaB
  
  delay(100);                     	//čekaj 100 ms
}

