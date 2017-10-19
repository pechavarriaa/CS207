/* 
 Pablo Echavarria
 200385648
 10/12/2017
 
 Light Sensor and LED'S
 
Constant Variables: ledPin(for write on led), lightPin(to read from light sensor)
Variables:  light_value(reads from arduino based on the light)
 */

//constant pins declarations
const int ledPin = 11;
const int lightPin = A0;

// variables 
int light_value;

void setup()
{
  pinMode(ledPin, OUTPUT);//set pin to output
  Serial.begin(9600);//initialize serial Port
}



void loop()
{
  //read voltage from the potentiometer
  light_value = analogRead(lightPin);

  //print to serial port to see the values
    Serial.println( light_value);
   
 //conditions to check how dim the light will be
    if(light_value < 200)
    analogWrite(ledPin, 255);
 
    else if( light_value < 500)
    analogWrite(ledPin, 125);
 
    else
    analogWrite(ledPin,0);
}
