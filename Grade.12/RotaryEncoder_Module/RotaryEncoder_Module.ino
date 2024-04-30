int pinA = 3; //connected to CLK.
int pinB = 4; //connected to DT.
int encoderPostCount = 0;

int pinALast;
int aVal;
boolean bCW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA,INPUT);
  pinMode(pinB,INPUT);
  /*Read pin A, Whatever state it's in will reflect the last position.*/
  pinALast = digitalRead(pinA);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  aVal = digitalRead(pinA);
  if (aVal != pinALast)
  {
    if(digitalRead(pinB)!= aVal)
    {
      encoderPostCount++;
      bCW = true;
    }
    else
    {
      bCW = false;
      encoderPostCount--;
    }
    Serial.println("Rotated: ");
    if(bCW)
    {
      Serial.print("Clockwise");
    }
    else
    {
      Serial.print("CounterClockwise");
    }
    Serial.print("EncoderPosition: ");
    Serial.println(encoderPostCount);
  }
pinALast = aVal;
}
