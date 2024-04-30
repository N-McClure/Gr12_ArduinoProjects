int led = 13;
int tracker = 3;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(tracker,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(tracker);
  if (val == HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
