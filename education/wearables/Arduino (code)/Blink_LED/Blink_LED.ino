/*
  Blink

  Turns on an LED for one second, then off for one second, repeatedly.
  Connect + of the LED through a 68 Ohm resistor to pin A0
  Connect - of the LED to GND

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 13 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  https://v0ss3n.github.io/projects/education/wearables 
*/

int LED_pin = A0; // Pin the LED is attached to

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_pin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
