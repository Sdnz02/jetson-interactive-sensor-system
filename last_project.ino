#include <Servo.h>
#include <LiquidCrystal.h>


int r=7, g=8;

int trig=10,echo=9;
long duration,distance;
int servo = 6,angle=0;
Servo myservo; 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  myservo.attach(servo);
  lcd.setCursor(0,0);
  lcd.print("Welcome to");
  lcd.setCursor(10, 1);
  lcd.print("APSSDC");
  delay(100);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(servo,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  delay(100);
  lcd.clear();
}
void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  duration=pulseIn(echo,HIGH);
  distance=duration*(0.034/2);
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(9,0);
  lcd.print(distance);
  lcd.setCursor(12,0);
  lcd.print(" CM");
  lcd.setCursor(0,1);
  lcd.print("Servo angle:");
  lcd.setCursor(12,1);
  lcd.print(angle);
  lcd.setCursor(15,1);
  lcd.print("d");
  if(distance<=180)
  {
    angle = distance;
    myservo.write(angle);
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
  }
  else
  {
    digitalWrite(g, HIGH);
    digitalWrite(r, LOW);
    angle = distance/2;
    myservo.write(angle);
  }
  delay(75);
  lcd.clear();  
}
