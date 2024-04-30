//Declaration:
int VRx = A0;
int VRy = A1;
int sw = 2;

int xpostition = 0;
int ypostition = 0;
int sw_state = 2;
int mapx = 0;
int mapy = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(VRx,INPUT);
  pinMode(VRy,INPUT);
  pinMode(sw,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  xpostition = analogRead(VRx);
  ypostition = analogRead(VRy);
  sw_state = digitalRead(sw);
  mapx = map(ypostition,0,1023,-512,512);
  mapy = map(ypostition,0,1023,-512,512);

  Serial.println("X: ");
  Serial.print(mapx);
  Serial.println();
  Serial.println(" | Y: ");
  Serial.print(mapy);
  Serial.println();
  Serial.println(" | Button: ");
  Serial.print(sw_state);
  Serial.println();

  delay(500);
}
