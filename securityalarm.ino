// Define our pin number as a variable for easy changes later
const int ledpin = 9;
const int sensorpin=2; 

void setup() {
  // We are sending voltage OUT to the LED
  pinMode(ledpin, OUTPUT);
  pinMode(sensorpin,INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {
  int sensorState = digitalRead(sensorpin);
  Serial.println(sensorState);
  if(sensorState==HIGH)
  {
    digitalWrite(ledpin,HIGH);
  } else{
    digitalWrite(ledpin,LOW);
  }
  delay(100);
 
}