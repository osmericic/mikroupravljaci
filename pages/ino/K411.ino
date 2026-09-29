int led = 2;                           //definiraj led = 2
int tipkalo = 3;                       //definiraj tipkalo = 3
int stanje_tipkala;                    //definiraj varijablu stanje_tipkala

void setup() {
  pinMode(led, OUTPUT);                //postavi izvod led kao izlazni
  pinMode(tipkalo, INPUT_PULLUP);      //postavi izvod tipkalo kao ulazni
  digitalWrite(led, LOW);              //isključi led diodu - početno stanje
}

void loop() { 
  stanje_tipkala=digitalRead(tipkalo); //očitaj stanje tipkala
  if(stanje_tipkala==HIGH){            //ako je tipkalo otpušteno
    digitalWrite(led, LOW);            //isključi LED diodu
  } else {                             //inače (ako je tipkalo pritisnuto)
    digitalWrite(led, HIGH);           //uključi LED diodu
  }  
}

