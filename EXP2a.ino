int redLedDelay=10000;
int greenLedDelay=10000;
int redLed=7;
int yellowLed=6;
int greenLed=5;
void setup() {
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
}

void loop() {
  digitalWrite(redLed,HIGH);
  delay(redLedDelay);
  digitalWrite(yellowLed,HIGH);
  delay(2000);
  digitalWrite(redLed,LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed,HIGH);
  delay(greenLedDelay);
  digitalWrite(yellowLed,HIGH);
  digitalWrite(greenLed,LOW);
  delay(2000);
  digitalWrite(yellowLed,LOW);
}
