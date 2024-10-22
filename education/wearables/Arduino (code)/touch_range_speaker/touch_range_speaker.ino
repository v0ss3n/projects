/*
  Touch Range to PWM Range

  Maps capacitance on touch pin T2 to an audible tone frequency. You first need 
  to figure out what the touch value range is by touching/squeezing/stretching and releasing 
  the touch pin and reading the values in the serial monitor. Change 
  the threshold accordingly.
  
  Connect + of the speaker to pin D0
  Connect - of the speaker to GND
  Connect a touch sensor to pin T2 (with an alligator clip for example)

  made 18 Oct 2024
  by Michelle Vossen

  This example code is in the public domain.

  https://v0ss3n.github.io/projects/education/wearables 
*/

int speaker_pin = D0;    // Pin the speaker is attached to
int touch_pin = T2;  // Pin that we're going to touch
int pitch;

// variable for storing the touch pin value and threshold. change threshold if needed
int touchValue;
int threshold = 75000; // threshold

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  // initialize speaker_pin as an output
  pinMode(speaker_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  touchValue = touchRead(touch_pin);
  Serial.println(touchValue);
  // constrain touchValue range for useful pitch generation
  touchValue = constrain(touchValue, 50000, 200000);
  pitch = map(touchValue, 50000, 200000, 31, 2000);  // set max pitch to 2000 to avoid errors with ledc timer

  Serial.println(pitch);

  // Play tone if touchValue exceeds threshold
  if (touchValue > threshold) {
    tone(speaker_pin, pitch);
  } else {
    noTone(speaker_pin);  // Stop tone when under threshold
  }

  delay(50);
}
