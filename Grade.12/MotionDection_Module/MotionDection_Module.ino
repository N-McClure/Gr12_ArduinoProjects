int ledPin = 13;
int inputPin = 7;
int pirState = LOW;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  if (val == HIGH){
    digitalWrite(ledPin,HIGH);
    if (pirState == LOW){
      Serial.println("Motion Detected!");
      pirState = HIGH;
    }
  }else{
    digitalWrite(ledPin,LOW);
    if (pirState == HIGH){
      Serial.println("Motion Ended.");
      pirState = LOW;
    }
  }
}
