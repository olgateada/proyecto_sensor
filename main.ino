const int pinSensor = 2; 
const int pinLED = 13;    

void setup() {
  pinMode(pinSensor, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int estadoSensor = digitalRead(pinSensor);

  if (estadoSensor == HIGH) {
    digitalWrite(pinLED, HIGH); 
    delay(1000);                
  } else {
    digitalWrite(pinLED, LOW);  
  }
}
