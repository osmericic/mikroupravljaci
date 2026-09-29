int led1 = 3;                       //definiraj led1 = 3
int led2 = 5;                       //definiraj led2 = 5
int jacina;                         //definiraj varijablu jacina

void setup() {
  pinMode(led1, OUTPUT);            //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);            //postavi izvod led2 kao izlazni
  digitalWrite(led1, LOW);          //isključi LED diodu 1 - početno stanje
  digitalWrite(led2, LOW);          //isključi LED diodu 2 - početno stanje
}

void loop() { 
  for (jacina=0;jacina<256;jacina++){ 
                                    //vrti varijablu jacina od 0 do 255 u koracima od 1
    analogWrite(led1, jacina);      //LED 1 mijenja jačinu svijetla
    analogWrite(led2, 255-jacina);  //LED 2 mijenja jačinu svijetla
    delay(20);                      //čekam 20 ms
  } 
  
  for (jacina=255;jacina>0;jacina--){ 
                                    //vrti varijablu jacina od 255 do 0 u koracima od 1
    analogWrite(led1, jacina);      //LED 1 mijenja jačinu svijetla
    analogWrite(led2, 255-jacina);  //LED 2 mijenja jačinu svijetla
    delay(20);                      //čekam 20 ms
  }
}

