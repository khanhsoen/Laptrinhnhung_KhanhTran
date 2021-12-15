int clockpin=12, latchpin=10, datapin=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(clockpin,OUTPUT);
  pinMode(latchpin,OUTPUT);
  pinMode(datapin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++){
    digitalWrite(latchpin,LOW);
    shiftOut(datapin, clockpin, LSBFIRST, i);
    digitalWrite(latchpin,HIGH);
    delay(100);
  }
}
