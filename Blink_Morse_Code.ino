
/*
 
  Pablo Echavarria 200385648
  The program displays morse code, just change string to play with strings
  28/09/2017
  
*/
 

int uTime=20;
const int pinled = 9;
char str[] = "please give me full marks alex thanks for the lab notes";
const char * arr[] ={"13","3111","3131","311","1","1131","331",
                      "1111","11","1333","313","1311","33","31",
                      "333","1331","3313","131","111","3","113",
                      "1113","133","3113","3133","3311"};


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinled, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 for(int i =0;i<strlen(str);i++)
 {
    if 
   int letterNum = int(str[i]-'a');
   
   for(int j =0;j<strlen(arr[letterNum]);j++)
   {
      if(arr[letterNum][j]=='1')
      {
         digitalWrite(pinled, HIGH);   
         delay(uTime);                     
         digitalWrite(pinled, LOW);
         if(j+1<strlen(arr[letterNum]))
         delay(uTime);
         
      }
      else
      {
         digitalWrite(pinled, HIGH);   
         delay(3*uTime);                     
         digitalWrite(pinled, LOW);    
         if(j+1<strlen(arr[letterNum]))
         delay(uTime);
      }
   }     
   if(i+1<strlen(str) && str[i+1]==' '){
      delay(7*uTime);
      i++;
   }
    else
    delay(3*uTime);
             
 }
  delay(7*uTime);
}
