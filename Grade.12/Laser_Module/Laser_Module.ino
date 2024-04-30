void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //define pin 13 as Output.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); //turns the laser On.
  delay(750); //waits 1/2 second.
  digitalWrite(13,LOW); //turns the laser Off.
  delay(250); //waits 1/4 second.
}
