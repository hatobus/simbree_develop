// HC-SR04を使えるようにする
// スマホで距離を見れるように．
//  #define PING_PIN 4
//  #include <NewPing.h>      

// †おまじない†

//  NewPing sonar(PING_PIN, PING_PIN);
const int pingPIN = 4;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  // TODO 
  // NewPingを入れる -> OK
  // dist = 0になるのを究明

}

void loop() {
   long dura,inch,cm;
  // put your main code here, to run repeatedly:

//  delay(50);
//  int uS = sonar.ping();
//  // Send ping, get ping time in microseconds (uS).
//
//  Serial.print("Ping: ");
//  Serial.print(uS);
//  
//  Serial.println("cm");


  pinMode(pingPIN,OUTPUT);
  digitalWrite(pingPIN,LOW);
  delay(2);
  digitalWrite(pingPIN,HIGH);
  delay(5);
  digitalWrite(pingPIN,LOW);

  pinMode(pingPIN, INPUT);
  dura = pulseIn(pingPIN, HIGH);
 
  Serial.print(inch);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
 
  delay(100);

}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}
