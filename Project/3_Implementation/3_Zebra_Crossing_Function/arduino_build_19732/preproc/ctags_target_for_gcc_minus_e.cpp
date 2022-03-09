# 1 "C:\\Users\\Computer\\Desktop\\Zebra_Crossing_Function\\Zebra_Crossing_Function.ino"
# 2 "C:\\Users\\Computer\\Desktop\\Zebra_Crossing_Function\\Zebra_Crossing_Function.ino" 2
//Lane 1 Macros




//Lane 2 Macros




//Lane 3 Macros




//Lane 4 Macros




LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);

float time1=0,time2=0,time3=0,time4=0;
float distance1=0,distance2=0,distance3=0,distance4=0;

void setup()
{
  //Lane 1 initializaions
  pinMode(46,0x1);
  pinMode(48,0x0);
  pinMode(24,0x1);
  LCD.begin(16, 2);
  LCD.setCursor (0,0);
  LCD.print("Vehicle");
  LCD.setCursor (0,1);
  LCD.print("Distance");
  delay(2000);
  LCD.clear();

  //Lane 2 initializaions
  pinMode(50,0x1);
  pinMode(52,0x0);
  pinMode(28,0x1);

  //Lane 3 initializaions
  pinMode(31,0x1);
  pinMode(33,0x0);
  pinMode(32,0x1);

  //Lane 4 initializaions
  pinMode(35,0x1);
  pinMode(37,0x0);
  pinMode(36,0x1);

}

void loop()
{
  //Lane 1 ultra sonic calculations
  digitalWrite(46,0x0);
  delayMicroseconds(2);
  digitalWrite(46,0x1);
  delayMicroseconds(10);
  digitalWrite(46,0x0);
  delayMicroseconds(2);
  time1=pulseIn(48,0x1);
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
  digitalWrite(50,0x0);
  delayMicroseconds(2);
  digitalWrite(50,0x1);
  delayMicroseconds(10);
  digitalWrite(50,0x0);
  delayMicroseconds(2);
  time2=pulseIn(52,0x1);
  distance2=time2*340/20000;

  //Lane 3 ultra sonic calculations
  digitalWrite(31,0x0);
  delayMicroseconds(2);
  digitalWrite(31,0x1);
  delayMicroseconds(10);
  digitalWrite(31,0x0);
  delayMicroseconds(2);
  time3=pulseIn(33,0x1);
  distance3=time3*340/20000;

  //Lane 4 ultra sonic calculations
  digitalWrite(35,0x0);
  delayMicroseconds(2);
  digitalWrite(35,0x1);
  delayMicroseconds(10);
  digitalWrite(35,0x0);
  delayMicroseconds(2);
  time4=pulseIn(37,0x1);
  distance4=time4*340/20000;

  //Lane 1 Distance Calculations
  if(distance1<300)
  {
    digitalWrite(24,0x1);
    LCD.setCursor (0,0);
    LCD.print("Vehicle OZC");// Vehicle on Zebra crossing
    LCD.setCursor (0,1);
    LCD.print("FINE!!!");
    delay(3000);
    digitalWrite(24,0x1);
    delay(1000);
    LCD.clear();
  }
  else
  {
    digitalWrite(24,0x0);
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
    digitalWrite(28,0x1);
  }

  else
  {
    digitalWrite(28,0x0);
  }

  //Lane 3 Distance Calculations
  if(distance3<300)
  {
    digitalWrite(32,0x1);
  }

  else
  {
    digitalWrite(32,0x0);
  }

  //Lane 4 Distance Calculations
  if(distance4<300)
  {
    digitalWrite(36,0x1);
  }

  else
  {
    digitalWrite(36,0x0);
  }
}
