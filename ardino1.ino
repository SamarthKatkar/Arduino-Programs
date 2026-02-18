// Define our pin number as a variable for easy changes later
const int ledPin = 9; 

void setup() {
  // We are sending voltage OUT to the LED
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED ON (5V)
  delay(1000);                 // Wait 1 second (1000 ms)
  
  digitalWrite(ledPin, LOW);   // Turn LED OFF (0V)
  delay(100);                 // Wait 1 second
 
}