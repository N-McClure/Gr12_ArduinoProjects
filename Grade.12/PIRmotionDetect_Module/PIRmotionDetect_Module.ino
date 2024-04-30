int inputPin = 7; //sensor connected to pin 7.
int ledPin = 13; //led connected to pin 13.
int pirState = LOW;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT); //Declaration sensor as input.
  pinMode(ledPin,OUTPUT); //Declaration led as output.
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin); //read input value.
  if(val == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    if(pirState == LOW)
    {
      Serial.println("Motion Detected!");
      pirState = HIGH;
    }
  }
  else
  {
    digitalWrite(ledPin,LOW);
    if(pirState == HIGH)
    {
      Serial.println("Motion Ended!");
      pirState = LOW;
    }
  }
}
