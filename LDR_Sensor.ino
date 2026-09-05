int LDR=A0; //gpio 16=D0 pin
int value;
float voltage;
void setup()
{
 pinMode(A0,INPUT);
 Serial.begin(9600); //baud rate
 pinMode(5,OUTPUT);

}

void loop() {
  
  value=analogRead(A0);
  voltage=value*(5/1023.0);
  Serial.println("Light value="+String(value)+" \t Voltage = " +String(voltage)+"Volts");
  delay(3000);
  //if(voltage>=2.0)
  //{
    //digitalWrite(5,HIGH);
  //}
  //else
  //{
    //digitalWrite(5,LOW);
  //}
  

}
