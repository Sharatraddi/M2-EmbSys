#define POTENTIOMETER_PIN A6
#define POTENTIOMETER_PIN A7
#define POTENTIOMETER_PIN A8
#define POTENTIOMETER_PIN A9

#define SF1 22
#define SF2 26
#define SF3 30
#define SF4 34



void setup()
{
  pinMode(SF1, OUTPUT);
  pinMode(SF2, OUTPUT);
  pinMode(SF3, OUTPUT);
  pinMode(SF4, OUTPUT);
}

void loop()
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
