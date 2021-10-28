int rowcl = 7;
int rowla = 3;
int rowda = 4;

int colcl = 13;
int colla = 11;
int colda = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(rowda, OUTPUT);
  pinMode(rowla, OUTPUT);
  pinMode(rowcl, OUTPUT);

  pinMode(colcl, OUTPUT);
  pinMode(colla, OUTPUT);
  pinMode(colda, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(rowla, LOW);
    shiftOut(rowda , rowcl, MSBFIRST, 0); //0
    digitalWrite(rowla, HIGH);
    
    digitalWrite(colla, LOW);
    shiftOut(colda, colcl, MSBFIRST, 255); //0
    digitalWrite(colla, HIGH);
    delay(100);
    
}
