#include<Arduino.h>
#include<uRTCLib.h>

uRTCLib rtc(0x68);

char days_of_the_week[7][12] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void setup()
{
  Serial.begin(9600);
  URTCLIB_WIRE.begin();
  rtc.set(0,47,9,5,21,8,26);
}

void loop()
{
  rtc.refresh();
  Serial.print("Current Date and Time: ");
  Serial.print(rtc.day());
  Serial.print("/");
  Serial.print(rtc.month());
  Serial.print("/");
  Serial.print(rtc.year());
  
  Serial.print("  ");
  Serial.print("Time: ");
  Serial.print(rtc.hour());
  Serial.print(":");
  Serial.print(rtc.minute());

  Serial.print("\n");

  delay(5000);
}