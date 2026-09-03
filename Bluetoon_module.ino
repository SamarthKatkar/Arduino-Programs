#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3);  // RX, TX
const int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    char data = BT.read();

    if (data == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    }
    else if (data == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }
}