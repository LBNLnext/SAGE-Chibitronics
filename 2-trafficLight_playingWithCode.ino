/*===============
* S A G E
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 2: Playing with Code
* 
* ==========================
* This script will cause 3 of the pins to execute a flash pattern
* Fill this script in with your group.
*/


//----------------------
// Initialize variables
//----------------------
// With the chibi-clip clipped to your design
// which pins line up with each color?
int redLED = ;   // initialize red LED as pin ?        
int amberLED = ; // initialize amber LED as pin ?        
int greenLED = ; // initialize green LED as pin ?        


//----------------------
// Setup pins on chip
//----------------------
// Set the amberLED and greenLED to be outputs too
void setup() {
  outputMode(redLED);    // set LED pin as output
}

//----------------------
// L O O P
//----------------------
// NB: Everything in the loop is repeated
// Exercise a) Take a look at your blink code below. What needs to be changed to make the red LED blink? Try it!
// Exercise b) Add some code to make amber and green LEDs blink too. Try it! 
void loop() {

  on(5);
  pause(1000);
  off(5);
  pause(1000);
  
}
