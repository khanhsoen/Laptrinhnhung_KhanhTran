
int led = 3;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int reading = analogRead(A0);
  int temp = map(reading,  20, 358, -40, 125);//

  if(temp>0){
  	digitalWrite(led, HIGH);
  }
  else {
  	digitalWrite(led, LOW);
  }
  delay(100);
}
