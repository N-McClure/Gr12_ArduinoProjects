int relay = 13; //relay is connected to pin 13.

void setup() {
  // put your setup code here, to run once:
  pinMode(relay,OUTPUT); //relay is Output.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay,HIGH); //turns the relay led On.
  delay(500); //waits 1 second.
  digitalWrite(relay,LOW); //turns the relay led Off.
  delay(1000); //waits 1 second.

}
