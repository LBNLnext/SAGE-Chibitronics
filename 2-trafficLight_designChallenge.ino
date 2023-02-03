/*===============
* S A G E
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 2: Traffic light
* 
* ==========================
* In this script you will use your pseudo code and state machine to build a traffic light that cycles between the 3 states.
* You can copy any code snippets used in the previous scripts. 
*/


//----------------------
// Initialize variables
//----------------------
int redLED = 0;   // initialize red LED as pin 0        
int amberLED = 2; // initialize amber LED as pin 2        
int greenLED = 4; // initialize green LED as pin 4        


//----------------------
// Setup pins on chip
//----------------------
void setup() {
  outputMode(redLED);      // set red LED pin as output
  outputMode(amberLED);    // set amber LED pin as output
  outputMode(greenLED);    // set green LED pin as output
}

//----------------------
// L O O P
//----------------------
// NB: Everything in the loop is repeated
void loop() {

//----------------------
// STOP State
// Which LED(s) are on? Which LED(s) are off?
// How long are you in the STOP state for?
//----------------------

  on(redLED);
  on(amberLED);
  on(greenLED);
  pause(1000);

//----------------------
// GO State
// Which LED(s) are on? Which LED(s) are off?
// How long are you in the GO state for?
//----------------------

  off(redLED);
  off(amberLED);
  off(greenLED);
  pause(1000);

//----------------------
// SLOW / WARNING STOP SOON State
// Which LED(s) are on? Which LED(s) are off?
// How long are you in the SLOW state for?
//----------------------

  on(redLED);
  on(amberLED);
  on(greenLED);
  pause(1000);

}
