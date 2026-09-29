int led = 2;                            //definiraj led = 2
int tipkalo1 = 3;                       //definiraj tipkalo1 = 3
int tipkalo2 = 4;                       //definiraj tipkalo2 = 4
int brojac = 0;                         //definiraj brojac = 0

void setup() {
  pinMode(led, OUTPUT);                 //postavi izvod led kao izlazni
  pinMode(tipkalo1, INPUT_PULLUP);      //postavi izvod tipkalo1 kao ulazni
  pinMode(tipkalo2, INPUT_PULLUP);      //postavi izvod tipkalo2 kao ulazni
  digitalWrite(led, LOW);               //isključi led diodu - početno stanje
  Serial.begin(9600);                   //inicijalizacija serijske veze
}

void loop() { 
  while(digitalRead(tipkalo2)==HIGH){   //dok tipkalo 2 nije pritisnutno
    delay(10);                          //čekaj 10 ms
  }
  
  Serial.println("PROIZVODNA TRAKA JE U POGONU");
                                        //pošalji poruku serijskim putem
  digitalWrite(led, HIGH);              //uključi LED diodu
  brojac=0;                             //postavi brojač na 0
  
  while(brojac<6){                      //dok je brojač manji od 6
    if(digitalRead(tipkalo1)==LOW){     //ako je tipkalo 1 pritisnuto
      brojac=brojac+1;                  //dodaj jedan na brojač
    }
  }
  
  Serial.println("PROIZVODNA KUTIJA JE NAPUNJENA");
                                        //pošalji poruku serijskim putem
  digitalWrite(led, LOW);               //isključi LED diodu
  
}

