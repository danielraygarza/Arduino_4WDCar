//****************************************************************************
/*
 keyestudio 4wd BT Car
 lesson 1.1
 Blink
 http://www.keyestudio.com
*/
void setup()
{ 
  pinMode(9, OUTPUT);// initialize digital pin 9 as an output.
}

void loop() // the loop function runs over and over again forever
{  //for loop blinks 5 times then exits and ends the program
  for(int i=0;i < 5;i++){
    digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000); // wait for a second
    digitalWrite(9, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
  }
  exit(0);
}
//****************************************************************************
