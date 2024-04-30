
#include <Keypad.h> //imports Keypad 3.1.1 .zip:

const int ROW_NUM = 4; //4 rows
const int COLUMN_NUM = 4; //4 columns
int led = 13;

char keys[ROW_NUM] [COLUMN_NUM] = {
  {'1','2','3','A'}, //Row 1:
  {'4','5','6','B'}, //Row 2:
  {'7','8','9','C'}, //Row 3:
  {'*','0','#','D'}  //Row 4:
};

byte pin_rows[ROW_NUM] = {9,8,7,6}; //pins on Arduino connected to the Rows:
byte pin_column[COLUMN_NUM] = {5,4,3,2,}; //pins on Arduino connected to the Columns:

Keypad keypad = Keypad(makeKeymap(keys),pin_rows,pin_column,ROW_NUM,COLUMN_NUM);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //9600 baud
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();
  if (key){
    Serial.println(key); //prints the keypad input on a new line:
    if (key = '#')
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
    }
  }
}
