int clockpin = 13;
int datapin = 12;
int latchpin = 8;

void setup() {
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(latchpin, OUTPUT);
}

void loop() {
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xc0); //0
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xf9);//1
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xa4);//2
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xb0);//3
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0x99);//4
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0x92);//5
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0x82);//6
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xf8);//7
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0x80);//8
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0x90);//9
  digitalWrite(latchpin, HIGH);
  delay(1000);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, 0xff);//tat
  digitalWrite(latchpin, HIGH);
  delay(1000);
}