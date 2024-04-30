#include <IRremote.h>

const int recv_pin = 7;
IRrecv irrecv(recv_pin);
decode_results results;
int redPin = 13;
int greenPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)){
    Serial.println(results.value,DEC);
    irrecv.resume();
    if (results.value == 16753245)
    {
      digitalWrite(greenPin,LOW);
      digitalWrite(redPin,HIGH);
      delay(25000);
    }
    else
    {
      digitalWrite(redPin, HIGH);
      delay(25000);
    }
  }

}
