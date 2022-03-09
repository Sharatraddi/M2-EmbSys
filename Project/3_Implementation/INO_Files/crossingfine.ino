#include<LiquidCrystal.h>
//Lane 1 Macros
#define trigger1 46 
#define echo1 48 
#define CF1 24

//Lane 2 Macros
#define trigger2 50 
#define echo2 52 
#define CF2 28

//Lane 3 Macros
#define trigger3 31 
#define echo3 33
#define CF3 32

//Lane 4 Macros
#define trigger4 35 
#define echo4 37 
#define CF4 36

LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);

float time1=0,time2=0,time3=0,time4=0;
float distance1=0,distance2=0,distance3=0,distance4=0;

void setup() 
{
  //Lane 1 initializaions
  pinMode(trigger1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(CF1,OUTPUT);
  LCD.begin(16, 2);
  LCD.setCursor (0,0);
  LCD.print("Vehicle");
  LCD.setCursor (0,1);
  LCD.print("Distance");
  delay(2000);
  LCD.clear();

  //Lane 2 initializaions
  pinMode(trigger2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(CF2,OUTPUT);

  //Lane 3 initializaions
  pinMode(trigger3,OUTPUT);
  pinMode(echo3,INPUT);
  pinMode(CF3,OUTPUT);
  
  //Lane 4 initializaions
  pinMode(trigger4,OUTPUT);
  pinMode(echo4,INPUT);
  pinMode(CF4,OUTPUT);

}

void loop() 
{
  //Lane 1 ultra sonic calculations
  digitalWrite(trigger1,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger1,LOW);
  delayMicroseconds(2);
  time1=pulseIn(echo1,HIGH);
  distance1=time1*340/20000;
  LCD.setCursor (0,0);
  LCD.print("Vehicle");
  LCD.setCursor (0,1);
  LCD.print("diatance:");
  LCD.print(distance1);
  LCD.print("M");
  delay(1000);
  LCD.clear();

  //Lane 2 ultra sonic calculations
  digitalWrite(trigger2,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger2,LOW);
  delayMicroseconds(2);
  time2=pulseIn(echo2,HIGH);
  distance2=time2*340/20000;

  //Lane 3 ultra sonic calculations
  digitalWrite(trigger3,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger3,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger3,LOW);
  delayMicroseconds(2);
  time3=pulseIn(echo3,HIGH);
  distance3=time3*340/20000;
  
  //Lane 4 ultra sonic calculations
  digitalWrite(trigger4,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger4,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger4,LOW);
  delayMicroseconds(2);
  time4=pulseIn(echo4,HIGH);
  distance4=time4*340/20000;
  
  //Lane 1 Distance Calculations
  if(distance1<300)
  {
    digitalWrite(CF1,HIGH);
    LCD.setCursor (0,0);
    LCD.print("Vehicle OZC");// Vehicle on Zebra crossing
    LCD.setCursor (0,1);
    LCD.print("FINE!!!");
    delay(3000);
    digitalWrite(CF1,HIGH);
    delay(1000);
    LCD.clear();  
  }
  else
  {
    digitalWrite(CF1,LOW);
    LCD.setCursor(0,0);
    LCD.print("Vehicle NOZC");// Vehicle not on Zebra Crossing
    LCD.setCursor(0,1);
    LCD.print("NO FINE!!");
    delay(1000);
    LCD.clear();
  }

  //Lane 2 Distance Calculations
  if(distance2<300)
  {
    digitalWrite(CF2,HIGH);
  }

  else
  {
    digitalWrite(CF2,LOW);
  }

  //Lane 3 Distance Calculations
  if(distance3<300)
  {
    digitalWrite(CF3,HIGH);
  }

  else
  {
    digitalWrite(CF3,LOW);
  }

  //Lane 4 Distance Calculations
  if(distance4<300)
  {
    digitalWrite(CF4,HIGH);
  }

  else
  {
    digitalWrite(CF4,LOW);
  }
}
