int led1 = 3;                   //definiraj led1 = 3
int tpk1 = 4;                   //definiraj tpk1 = 4
int tpk2 = 5;                   //definiraj tpk2 = 5
int tpk3 = 6;                   //definiraj tpk3 = 6
int jacina;                     //definiraj varijablu jacina

void setup() {
  pinMode(led1, OUTPUT);        //postavi izvod led1 kao izlazni
  pinMode(tpk1, INPUT_PULLUP);  //postavi izvod tpk1 kao ulazni
  pinMode(tpk2, INPUT_PULLUP);  //postavi izvod tpk2 kao ulazni
  pinMode(tpk3, INPUT_PULLUP);  //postavi izvod tpk3 kao ulazni
  digitalWrite(led1, LOW);      //isključi LED diodu 1 - početno stanje
}

void loop() { 
  if(digitalRead(tpk1)==LOW){   //ako je pritisnutno tipkalo 1
    jacina=jacina+5;            //povecaj jačinu za 5
    if (jacina>255){            //ako je jačina veća od 255
      jacina=255;               //postavi jačinu na 255
    }
  }
  if(digitalRead(tpk2)==LOW){   //ako je pritisnutno tipkalo 2
    if (jacina>=5){             //ako je jačina veća od 5
      jacina=jacina-5;          //smanji jačinu za 5
    }
  }
  if(digitalRead(tpk3)==LOW){   //ako je pritisnutno tipkalo 3
    jacina=0;                   //postavi jačinu na 0
  }
  analogWrite(led1, jacina);    //LED 1 mijenja jačinu svijetla
  delay(150);                   //čekaj 150 ms
}

