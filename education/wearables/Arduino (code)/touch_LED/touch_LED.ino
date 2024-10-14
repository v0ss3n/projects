/*
  Blink when touched

  Turns on an LED when touch pin 1 is touched
  Connect + of the LED through a 220 Ohm resistor to GPIO 0
  Connect - of the LED to GND
  Connect a jumper wire to GPIO 1 (touch pin 1)

  made 13 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  https://v0ss3n.github.io/projects/education/wearables 
*/

int LED_pin = 0; // Pin the LED is attached to
int touch_pin = 1; // Pin that we're going to touch

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED_pin as an output
  pinMode(LED_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // if (touch_pin == 1) {
  //   digitalWrite(LED_pin, HIGH);  // turn the LED on if touch pin 1 is touched
  // } else {
  //   digitalWrite(LED_pin, LOW);  // turn the LED off if touch pin 1 is not touched anymore
  // }

  while (touch_pin == 1) {
    digitalWrite(LED_pin, HIGH);  // keep the LED on as long as touch pin 1 is touched (HIGH)
  }

  while (touch_pin == 0) {
    digitalWrite(LED_pin, LOW);  // keep the LED off as long as touch pin 1 is not touched (LOW)
  }

}
