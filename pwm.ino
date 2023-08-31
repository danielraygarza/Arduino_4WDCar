//*****************************************************************
/*
 keyestudio 4wd BT Car
 lesson 2.1
 pwm
 http://www.keyestudio.com
*/
int ledPin = 9; // Define the LED pin at D9
int value = 1000;

void setup () {
  pinMode (ledPin, OUTPUT); // initialize ledpin as an output.
}
//PMW  = pulse width modulation
void loop () {
    for (int i = 0; i < value; i++) 
    {
      analogWrite (ledPin, i); // LED lights gradually light up
      delay (5); // delay 5ms
    }
    for (int i = value; i> 0; i--) 
    {
      analogWrite (ledPin, i); // LED gradually goes out
      delay (5); // delay 5ms
    }
}
//*****************************************************************
