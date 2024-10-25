/*
  Fade LED with analogWrite

  Connect + of the LED through a 68 Ohm resistor to pin A0
  Connect - of the LED to GND

  example modified 13 Oct 2024
  by Michelle Vossen

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. PWM duty cycle values are between 0-255.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade

  https://v0ss3n.github.io/projects/education/wearables 

*/

int LED_pin = A0;  // Pin the LED is attached to

int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED_pin as an output
  pinMode(LED_pin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of the LED:
  analogWrite(LED_pin, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {  // if brightness is smaller or equal to 0 or if brightness is bigger or equal to 255
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
