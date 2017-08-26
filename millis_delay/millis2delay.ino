const int ledPin =  LED_BUILTIN;
int ledState = LOW;

unsigned long preMillis = 0;

const long interval = 1000; //delayする時間(今回だと1秒)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  unsigned long currentMillis = millis();

  if (currentMillis - preMillis >= interval) {
    
    preMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin, ledState);
  }
}