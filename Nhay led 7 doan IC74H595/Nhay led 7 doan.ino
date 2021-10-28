int clockpin = 13;
int datapin = 12;
int latchpin = 8;
char LED7SEG[11] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90,0xff};

void setup() {
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(latchpin, OUTPUT);
}

void loop() {
  for(int i=0; i<11; i++) {
    digitalWrite(latchpin, LOW);
    shiftOut(datapin, clockpin, MSBFIRST, LED7SEG[i]); //0
    digitalWrite(latchpin, HIGH);
    delay(100);
  }
  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xc0); //0
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xf9);//1
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xa4);//2
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xb0);//3
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0x99);//4
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0x92);//5
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0x82);//6
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xf8);//7
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0x80);//8
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0x90);//9
  // digitalWrite(latchpin, HIGH);
  // delay(1000);

  // digitalWrite(latchpin, LOW);
  // shiftOut(datapin, clockpin, MSBFIRST, 0xff);//tat
  // digitalWrite(latchpin, HIGH);
  // delay(1000);
}
zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);