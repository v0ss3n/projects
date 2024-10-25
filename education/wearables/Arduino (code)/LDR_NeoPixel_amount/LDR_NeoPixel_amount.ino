/*
  Map LDR input to neopixel output

  Reads an analog input on pin A1, and maps it to neopixels. 
  Also prints the result to the Serial Monitor.

  Connect the data wire of the neopixel strip through a 300-500 Ohm resistor to pin A0
  Connect the red wire of the neopixel strip to +3.3V (this is because when using battery power, there is no power on the 5V pin)
  Connect the black wire of the neopixel strip to GND

  Connect one leg of the LDR to pin A1. Also connect A1 through a 4.7k Ohm resistor to +3.3V (this way, 
  we're making a voltage divider). Depending on the LDR value range you may need to increase 
  or decrease the resistor value.
  Connect the other leg of the LDR to ground
  
  Other options for this code:
  - Attach the center pin of a potentiometer to pin A0, and the outside pins to +3.3V and ground.

  This example code is in the public domain.
  20 Oct 2024
  by Michelle Vossen

  https://v0ss3n.github.io/projects/education/wearables 
*/

#include <Adafruit_NeoPixel.h>

// Pin Definitions
const int sensor_pin = A2;      // LDR connected to A0
const int neopixel_pin = A10;      // NeoPixel strip connected to A1

// NeoPixel Setup
const int numPixels = 45;   // Number of NeoPixels on the strip. Change according to the amount of NeoPixels. Keep the power budget in mind, see https://learn.adafruit.com/adafruit-neopixel-uberguide/powering-neopixels
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numPixels, neopixel_pin, NEO_GRB + NEO_KHZ800);

int ldrValue;           // Variable to store LDR value

void setup() {
  // Initialize the NeoPixel strip
  strip.begin();
  strip.show();  // Initialize all pixels to 'off'

  // Initialize Serial Monitor for debugging
  Serial.begin(115200);
}
c:\Users\mvoss\Documents\wearables\KineticWearablesToolkit-master\KineticWearablesToolkit-master\servo linear adapter drive wheel.stl c:\Users\mvoss\Documents\wearables\KineticWearablesToolkit-master\KineticWearablesToolkit-master\servo linear adapter flex base pin.stl c:\Users\mvoss\Documents\wearables\KineticWearablesToolkit-master\KineticWearablesToolkit-master\servo linear adapter flex base.stl c:\Users\mvoss\Documents\wearables\KineticWearablesToolkit-master\KineticWearablesToolkit-master\Servo linear adapter base.stl
void loop() {
  // Read LDR value (range: 0 to 4095 on ESP32S3's 12-bit ADC)
  ldrValue = analogRead(sensor_pin);
  Serial.print("LDR Value before constraining and filtering: ");
  Serial.println(ldrValue);
  // Scale the LDR value down (because the values range from 650 to 1000 in my case). Change according to the values that you need.
  ldrValue = constrain(ldrValue, 300, 2000);  // Constrain to the expected range
  ldrValue = ldrValue / 10; // very rough filter, to remove some jitter

  int mappedLdr = map(ldrValue, 30, 200, 0, 100);  // Map to percentage (0-100)

  // Light up more NeoPixels based on the mapped LDR value (the closer, the more pixels)
  int numLitPixels = map(mappedLdr, 100, 0, 0, numPixels);  // Map LDR to the number of NeoPixels

  // Light up the corresponding number of NeoPixels
  for (int i = 0; i < numPixels; i++) {
    if (i < numLitPixels) {
      strip.setPixelColor(i, strip.Color(0, 0, 255));  // Set lit pixels to blue
    } else {
      strip.setPixelColor(i, strip.Color(0, 0, 0));    // Turn off the remaining pixels
    }
  }

  // Update the NeoPixel strip
  strip.show();

  // Output values to Serial Monitor for debugging
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | Lit Pixels: ");
  Serial.println(numLitPixels);

  // Add a small delay to avoid overwhelming the serial monitor and NeoPixel updates
  delay(100);
}
