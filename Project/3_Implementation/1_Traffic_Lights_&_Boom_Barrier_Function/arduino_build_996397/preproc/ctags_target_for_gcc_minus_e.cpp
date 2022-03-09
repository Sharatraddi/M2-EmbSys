# 1 "C:\\Users\\Computer\\Desktop\\traffic_lights___boom_barrier_control\\traffic_lights___boom_barrier_control.ino"
//----------------INITIALIZATIONS--------------------
// Servo motor
# 4 "C:\\Users\\Computer\\Desktop\\traffic_lights___boom_barrier_control\\traffic_lights___boom_barrier_control.ino" 2
Servo servo1;

Servo servo2;

Servo servo3;

Servo servo4;


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
  servo1.attach(38);
  servo2.attach(40);
  servo3.attach(42);
  servo4.attach(44);

  // Traffic lights
  pinMode(R1, 0x1);
  pinMode(Y1, 0x1);
  pinMode(G1, 0x1);

  pinMode(R2, 0x1);
  pinMode(Y2, 0x1);
  pinMode(G2, 0x1);

  pinMode(R3, 0x1);
  pinMode(Y3, 0x1);
  pinMode(G3, 0x1);

  pinMode(R4, 0x1);
  pinMode(Y4, 0x1);
  pinMode(G4, 0x1);

}


//-------------------LOOP------------------

void loop()
{
  // All the traffic is halted so that all the pedestrains can pass 
  digitalWrite(R1, 0x1);
  digitalWrite(R2, 0x1);
  digitalWrite(R3, 0x1);
  digitalWrite(44, 0x1);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(3000);

  digitalWrite(R1, 0x0);
  digitalWrite(R2, 0x0);
  digitalWrite(R3, 0x0);
  digitalWrite(R4, 0x0);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);

  digitalWrite(R1, 0x1);
  digitalWrite(R2, 0x1);
  digitalWrite(R3, 0x1);
  digitalWrite(R4, 0x1);

  //Lane 1 traffic lights & boom barrier control
  digitalWrite(Y1, 0x1);
  digitalWrite(R1, 0x0);
  digitalWrite(G1, 0x0);
  delay(1000);
  digitalWrite(Y1, 0x0);
  digitalWrite(R1, 0x0);
  digitalWrite(G1, 0x1);
  servo1.write(0);
  delay(3000);
  digitalWrite(Y1, 0x1);
  digitalWrite(R1, 0x0);
  digitalWrite(G1, 0x0);
  delay(1000);
  digitalWrite(Y1, 0x0);
  digitalWrite(R1, 0x1);
  digitalWrite(G1, 0x0);
  servo1.write(90);
  delay(1000);

  //Lane 2 traffic lights & boom barrier control
  digitalWrite(Y2, 0x1);
  digitalWrite(R2, 0x0);
  digitalWrite(G2, 0x0);
  delay(1000);
  digitalWrite(Y2, 0x0);
  digitalWrite(R2, 0x0);
  digitalWrite(G2, 0x1);
  servo2.write(0);
  delay(3000);
  digitalWrite(Y2, 0x1);
  digitalWrite(R2, 0x0);
  digitalWrite(G2, 0x0);
  delay(1000);
  digitalWrite(Y2, 0x0);
  digitalWrite(R2, 0x1);
  digitalWrite(G2, 0x0);
  servo2.write(90);
  delay(1000);

  //Lane 3 traffic lights & boom barrier control
  digitalWrite(Y3, 0x1);
  digitalWrite(R3, 0x0);
  digitalWrite(G3, 0x0);
  delay(1000);
  digitalWrite(Y3, 0x0);
  digitalWrite(R3, 0x0);
  digitalWrite(G3, 0x1);
  servo3.write(0);
  delay(3000);
  digitalWrite(Y3, 0x1);
  digitalWrite(R3, 0x0);
  digitalWrite(G3, 0x0);
  delay(1000);
  digitalWrite(Y3, 0x0);
  digitalWrite(R3, 0x1);
  digitalWrite(G3, 0x0);
  servo3.write(90);
  delay(1000);

  //Lane 4 traffic lights & boom barrier control
  digitalWrite(Y4, 0x1);
  digitalWrite(R4, 0x0);
  digitalWrite(G4, 0x0);
  delay(1000);
  digitalWrite(Y4, 0x0);
  digitalWrite(R4, 0x0);
  digitalWrite(G4, 0x1);
  servo4.write(0);
  delay(3000);
  digitalWrite(Y4, 0x1);
  digitalWrite(R4, 0x0);
  digitalWrite(G4, 0x0);
  delay(1000);
  digitalWrite(Y4, 0x0);
  digitalWrite(R4, 0x1);
  digitalWrite(G4, 0x0);
  servo4.write(90);
  delay(1000);
}
