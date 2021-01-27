  /**
/* 
Emote Masks
Clinton Akomea-Agyin
Bodycentric Technologies
OCAD University 
Created on 25/01/21
Based on:
Blink, Scott Fitzgerald, Arturo Guadalupi, Colby Newman, http://www.arduino.cc/en/Tutorial/Blink
**/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
