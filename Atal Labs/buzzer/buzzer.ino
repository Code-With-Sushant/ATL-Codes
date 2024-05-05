 int LEDPin1 =  A5;//Connect Buzzer on Analog Pin 5
void setup()
{        
  pinMode(LEDPin1, OUTPUT);
  }
  void loop()
  {  
digitalWrite(LEDPin1, LOW);
delay(2000);
digitalWrite(LEDPin1, LOW);
delay(3000);  
}
