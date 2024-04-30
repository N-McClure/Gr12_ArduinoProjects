int shockPin = 10; //sensor is connected to pin 10 as input.
int shockVal = HIGH; //recorded shock measurement.
boolean bAlarm = false;
unsigned long lastShockTime; //recorded time that we measured a shock.
int shockAlarmTime = 250; //number of MS to keep the shockAlarm high.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //starting value of the Serial Monitor.
  pinMode(shockPin,INPUT); //shock pin is Input.
}

void loop() {
  // put your main code here, to run repeatedly:
  shockVal = digitalRead(shockPin); //reads the value from the sensor.
  if(shockVal == LOW) //if we are in an "Alarm state".
  {
    lastShockTime = millis(); //record the time of the Shock.
  }

  if(!bAlarm) //if NOT bAlarm.
  {
    Serial.println("Shock Module"); //prints on the Serial Monitor.
    delay(750); //waits 750 milliseconds.
    bAlarm = true;
  }
  else
  {
    if((millis() - lastShockTime) > shockAlarmTime && bAlarm)
    {
      Serial.println("No Alarm");
      delay(750); //waits 750 milliseconds.
      bAlarm = false;
    }
  }
}
