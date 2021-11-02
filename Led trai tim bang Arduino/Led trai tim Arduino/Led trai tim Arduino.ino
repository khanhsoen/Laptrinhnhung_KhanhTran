int latchPin = 10;
int clockPin = 12;
int dataPin = 11;

// Khai báo mảng dùng điều khiển IC
byte ledStatus[3]= {};
byte SangHet=0b11111111;
byte TatHet=0b00000000;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

// Hàm shiftOut ra IC 595
void shiftOutHC595(int dataPin, int clockPin, byte ledStatus[]) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,MSBFIRST,ledStatus[0]);//Ic1
  shiftOut(dataPin,clockPin,MSBFIRST,ledStatus[1]);//ic2
  shiftOut(dataPin,clockPin,MSBFIRST,ledStatus[2]);//IC3
  digitalWrite(latchPin, HIGH);
}

void SangDen()
{
  for (int i = 0;i<24;i++){
      ledStatus[0]=SangHet;
      ledStatus[1]=SangHet;
      ledStatus[2]=SangHet;
      shiftOutHC595(dataPin,clockPin,ledStatus);
  }
}
void TatDen()
{
  for (int i = 0;i<24;i++){
      ledStatus[0]=TatHet;
      ledStatus[1]=TatHet;
      ledStatus[2]=TatHet;
      shiftOutHC595(dataPin,clockPin,ledStatus);
  }
}


void loop() { 
  SangDen();
  delay(1000);
  TatDen();
}