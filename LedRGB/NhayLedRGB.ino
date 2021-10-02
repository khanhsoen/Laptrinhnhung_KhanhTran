void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(11,255);
  analogWrite(10,24);
  analogWrite(9,166);
  delay(100);
  
  analogWrite(11,144);
  analogWrite(10,221);
  analogWrite(9,12);
  delay(100);
}