/*
  Map LDR input to servo motor output

  Reads an analog input on pin A0, and maps it to servo motor angle (fixed angle versions) or speed (continuous rotation versions). 
  Also prints the result to the Serial Monitor.

  Ideally, we're powering a micro servo with a stand-alone power supply, but
  with a micro servo and not too much weight, we can hopefully get away with powering it
  like this :-)
  Connect the orange wire of the servo motor to pin A1
  Connect the red wire of the servo motor to +3.3V
  Connect the black wire of the servo motor to GND

  Connect one leg of the LDR to pin A1, and through a 10k Ohm resistor to ground (this way, 
  we're making a voltage divider). Depending on the LDR value range you may need to increase 
  or decrease the resistor value.
  Connect the other leg of the LDR to +3.3V
  
  Other options for this code:
  - Attach the center pin of a potentiometer to pin A0, and the outside pins to +3.3V and ground.

  This example code is in the public domain.
  20 Oct 2024
  by Michelle Vossen

  https://v0ss3n.github.io/projects/education/wearables 
*/

// Include the servo library. If you're using a microcontroller with an AVR, SAM, SAMD, NRF52 or STM32F4 processor, use this library:
// #include <Servo.h>
// Use this one for ESP32 processors:
#include <ESP32Servo.h>


// Pin Definitions
const int servo_pin = A1;  // Servo connected to A1
const int sensor_pin = A0;    // LDR connected to A0

// Variables
Servo myServo;       // Create a Servo object
int ldrValue = 0;    // Variable to store LDR value
int servoAngle = 0;  // Variable to store servo angle

void setup() {
  // Attach servo to the specified pin
  myServo.attach(servo_pin);

  // Initialize Serial Monitor for debugging
  Serial.begin(115200);
}

void loop() {
  // Read LDR value (0 to 4095 on RP2040 Xiao's 12-bit ADC)
  ldrValue = analogRead(sensor_pin);

  // Scale the LDR value down (because the values range from 650 to 1000 in my case). Change according to the values that you need.
  ldrValue = constrain(ldrValue, 650, 1000);  // Constrain to the expected range
  ldrValue = ldrValue / 10; // very rough filter, to remove some jitter

  // Map LDR value to a range of 180 degrees for the servo (servoAngle: 0 to 180)
  // Since I divided the values by 10, the min/max are divided by 10 too. This is not very elegant code :-)
  servoAngle = map(ldrValue, 65, 100, 180, 0);
  servoAngle = constrain(servoAngle, 0, 180);  // Ensure the angle stays between 0 and 180

  // Set the servo to the mapped angle
  myServo.write(servoAngle);

  // Output values to Serial Monitor for debugging
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | Servo Angle: ");
  Serial.println(servoAngle);

  // Add a small delay to avoid overwhelming the serial monitor
  delay(100);
}
