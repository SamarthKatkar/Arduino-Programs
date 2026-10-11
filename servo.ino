#include<Servo.h>
Servo myServo;
void setup() {
 myServo.attach(3);


}

void loop() {
  for(int i=0;i<= 180;i++)
  {
    myServo.write(i);
    delay(10);
  }
  for(int i=180;i>=0;i--)
  {
    myServo.write(i);
    delay(10);
  }
}
