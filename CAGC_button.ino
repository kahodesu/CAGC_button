/*
based on button example 
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 9;     // the number of the pushbutton pin
const int ledPin =  7;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
//int lastButtonState = 0;   //FOR DEBOUNCING

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);   
 // Keyboard.begin(); // FOR KEYBOARD STROKE
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW:                     
  if (buttonState == LOW) {     
  //if (buttonState == LOW && lastButtonState == HIGH) {  //FOR DEBOUNCING 
    // turn LED on: 
   //  Keyboard.press(' '); //FOR KEYBOARD STROKE
    digitalWrite(ledPin, HIGH);  
  } 
  else {    
    // turn LED off:
   // Keyboard.release(' ');//FOR KEYBOARD STROKE
    digitalWrite(ledPin, LOW); 
  }
  //  lastButtonState = buttonState; ///FOR DEBOUNCING
}                                                                                                                                                                                                                                                                                                                                                      
