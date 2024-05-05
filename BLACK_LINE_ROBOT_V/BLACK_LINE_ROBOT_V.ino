void setup()
{
pinMode(8,OUTPUT); //LEFT MOTOR M2
pinMode(9,OUTPUT);
pinMode(11,OUTPUT);//RIGHT MOTOR M1
pinMode(12,OUTPUT);
pinMode(4,INPUT);           
pinMode(5,INPUT); 
         
}

void loop()
{
int l = digitalRead(4);
int r = digitalRead(5);

if(l==LOW && r==LOW)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
}
else if(l==HIGH && r==LOW)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
}
else if(l==LOW && r==HIGH) 
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
}
else
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
}
}
