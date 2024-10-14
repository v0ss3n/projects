/*
  AnalogReadSerial with ESP32S3

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).

  Connect one leg of the LDR to pin A0, and through a 10k Ohm resistor to +3.3V (this way, 
  we're making a voltage divider). Depending on the LDR value range you may need to increase 
  or decrease the resistor value.
  Connect the other leg of the LDR to ground
  
  Other options for this code:
  - Attach the center pin of a potentiometer to pin A0, and the outside pins to +3.3V and ground.

  This example code is in the public domain.
  modified 13 Oct 2024
  by Michelle Vossen

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

int sensor_pin = A0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(sensor_pin);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
