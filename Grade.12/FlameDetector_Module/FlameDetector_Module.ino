int led = 13;
int buttonPin = 3;
int analog = A3;
int val;
float sensor;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(analog,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(analog);
  Serial.println(sensor);
  val = digitalRead(buttonPin);

  if (val == HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(1000);
}
