void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //pin 13 is Output.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); //turns the Led On.
  delay(500); //wait 1/2 second.
  digitalWrite(13,LOW); //turns Led Off.
  delay(500); //wait 1/2 second.

}
