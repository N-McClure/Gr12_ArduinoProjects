int redPin = 11; //red led connected to pin 11.
int greenPin = 10; //green led connected to pin 10.
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT); //red pin is Output.
  pinMode(greenPin,OUTPUT); //green pin is Output.
  Serial.begin(9600); //starting value for the Baud of the Serial Monitor.

}

void loop() {
  // put your main code here, to run repeatedly:
  for(val = 255; val > 0; val--)
  {
    analogWrite(11,val);
    analogWrite(10,255-val);
    delay(15);
  }
  for(val = 0; val < 255; val++)
  {
    analogWrite(11,val);
    analogWrite(10,255-val);
    delay(15);
  }
  Serial.println(val,DEC);

}
