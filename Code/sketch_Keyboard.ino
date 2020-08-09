#include <Keyboard.h>
#include <SoftwareSerial.h>  

#define bluetooth1Rx 1
#define bluetooth2Rx 4
#define bluetooth3Rx 12

#define IN1 10
#define IN2 (1 << 0)  //Arduino IDE doesnt let me use PB0 >:(
#define IN3 9
#define IN4 8
#define IN5 (1 << 5)  //Arduino IDE doesnt let me use PD5 >:(
#define IN6 6
#define IN7 2
#define IN8 3

#define OUT1 A5
#define OUT2 A4
#define OUT3 A3
#define OUT4 7
#define OUT5 A1
#define OUT6 A2
#define OUT7 11
#define OUT8 13
#define OUT9 5

#define UNIQUE1 (outPin==4&&inPin==8)
#define UNIQUE2 (outPin==5&&inPin==8)
#define UNIQUE3 (outPin==3&&inPin==8)
#define UNIQUE4 (outPin==2&&inPin==8)

#define MAXROLLOVER 6
#define RCTIMECONST 1800  //in microseconds
#define REPORTDELAY 10    //in milliseconds

int pressedButtons[8] = {0};

//outPin = row, inPin = col
extern uint8_t scancodeBank[9][8]; 
extern uint8_t modifierBank[9][8];

SoftwareSerial bluetooth1(NULL, bluetooth1Rx);
SoftwareSerial bluetooth2(NULL, bluetooth2Rx);
SoftwareSerial bluetooth3(NULL, bluetooth3Rx);

SoftwareSerial* activePort = &bluetooth3;

void setup()
{
  Keyboard.begin();
  Serial.begin(9600);

  pinMode(IN1, INPUT);
  pinMode(IN3, INPUT);
  pinMode(IN4, INPUT);
  pinMode(IN6, INPUT);
  pinMode(IN7, INPUT);
  pinMode(IN8, INPUT);

  //turn on internal pull ups
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN6, HIGH);
  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, HIGH);

  //Set IN2 and IN5 as input pin with internal pull up
  DDRD &= ~IN5;
  PORTD |= IN5;
  DDRB &= ~IN2;
  PORTB |= IN2;
  
  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);
  pinMode(OUT5, OUTPUT);
  pinMode(OUT6, OUTPUT);
  pinMode(OUT7, OUTPUT);
  pinMode(OUT8, OUTPUT);
  pinMode(OUT9, OUTPUT);
  
  bluetooth1.begin(115200);  // The Bluetooth Mate defaults to 115200bps
  bluetooth2.begin(115200);  // The Bluetooth Mate defaults to 115200bps
  bluetooth3.begin(115200);  // The Bluetooth Mate defaults to 115200bps

  bluetooth1.print("$");  // Print three times individually
  bluetooth1.print("$");
  bluetooth1.print("$");  // Enter command mode
  delay(REPORTDELAY);
  bluetooth1.print("S~,6\n");  // Enter enable HID
  delay(REPORTDELAY);
  bluetooth1.print("R,1\n");   // Restart with HID
  delay(REPORTDELAY);

  bluetooth2.print("$");  // Print three times individually
  bluetooth2.print("$");
  bluetooth2.print("$");  // Enter command mode
  delay(REPORTDELAY);
  bluetooth2.print("S~,6\n");  // Enter enable HID
  delay(REPORTDELAY);
  bluetooth2.print("R,1\n");   // Restart with HID
  delay(REPORTDELAY);

  bluetooth3.print("$");  // Print three times individually
  bluetooth3.print("$");
  bluetooth3.print("$");  // Enter command mode
  delay(REPORTDELAY);
  bluetooth3.print("S~,6\n");  // Enter enable HID
  delay(REPORTDELAY);
  bluetooth3.print("R,1\n");   // Restart with HID
  delay(REPORTDELAY);
}

void loop()
{
  uint8_t pressedKeys[MAXROLLOVER] = {0};
  int numPressed = 0;
  uint8_t modifier = 0x00;

  for( int outPin = 1; outPin < 10; outPin++){
    PORTD |= IN5;
    PORTB |= IN2;
    readKeys(outPin, pressedButtons);
    for( int inPin = 1; inPin < 9; inPin++){

      if(!pressedButtons[inPin-1]){
        modifier |= modifierBank[outPin-1][inPin-1];
        if(scancodeBank[outPin-1][inPin-1] != 0x00 && numPressed < MAXROLLOVER){
          pressedKeys[numPressed] = scancodeBank[outPin-1][inPin-1];
          numPressed++;
        }
        if(UNIQUE1)
          activePort = &bluetooth1;
        if(UNIQUE2)
          activePort = &bluetooth2;
        if(UNIQUE3)
          activePort = &bluetooth3;
      }
    
    
    }
  }

  //Serial.print(pressedKeys[0]); Serial.print(", "); Serial.print(pressedKeys[1]); Serial.print(", "); Serial.print(pressedKeys[2]); Serial.print(", "); Serial.print(pressedKeys[3]); Serial.print(", "); Serial.print(pressedKeys[4]); Serial.print(", "); Serial.println(pressedKeys[5]);

  sendReport(activePort, pressedKeys, modifier);
  
}
