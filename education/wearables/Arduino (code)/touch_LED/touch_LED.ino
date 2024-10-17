/*
  Blink when touched

  Turns on an LED when touch pin T2 is touched. You first need 
  to figure out what is the touch threshold by touching and releasing 
  the touch pin and reading the values in the serial monitor. Change 
  the threshold accordingly.
  
  Connect + of the LED through a 220 Ohm resistor to pin A0
  Connect - of the LED to GND
  Connect a jumper wire to T2

  made 13 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  https://v0ss3n.github.io/projects/education/wearables 
*/

int LED_pin = A0;    // Pin the LED is attached to
int touch_pin = T2;  // Pin that we're going to touch

// change with your threshold value
int threshold = 100000;
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

  if (touchValue > threshold) {
    // turn LED on
    digitalWrite(LED_pin, HIGH);
    Serial.println("LED on");
  } else {
    // turn LED off
    digitalWrite(LED_pin, LOW);
    Serial.println("LED off");
  }
  delay(50);

  // while (touch_pin == 1) {
  //   digitalWrite(LED_pin, HIGH);  // keep the LED on as long as touch pin 1 is touched (HIGH)
  // }

  // while (touch_pin == 0) {
  //   digitalWrite(LED_pin, LOW);  // keep the LED off as long as touch pin 1 is not touched (LOW)
  // }
}
