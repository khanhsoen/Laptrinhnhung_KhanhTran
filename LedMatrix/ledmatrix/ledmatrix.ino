int rowa = 6;
int rowb = 5;
int rowc = 4;

int cola = 13;
int colb = 12;
int colc = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(rowa, OUTPUT);
  pinMode(rowb, OUTPUT);
  pinMode(rowc, OUTPUT);

  pinMode(cola, OUTPUT);
  pinMode(colb, OUTPUT);
  pinMode(colc, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
    digitalWrite(4, LOW);
    shiftOut(5, 6, MSBFIRST, 00000100); //0
    digitalWrite(4, HIGH);

    digitalWrite(11, LOW);
    shiftOut(12, 13, MSBFIRST, 00100000); //0
    digitalWrite(11, HIGH);
    delay(100);
  
}
