//----------------INITIALIZATIONS--------------------
// Servo motor
#include <Servo.h> 
Servo servo1;
#define servoPin1 38
Servo servo2;
#define servoPin2 40
Servo servo3;
#define servoPin3 42
Servo servo4;
#define servoPin4 44

//Signal lights
int R1 = 2;
int Y1 = 3;
int G1 = 4;

int R2 = 5;
int Y2 = 6;
int G2 = 7;

int R3 = 8;
int Y3 = 9;
int G3 = 10;

int R4 = 11;
int Y4 = 12;
int G4 = 13;


//----------------SETUP--------------------

void setup()

{
   // Servo Motors
  servo1.attach(servoPin1);
  servo2.attach(servoPin2); 
  servo3.attach(servoPin3); 
  servo4.attach(servoPin4);

  // Traffic lights
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

}


//-------------------LOOP------------------

void loop()
{
  // All the traffic is halted so that all the pedestrains can pass 
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(44, HIGH);
  
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
