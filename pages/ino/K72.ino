int tipkalo1 = 3;                     //definiraj tipkalo1 = 3

void setup() {
  pinMode(tipkalo1, INPUT_PULLUP);    //postavi izvod tipkalo1 kao ulazni
  Serial.begin(9600);                 //inicijalizacija serijske veze
}

void loop() { 
  if(digitalRead(tipkalo1)==LOW){     //ako je tipkalo pritisnuto
    Serial.println("Tipkalo je pritisnuto");
                                      //pošalji poruku serijskom vezom
  } else {                            //inače
    Serial.println("Tipkalo je otpusteno");
                                      //pošalji poruku serijskom vezom
  } 
  delay(1000);                        //čekaj 1 s
}

