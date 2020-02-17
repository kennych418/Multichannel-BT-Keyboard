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

int pressedButtons[8] = {0};
uint8_t pressedKeys[6] = {0};
uint8_t keys[6] = {0x00};
uint8_t modifier = 0x00;

SoftwareSerial bluetooth1(NULL, bluetooth1Rx);
SoftwareSerial bluetooth2(NULL, bluetooth2Rx);
SoftwareSerial bluetooth3(NULL, bluetooth3Rx);

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
  delay(100);
  bluetooth1.print("S~,6\n");  // Enter enable HID
  delay(100);
  bluetooth1.print("R,1\n");   // Restart with HID
  delay(100);

  bluetooth2.print("$");  // Print three times individually
  bluetooth2.print("$");
  bluetooth2.print("$");  // Enter command mode
  delay(100);
  bluetooth2.print("S~,6\n");  // Enter enable HID
  delay(100);
  bluetooth2.print("R,1\n");   // Restart with HID
  delay(100);

  bluetooth3.print("$");  // Print three times individually
  bluetooth3.print("$");
  bluetooth3.print("$");  // Enter command mode
  delay(100);
  bluetooth3.print("S~,6\n");  // Enter enable HID
  delay(100);
  bluetooth3.print("R,1\n");   // Restart with HID
  delay(100);
}

void loop()
{
  int numPressed = 0;
  
  PORTB |= IN2;
  readKeys(1, pressedButtons);

  if(pressedButtons[0] == 0){
    pressedKeys[0] = 0x04;
    sendReport(pressedKeys, 0x00);
  }
  else{
    pressedKeys[0] = 0x00;
    sendReport(pressedKeys, 0x00);
  }
  /*PORTB |= IN2;
  readKeys(2, pressedButtons);
  PORTB |= IN2;
  readKeys(3, pressedButtons);
  PORTB |= IN2;
  readKeys(4, pressedButtons);
  PORTB |= IN2;
  readKeys(5, pressedButtons);
  PORTB |= IN2;
  readKeys(6, pressedButtons);
  PORTB |= IN2;
  readKeys(7, pressedButtons);
  PORTB |= IN2;
  readKeys(8, pressedButtons);
  PORTB |= IN2;
  readKeys(9, pressedButtons);*/
}
