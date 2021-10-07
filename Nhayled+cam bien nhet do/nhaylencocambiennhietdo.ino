void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}
void loop() {
  int reading = analogRead(A0); 
  int T= map(reading, 20, 358, -40, 125);
  
  if(T>0){
  	digitalWrite(11, HIGH);
  }
  else {
  	digitalWrite(11, LOW);
  }
   delay(1000);
}