const int pinPot = A0;        
const int pinLedVerde = 12;   
const int pinLedRojo = 13;    

const int umbralRuido = 500;  

void setup() {
  Serial.begin(9600);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedRojo, OUTPUT);
}

void loop() {
  int nivelSimulado = analogRead(pinPot);

  Serial.print("Nivel de ruido simulado: ");
  Serial.println(nivelSimulado);

  if (nivelSimulado > umbralRuido) {
    
    digitalWrite(pinLedVerde, LOW);
    digitalWrite(pinLedRojo, HIGH);
  } else {
    
    digitalWrite(pinLedVerde, HIGH);
    digitalWrite(pinLedRojo, LOW);
  }

  delay(100);
}