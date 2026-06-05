const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // for clearing the pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  //to send a 10 microsecond wave
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //to measure how lond echo pin stays high
  long duration = pulseIn(echoPin, HIGH);

  // Calculating Distance
  int distance = duration * 0.034 / 2;

  // Printing to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(200); 
}