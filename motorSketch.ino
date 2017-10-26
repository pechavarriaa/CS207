/* 
Pablo Echavarria
200385648

Constants
motorPin -> write voltages
tmpPin -> read temperatures

Sequence
while reading the temperature of the sensor
we check that if the temperature is higher than 27 degrees we turn on the fan
else we dont

 */

// constants
const int motorPin = 9;
const int tmpPin = A1;
// prototypes for user defined functions
void motorOnThenOff();
void motorTwoSpeed();

void setup()
{
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  int reads = analogRead(tmpPin);
  float tmpA;
  Serial.print("Celcius: ");
  Serial.print(tmp(reads));
tmpA=tmp(reads);

  Serial.print(" / Fahrenheit: ");
  Serial.println(far(reads));

  if(tmpA > 27)
  motorOn();
  else
  motorOff();
}

/*
 * motorOnThenOff() - turns motor on then off
 * Notice we use digital writes, 
 * just like with LEDs.
 */
void motorOn()
{

  digitalWrite(motorPin, HIGH); // turns the motor On
}

void motorOff()
{
  digitalWrite(motorPin, LOW); // turns the motor On
}
/*
 * motorTwoSpeed() - turns motor on then off but uses speed values as well
 * Notice we use analog writes to set motor speeds,
 * just like with LED brightness.
 */
void motorTwoSpeed()
{
  const int onSpeed = 200; // a number between 0 (stopped) and 255 (full speed)
  const int onTime = 1000; //the number of milliseconds for the motor to turn on for

  const int offSpeed = 27; // a number between 0 (stopped) and 255 (full speed)
  const int offTime = 2500; //the number of milliseconds for the motor to turn off for

  analogWrite(motorPin, onSpeed); // turns the motor 
  delay(onTime); // waits for onTime milliseconds
  analogWrite(motorPin, offSpeed); // turns the motor Off
  delay(offTime); // waits for offTime milliseconds
}
float tmp(int reads)
{
  float temp= ((float)reads/1023.0) * 5;
  return (temp-0.5)*100.0;
}
float far(int reads)
{
  float temp= ((float)reads/1023.0) * 5;
  return ((temp-0.5)*100.0)*9/5 + 32;
}


