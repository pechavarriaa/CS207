// Sweep
// by BARRAGAN  
// This example code is in the public domain.


#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
int del = 0;
const int potRead=A0; 

void setup() 
{ 
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 

  int cpos;
  //i is (sweep)
  int i =0;
  pos = 90;
  myservo.write(pos);
  while(i<=90)
  {
      if(i==0)
      cpos= 90;
   for(int j =cpos;j<=pos+i;j++)
    {

        float poss = ( analogRead(potRead)/1023.0)*50.0 + 3.0;
        del = (int)poss;
     
        myservo.write(j);
        delay(del);
        Serial.println(del);
    }
    for(int j = pos+i;j>=pos-i;j--)
    {
         float poss = ( analogRead(potRead)/1023.0)*50.0 +3.0;
        del = (int)poss;
       myservo.write(j);
        delay(del);
             Serial.println(del);
    }
    cpos= pos-i;
    i+=10;
  }
  for(int j =cpos;j<=90;j++)
  {
         myservo.write(j);
        delay(del);
  }
}
