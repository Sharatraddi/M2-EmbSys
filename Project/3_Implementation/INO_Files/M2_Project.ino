//----------------INITIALIZATIONS--------------------

// Signal LED's (Traffic lights of all lanes)
int R1 = 2; //Red light of lane 1
int Y1 = 3; //Yellow light of lane 1
int G1 = 4; //Green light of lane 1

int R2 = 5; //Red light of lane 2
int Y2 = 6; //Yellow light of lane 2
int G2 = 7; //Green light of lane 2

int R3 = 8; //Red light of lane 3
int Y3 = 9; //Yellow light of lane 3
int G3 = 10; //Green light of lane 3

int R4 = 11; //Red light of lane 4
int Y4 = 12; //Yellow light of lane 4
int G4 = 13; //Green light of lane 4

// Servo motors (Boom Barrier and Pedestrian gate control)
#include <Servo.h> 
Servo servo1;
#define servoPin1 38
Servo servo2;
#define servoPin2 40
Servo servo3;
#define servoPin3 42
Servo servo4;
#define servoPin4 44



// Potentiometers (Fine the vehicles which are over the speed limit)
#define POTENTIOMETER_PIN A6
#define POTENTIOMETER_PIN A7
#define POTENTIOMETER_PIN A8
#define POTENTIOMETER_PIN A9
// Speeding vehicles on road fine LED's
#define SF1 22 //Speeding fine (SF) light of lane 1
#define SF2 26 //Speeding fine (SF) light of lane 2
#define SF3 30 //Speeding fine (SF) light of lane 3
#define SF4 34 //Speeding fine (SF) light of lane 4


// Ultrasonic sensors and display (Fine vehicles which cross the zebra crossing)
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



//----------------SETUP--------------------

void setup()

{
  // Signal LED's (Traffic lights of all lanes)
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G1, OUTPUT);
  
  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G2, OUTPUT);
  
  pinMode(R3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(G3, OUTPUT);
  
  pinMode(R4, OUTPUT);
  pinMode(Y4, OUTPUT);
  pinMode(G4, OUTPUT);
  
  // Servo motors (Boom Barrier and Pedestrian gate control)
  servo1.attach(servoPin1);
  servo2.attach(servoPin2); 
  servo3.attach(servoPin3); 
  servo4.attach(servoPin4);

 // Potentiometers (Fine the vehicles which are over the speed limit)
  pinMode(SF1, OUTPUT);
  pinMode(SF2, OUTPUT);
  pinMode(SF3, OUTPUT);
  pinMode(SF4, OUTPUT);

  
  // Ultrasonic sensors and display (Fine the vehicles which cross the zebra crossing)
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


//-------------------LOOP------------------
void loop ()
{
   tlbbapgc (); //Calling the function of traffic lights, boom barrier and pedestrain gates control.
   speedfine(); //Calling the function of fining the vehicles who are above the speed limit of the road.
   crossfine();// Calling the function of fining the vehicles who are blocking the zebra crossing on the road.
}


//-------------------FUNCTIONS------------------
void tlbbapgc()// This is the function of traffic lights, boom barrier and pedestrain gates control i.e (tlbbapgc) 
{
  // All the traffic is halted so that all the pedestrains can pass 
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(3000);

  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);

  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  //Lane 1 traffic lights & boom barrier control
  digitalWrite(Y1, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(G1, LOW);
  delay(1000);
  digitalWrite(Y1, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(G1, HIGH);
  servo1.write(0);
  delay(3000);
  digitalWrite(Y1, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(G1, LOW);
  delay(1000);
  digitalWrite(Y1, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(G1, LOW);
  servo1.write(90);
  delay(1000);

  //Lane 2 traffic lights & boom barrier control
  digitalWrite(Y2, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(G2, LOW);
  delay(1000);
  digitalWrite(Y2, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(G2, HIGH);
  servo2.write(0);
  delay(3000);
  digitalWrite(Y2, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(G2, LOW);
  delay(1000);
  digitalWrite(Y2, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(G2, LOW);
  servo2.write(90);
  delay(1000);

  //Lane 3 traffic lights & boom barrier control
  digitalWrite(Y3, HIGH);
  digitalWrite(R3, LOW);
  digitalWrite(G3, LOW);
  delay(1000);
  digitalWrite(Y3, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(G3, HIGH);
  servo3.write(0);
  delay(3000);
  digitalWrite(Y3, HIGH);
  digitalWrite(R3, LOW);
  digitalWrite(G3, LOW);
  delay(1000);
  digitalWrite(Y3, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(G3, LOW);
  servo3.write(90);
  delay(1000);

  //Lane 4 traffic lights & boom barrier control
  digitalWrite(Y4, HIGH);
  digitalWrite(R4, LOW);
  digitalWrite(G4, LOW);
  delay(1000);
  digitalWrite(Y4, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(G4, HIGH);
  servo4.write(0);
  delay(3000);
  digitalWrite(Y4, HIGH);
  digitalWrite(R4, LOW);
  digitalWrite(G4, LOW);
  delay(1000);
  digitalWrite(Y4, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(G4, LOW);
  servo4.write(90);
  delay(1000);
}

void speedfine()// This is the function of fining the vehicles who are above the speed limit of the road
{
  int potentiometerValue1 = analogRead(A6);
  int speedcalcu1 = potentiometerValue1 / 2;
  analogWrite(SF1, speedcalcu1);

  
  int potentiometerValue2 = analogRead(A7);
  int speedcalcu2 = potentiometerValue2 / 2;
  analogWrite(SF2, speedcalcu2);

  
  int potentiometerValue3 = analogRead(A8);
  int speedcalcu3 = potentiometerValue3 / 2;
  analogWrite(SF3, speedcalcu3);

  
  int potentiometerValue4 = analogRead(A9);
  int speedcalcu4 = potentiometerValue4 / 2;
  analogWrite(SF4, speedcalcu4);
}

void crossfine()// This is the function of fining the vehicles who are blocking the zebra crossing on the road
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
