/* 
 Playing with pots.
 Written 23 Aug 2011 by Alex Clarke
 */

//constants for this sketch
const int ledPin = 11;
const int potPin = A0;

// variables for this sketch
int pot_value;
int frequency;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  //read voltage from the potentiometer
  pot_value = analogRead(potPin);


    Serial.println(pot_value );
   
    if(pot_value < 200)
    analogWrite(ledPin, 255);
    else if(pot_value < 500)
    analogWrite(ledPin, 125);
    else
    analogWrite(ledPin,0);
}
