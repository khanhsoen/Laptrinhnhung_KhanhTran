int index = 0;
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(index = 0; index <= 255; index += 5){
  	analogWrite(9, index);
    delay(50);
  }
  for(index=255; index>=0; index -= 5){
  	analogWrite(9, index);
    delay(50);
  }
}