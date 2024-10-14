/*
  Toggle when touched

  Turns on an LED when touch pin 1 is touched, and turn off when it's touched again
  Connect + of the LED through a 220 Ohm resistor to GPIO 0
  Connect - of the LED to GND
  Connect a jumper wire to GPIO 1 (touch pin 1)

  created 13 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  https://v0ss3n.github.io/projects/education/wearables 
*/

int LED_pin = 0;         // Pin the LED is attached to
int touch_pin = 1;       // Pin that we're going to touch
int touchState = 0;      // current state of the touch pin
int lastTouchState = 0;  // previous state of the touch pin

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED_pin as an output
  pinMode(LED_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  touchState = touchRead(touch_pin);

  // compare the buttonState to its previous state
  if (touchState != lastTouchState) {
    // if the state has changed, do something:
    // if the current state is HIGH then the button went from off to on:
    if (touchState == HIGH) {
      digitalWrite(LED_pin, HIGH);  // turn the LED on if touch pin 1 is touched

      // if the current state is LOW then the button went from on to off:
    } else {
      digitalWrite(LED_pin, LOW);  // turn the LED off if touch pin 1 is not touched anymore
    }
    // Delay a little bit to avoid bouncing (false triggers)
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastTouchState = touchState;
}
