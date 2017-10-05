
// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 4;     // the number of the pushbutton pin
const int buttonPin2 = 2;
const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 = 12;

// variables will change:
int buttonState1= 0;         // variable for reading the pushbutton status
int buttonState2= 0;
int light1 =0; 
int light2 =0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  light1 = digitalRead(ledPin1);
  light2 = digitalRead(ledPin2);
  
   if(buttonState1 == HIGH)
   {
     digitalWrite(ledPin1,HIGH);
     digitalWrite(ledPin2,LOW);
   }
   else if(buttonState2 == LOW)
   {
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
   }
      delay(200);

}
