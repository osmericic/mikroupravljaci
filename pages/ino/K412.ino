int led = 2;                       //definiraj led = 2
int tipkalo = 3;                   //definiraj tipkalo = 3

void setup() {
  pinMode(led, OUTPUT);            //postavi izvod led kao izlazni
  pinMode(tipkalo, INPUT_PULLUP);  //postavi izvod tipkalo kao ulazni
  digitalWrite(led, LOW);          //isključi led diodu - početno stanje
}

void loop() { 
  if(digitalRead(tipkalo)==HIGH){  //ako je tipkalo otpušteno
    digitalWrite(led, HIGH);       //uključi LED diodu
  } else {                         //inače (ako je tipkalo pritisnuto)
    digitalWrite(led, LOW);        //isključi LED diodu
  }  
}

