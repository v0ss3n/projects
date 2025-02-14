/*
  Touch pins to MIDI notes

  Plays a MIDI note when a touch pin is touched and modulates it based on the capacitance of that pin. 

  Based on which keyboard you select in Garageband you may need to adjust notes. CC messages probably don't do anything for Drums
  
  to figure out what the touch value range is by touching/squeezing/stretching and releasing 
  the touch pin and reading the values in the serial monitor. Change 
  the threshold accordingly.
  
  Connect a touch sensor to pin T1, T2, T3, T4, T5, T6, T7, T8
  Connect a variable sensor to pin A10

  made 2 Feb 2025
  by Michelle Vossen

  This example code is licensed under CC BY-NC-SA 4.0. See https://creativecommons.org/licenses/by-nc-sa/4.0/ for more information. 

  https://v0ss3n.github.io/wearables
*/

#include <BLEMIDI_Transport.h>       //BLE MIDI Transport library
#include <hardware/BLEMIDI_ESP32.h>  //BLE ESP32 library
#include "driver/touch_sensor.h"

BLEMIDI_CREATE_INSTANCE("MySynth", MIDI);  //make instance of BLEMIDI. Give this a recognizable name! Like your name? Alter ego?

// constants and variables
int midiNote;

// pins
int analog_pin = A10;  // Pin the variable sensor is attached to

void setup() {
  Serial.begin(115200);
  MIDI.begin();  //start MIDI
}

void loop() {
  // Read analog sensor and map to MIDI CC 7 (volume)
  int analogValue = analogRead(analog_pin);
  Serial.println(analogValue);

  if (analogValue > 1000) {
    int midiNote = map(analogValue, 1000, 4095, 0, 127);
    MIDI.sendNoteOn(midiNote, 127, 1);
    // MIDI.sendControlChange(7, midiVolume, 1);
    // MIDI.sendControlChange(1, midiVolume, 1);  // Modulate active note; not volume actually

  } else {
    MIDI.sendNoteOff(midiNote, 127, 1);
  }

  delay(20);
}
