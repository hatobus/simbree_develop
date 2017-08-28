/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
// defines pins numbers
const int trigPin = 9;
const int echoPin = 9;
// defines variables
long duration;
int distance;
void setup() {
//pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
//pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(115200); // Starts the serial communication
}
void loop() {
pinMode(trigPin,OUTPUT);
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(trigPin);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
Serial.println(analogRead(echoPin));
//delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
pinMode(echoPin,INPUT);
duration = pulseIn(echoPin, HIGH);
Serial.println(analogRead(4));
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(1);
}

//TODO simbleeの距離0のナゾを究明
