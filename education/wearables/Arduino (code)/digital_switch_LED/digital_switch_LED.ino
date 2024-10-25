/*
  Input Pull-up Serial

  This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
  input on pin 2 and prints the results to the Serial Monitor, and turns on an LED when 
  the button is pressed.

  Connect + of the LED through a 68 Ohm resistor to pin A0
  Connect - of the LED to GND
  
  Connect a momentary switch to pin D1 and the other side to ground. Note that 
  there are four legs; the left two legs are connected and the right two legs are too.
  If you don't know which ones are connected, use a multimeter to measure continuity.

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  pull-up resistor is used to pull the pin to 3.3V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

  created 14 Mar 2012
  by Scott Fitzgerald
  modified 24 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial

  https://v0ss3n.github.io/projects/education/wearables 

*/

int LED_pin = A0; // Pin the LED is attached to
int button_pin = D1; // Pin the switch is attached to

void setup() {
// the setup function runs once when you press reset or power the board
  Serial.begin(115200);
  // configure the selected pin as an input and enable the internal pull-up resistor
  pinMode(button_pin, INPUT_PULLUP);
  // initialize LED_pin as an output
  pinMode(LED_pin, OUTPUT);
}

void loop() {
  // Read the pushbutton value with digitalRead and store it in a variable called sensorVal
  int sensorVal = digitalRead(button_pin);
  // Print out the value of the pushbutton
  Serial.println(sensorVal);

  // Keep in mind: the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on the LED when the
  // button's pressed, and off when it's not:
  if (sensorVal == HIGH) {
    digitalWrite(LED_pin, LOW);
  } else {
    digitalWrite(LED_pin, HIGH);
  }
}
