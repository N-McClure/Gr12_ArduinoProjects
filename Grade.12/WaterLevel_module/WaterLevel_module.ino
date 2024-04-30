int adc_id = 0; //adc_id connected to pin A0.
int HistoryValue = 0; //HistoryValue starting value is 0;
char printBuffer[128];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Starting Baud of the Serial Monitor.

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(adc_id); //get adc value.
  if (((HistoryValue >= value) && ((HistoryValue - value) > 10)) || ((HistoryValue < value) && ((value - HistoryValue) > 10)))
  {
    sprintf(printBuffer,"ADC%d level is %d\n",adc_id, value);
    Serial.print(printBuffer); //Prints the data of printBuffer on the Serial Monitor.
    HistoryValue = value; //Data in History Value is the data of Value.
  }

}
