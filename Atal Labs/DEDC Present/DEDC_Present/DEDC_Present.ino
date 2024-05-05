
void setup()
{
  pinMode(13,OUTPUT);//DECLARE PIN NO 13 AS AN O/P VARIABLE;
}

void loop()
{
  digitalWrite(13,HIGH);//HIGH VOLTAGE PIN 13
  delay(100);//delay of 1000 sec
  
  digitalWrite(13,LOW);//LOW VOLTAGE TO PIN 13
  delay(100);
  
}
