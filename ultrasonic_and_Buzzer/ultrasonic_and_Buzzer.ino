#define echoPin 7 // Echo Pin
#define trigPin 8 // Trigger Pin
#define BuzzPin 11 // Onboard LED
int maximumRange = 100; // Maximum range needed
int minimumRange = 10; // Minimum range needed
long duration, distance; // Duration used to calculate distance
void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(BuzzPin, OUTPUT); 
}
void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
//Calculate the distance (in cm) based on the speed of sound.
distance = duration/58.2;
if (distance <= maximumRange && distance >= minimumRange){
/* Send a negative number to computer and Turn BUZZER ON
to indicate "out of range" */
Serial.println("-1");
digitalWrite(BuzzPin, HIGH);
}
else {
/* Send the distance to the computer using Serial protocol, and
turn Buzzer OFF to indicate successful reading. */
Serial.println(distance);
digitalWrite(BuzzPin, LOW);
}
//Delay 50ms before next reading.
delay(50);
}
