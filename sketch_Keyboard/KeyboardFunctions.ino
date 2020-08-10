void readKeys(int LOWOUT, int* buff){
  
  digitalWrite(OUT1, LOWOUT != 1);
  digitalWrite(OUT2, LOWOUT != 2);
  digitalWrite(OUT3, LOWOUT != 3);
  digitalWrite(OUT4, LOWOUT != 4);
  digitalWrite(OUT5, LOWOUT != 5);
  digitalWrite(OUT6, LOWOUT != 6);
  digitalWrite(OUT7, LOWOUT != 7);
  digitalWrite(OUT8, LOWOUT != 8);
  digitalWrite(OUT9, LOWOUT != 9);

  delayMicroseconds(RCTIMECONST);

  buff[0] = digitalRead(IN1);
  buff[1] = (PINB &= IN2) >> 0;
  buff[2] = digitalRead(IN3);
  buff[3] = digitalRead(IN4);
  buff[4] = (PIND &= IN5) >> 5;
  buff[5] = digitalRead(IN6);
  buff[6] = digitalRead(IN7);
  buff[7] = digitalRead(IN8);
}

void configure(SoftwareSerial* bluetooth, String name){
  bluetooth->print("$");              
  bluetooth->print("$");              // Print three times individually
  bluetooth->print("$");              // Enter command mode
  delay(REPORTDELAY);
  bluetooth->print("S~,6\n");         // Enable HID mode
  delay(REPORTDELAY);
  bluetooth->print("SA,0\n");         // Set authentication mode to 0
  delay(REPORTDELAY);
  bluetooth->print("SN,"+name+"\n");  // Set device name
  delay(100);
  bluetooth->print("SH,0207\n");      // Set flag register
  delay(REPORTDELAY);
  bluetooth->print("SM,6\n");         // Set auto-reconnect mode
  delay(REPORTDELAY);
  bluetooth->print("R,1\n");          // Restart with HID
  delay(REPORTDELAY);
}

void sendReport(SoftwareSerial* bluetooth, uint8_t keys[], uint8_t modifier){
  bluetooth->write((uint8_t)0xFD);
  bluetooth->write((uint8_t)0x09);
  bluetooth->write((uint8_t)0x01);
  bluetooth->write((uint8_t)modifier);  //bitmask: 7 Right GUI, 6 Right ALT, 5 Right Shift, 4 Right CTRL, 3 Left GUI, 2 Left ALT, 1 Left Shift, 0 Left CTRL
  bluetooth->write((uint8_t)0x00);
  
  bluetooth->write((uint8_t)keys[0]); //Scan code 1
  bluetooth->write((uint8_t)keys[1]); //Scan code 2
  bluetooth->write((uint8_t)keys[2]); //Scan code 3
  bluetooth->write((uint8_t)keys[3]); //Scan code 4
  bluetooth->write((uint8_t)keys[4]); //Scan code 5
  bluetooth->write((uint8_t)keys[5]); //Scan code 6
  delay(REPORTDELAY);
}
