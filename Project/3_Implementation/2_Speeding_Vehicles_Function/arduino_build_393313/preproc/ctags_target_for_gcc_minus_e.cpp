# 1 "C:\\Users\\Computer\\Desktop\\Speeding_Vehicles_Functions\\Speeding_Vehicles_Functions.ino"
# 13 "C:\\Users\\Computer\\Desktop\\Speeding_Vehicles_Functions\\Speeding_Vehicles_Functions.ino"
void setup()
{
  pinMode(22, 0x1);
  pinMode(26, 0x1);
  pinMode(30, 0x1);
  pinMode(34, 0x1);
}

void loop()
{
  int potentiometerValue1 = analogRead(A6);
  int speedcalcu1 = potentiometerValue1 / 2;
  analogWrite(22, speedcalcu1);


  int potentiometerValue2 = analogRead(A7);
  int speedcalcu2 = potentiometerValue2 / 2;
  analogWrite(26, speedcalcu2);


  int potentiometerValue3 = analogRead(A8);
  int speedcalcu3 = potentiometerValue3 / 2;
  analogWrite(30, speedcalcu3);


  int potentiometerValue4 = analogRead(A9);
  int speedcalcu4 = potentiometerValue4 / 2;
  analogWrite(34, speedcalcu4);
}
