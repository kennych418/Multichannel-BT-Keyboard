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

  buff[0] = digitalRead(IN1);
  buff[1] = (PINB &= IN2) >> 0;
  buff[2] = digitalRead(IN3);
  buff[3] = digitalRead(IN4);
  buff[4] = (PIND &= IN5) >> 5;
  buff[5] = digitalRead(IN6);
  buff[6] = digitalRead(IN7);
  buff[7] = digitalRead(IN8);
}

void sendReport(uint8_t keys[], uint8_t modifier){
  bluetooth3.write((uint8_t)0xFD);
  bluetooth3.write((uint8_t)0x09);
  bluetooth3.write((uint8_t)0x01);
  bluetooth3.write((uint8_t)modifier);  //bitmask: 7 Right GUI, 6 Right ALT, 5 Right Shift, 4 Right CTRL, 3 Left GUI, 2 Left ALT, 1 Left Shift, 0 Left CTRL
  bluetooth3.write((uint8_t)0x00);
  
  bluetooth3.write((uint8_t)keys[0]); //Scan code 1
  bluetooth3.write((uint8_t)keys[1]); //Scan code 2
  bluetooth3.write((uint8_t)keys[2]); //Scan code 3
  bluetooth3.write((uint8_t)keys[3]); //Scan code 4
  bluetooth3.write((uint8_t)keys[4]); //Scan code 5
  bluetooth3.write((uint8_t)keys[5]); //Scan code 6
  delay(100);
}
