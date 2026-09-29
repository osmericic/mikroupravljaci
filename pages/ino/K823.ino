int led1 = 3;                                 //definiraj led1 = 3
int led2 = 5;                                 //definiraj led2 = 5
int fo = A0;                                  //definiraj fo = A0
int ocitanjefo;                               //definiraj varijablu ocitanjefo
int jacinaled;                                //definiraj varijablu jacinaled

void setup() {
  pinMode(led1, OUTPUT);                      //postavi izvod led1 kao izlazni
  pinMode(led2, OUTPUT);                      //postavi izvod led2 kao izlazni
  digitalWrite(led1, LOW);                    //isključi LED diodu - početno stanje
  digitalWrite(led2, LOW);                    //isključi LED diodu - početno stanje
  Serial.begin(9600);                         //inicijalizaija serijske veze
}

void loop() { 
  ocitanjefo=analogRead(fo);                  //očitaj stanje analognog ulaza
  jacinaled=map(ocitanjefo, 0, 1023, 0, 255); //skaliraj očitanu vrijednost na 0-255
                                              
  analogWrite(led1, jacinaled);               //postavi jačinu LED diode 1
  analogWrite(led2, 255-jacinaled);           //postavi jačinu LED diode 2
  Serial.print(ocitanjefo);                   //pošalji očitanje serijskim putem
  Serial.print("\t");                         //pošalji znak tablulator serijskim putem
  Serial.println(jacinaled);                  //pošalji jačinu LED serijskim putem
  
  delay(50);                                  //čekaj 50 ms
}

