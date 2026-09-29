int led = 2;                       //definiraj led = 2
int sklopka = 3;                   //definiraj sklopka = 3
int reed = 4;                      //definiraj reed = 4

void setup() {
  pinMode(led, OUTPUT);            //postavi izvod led kao izlazni
  pinMode(sklopka, INPUT_PULLUP);  //postavi izvod sklopka kao ulazni
  pinMode(reed, INPUT_PULLUP);     //postavi izvod reed kao ulazni
  digitalWrite(led, LOW);          //isključi led diodu - početno stanje
}

void loop() { 
  if(digitalRead(sklopka)==LOW && digitalRead(reed)==LOW){   
                                   //ako je zatvorena sklopka i zatvoren prozor                
      digitalWrite(led, HIGH);     //uključi LED diodu
    } else {                       //inače
      digitalWrite(led, LOW);      //isključi LED diodu
    } 
}


