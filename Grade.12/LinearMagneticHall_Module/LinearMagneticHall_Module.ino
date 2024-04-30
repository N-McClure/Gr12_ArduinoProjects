int led = 13; //define led to pin 13.
int sensor = 10; //define sensor to pin 10.
int val; //define numeric variables val.

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //define led as Output.
  pinMode(sensor,INPUT); //define sensor as Input.
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sensor); //reads sensor.
  //IF statement that will turn on a led if a magnetic field is detected.
  if (val == LOW)
  {
    digitalWrite(led,HIGH); //turns on led.
  }
  else
  {
    digitalWrite(led,LOW); //turns off led.
  }

}
