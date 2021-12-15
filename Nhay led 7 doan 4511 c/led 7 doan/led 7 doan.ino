int a=0, b=1, c=2, d=3;
void setup() {
  pinMode(a,OUTPUT); 
  pinMode(b,OUTPUT); 
  pinMode(c,OUTPUT); 
  pinMode(d,OUTPUT);
}
void KHONG(){
  digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
}
void MOT(){
  digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,HIGH); 
}
void loop() {
  KHONG(); delay(1000);
  MOT(); delay(1000);
}
