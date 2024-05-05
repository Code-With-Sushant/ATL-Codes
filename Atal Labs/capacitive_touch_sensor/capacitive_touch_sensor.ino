int ledPin = 13;                // Connect LED on pin 13, or use the onboard one 
int KEY = 2;                 // Connect Touch sensor on Digital Pin 2  
void setup()
{  
  pinMode(ledPin, OUTPUT);      // Set ledPin to output mode 
  pinMode(KEY, INPUT);       //Set touch sensor pin to input mode 
  }
  void loop()
  { 
if(digitalRead(A2) == 100)
{
  digitalWrite(13,HIGH);
  }
else
{digitalWrite(13,LOW);}
}
