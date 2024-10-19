/*
  Touch Range to PWM Range

  Maps capacitance on touch pin T2 to LED brightness. You first need 
  to figure out what the value range is by touching/squeezing/stretching and releasing 
  the touch pin and reading the values in the serial monitor. Change 
  the threshold accordingly.
  
  Connect + of the LED through a 220 Ohm resistor to pin A0
  Connect - of the LED to GND
  Connect a touch sensor to pin T2 (with an alligator clip for example)

  made 18 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://v0ss3n.github.io/projects/education/wearables 
*/

int LED_pin = A0;    // Pin the LED is attached to
int touch_pin = T2;  // Pin that we're going to touch
int brightness = 0;  // how bright the LED is

// variable for storing the touch pin value
int touchValue;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  // initialize LED_pin as an output
  pinMode(LED_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  touchValue = touchRead(touch_pin);
  Serial.println(touchValue);
  // the min and max values for the touchValue depend on the length of the cable, size of the sensor you 
  // attach to it, the environment, and the interaction you want to achieve. 
  // the min and max values for the LED range from 0-255
  brightness = constrain(touchValue, 50000, 90000);
  brightness = map(brightness, 50000, 90000, 0, 255);
  analogWrite(LED_pin, brightness);
  Serial.println(brightness);
  delay(50);
}
