int sensorPin = A0; //Photoresistor is Analog pin 0.
int ledPin = 13; //led is connected to pin 13.
int sensorValue = 0; //sensorValue is a variable that will equal the value coming from the sensor. 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT); //led is output.
  Serial.begin(9600); //starting value of the Serial Monitor.
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin); //sensorValue = what is read by the sensor.
  digitalWrite(ledPin,HIGH); //turns the led On.
  delay(sensorValue); //waits the amount of the sensor data.
  digitalWrite(ledPin,LOW); //turns the led Off.
  delay(sensorValue); //waits the amount of the sensor data.
  Serial.println(sensorValue,DEC); //prints the sensor value on the Serial Monitor as a Decimal value.

}
