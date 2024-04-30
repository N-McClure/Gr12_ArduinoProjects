int led = 13;
int ledPin = 12;
int buttonPin = 7; //define D0 Sensor Interface.
int sensorPin = A0; //sensor is analog pin 0.
int sensorValue = 0; //sensor start value is 0.
int val;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT); //led is output.
  pinMode(ledPin,OUTPUT); //ledPin is output.
  pinMode(buttonPin,INPUT);//buttonPin is input.

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin,HIGH); //turn on ledPin.
  delay(sensorValue); //waits for the amount of time of the sensorValue
  digitalWrite(ledPin,LOW); //turn off ledPin.
  delay(sensorValue); //waits for the amount of time of the sensorValue.
  Serial.println(sensorValue,DEC); //prints the sensorValue in Decimal on the SerialMonitor.
  val = digitalRead(buttonPin);
  if(val == HIGH)
  {
    digitalWrite(led,HIGH); //turns the led ON.
  }
  else
  {
    digitalWrite(led,LOW); //turns the led OFF.
  }

}
