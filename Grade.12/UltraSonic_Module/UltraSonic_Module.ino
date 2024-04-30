#define TRIGGER 12
#define ECHO 11

void setup() {
  // put your setup code here, to run once:
pinMode(ECHO,INPUT);
pinMode(TRIGGER,OUTPUT);
digitalWrite(TRIGGER,LOW);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
long distance,duration;
digitalWrite(TRIGGER,HIGH);
delay(10);
digitalWrite(TRIGGER,LOW);
duration = pulseIn(ECHO,HIGH);
distance = duration /2/7.6;
Serial.println(distance);

}
