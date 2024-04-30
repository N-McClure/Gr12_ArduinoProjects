int led = 13; //led connected to pin 13.
int sensor = 3; //sensor is connected to pin 3.
int val; //value.

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //led is Output.
  pinMode(sensor,INPUT); //sensor in Input.

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sensor); //value of val is the data read on the sensor.
  if(val == HIGH)
  {
    digitalWrite(led,HIGH); //turns the led On.
  }
  else
  {
    digitalWrite(led,LOW); //turns the led Off.
  }

}
