int led = 13; //led connected to pin 13.
int buttonPin = 7; //button connected to pin7.
int val; //numeric variables are stored as val.

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //led is Output.
  pinMode(buttonPin,INPUT); //button is Input.

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(buttonPin); //vlaue of val is the data from the Button.
  if(val == HIGH)
  {
    digitalWrite(led,LOW); //turns the led Off.
  }
  else
  {
    digitalWrite(led,HIGH); //turns the led On.
  }

}
