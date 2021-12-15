#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

int trig = 3;
int echo = 2;

float khoangcach;//bien luu khoang cach 
float time; // bien luu thoi gian
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(trig,OUTPUT); // chan trig se phat tin hieu
  pinMode(echo,INPUT); // chan echo se nhan tin hieu
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH); // phat xung tu chan trig
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  time = pulseIn(echo, HIGH); // do do trong xung HIGH o chan echo sau khi nhan duoc xung phan xa thi tra ve o
  khoangcach = (time/2) / 29.1;
  lcd.setCursor(0,0);//thiết lập con trỏ màn hình led đến dòng 0, cột 0
  lcd.print("kh.cach(cm):");
  lcd.setCursor(0, 1);//thiết lập con trỏ màn hình led đến dòng 0, cột 10
  lcd.print(khoangcach);
  delay(1000);

}
