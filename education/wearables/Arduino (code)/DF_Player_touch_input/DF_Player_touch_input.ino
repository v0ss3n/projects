#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

const int touchThreshold = 80000;                               // Threshold for the touch sensors
const int touchPins[] = { T1, T2, T3, T4, T5, T6, T7, T8, T9 };  // Array with all of the used touch pins
const int numTouchPins = sizeof(touchPins) / sizeof(touchPins[0]);



bool isPlaying[numTouchPins] = { false };  // Array to track play/pause state for each touch pin

// #if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))
// #include <SoftwareSerial.h>
// SoftwareSerial softSerial(/*rx =*/4, /*tx =*/5);
// #define FPSerial softSerial
// #else
#define FPSerial Serial1
// #endif

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup() {

  Serial.begin(115200);

  FPSerial.begin(9600, SERIAL_8N1, /*rx =*/44, /*tx =*/43);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));

  if (!myDFPlayer.begin(FPSerial, /*isACK = */ true, /*doReset = */ true)) {  //Use serial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    // while (true)
    //   ;  // Stop here
  }
  Serial.println(F("DFPlayer Mini online."));

  myDFPlayer.setTimeOut(2500);  //Set serial communication timeout to 500ms
  myDFPlayer.volume(20);        //Set volume value (0~30).
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
}

void loop() {


  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read());  // Print the detail message from DFPlayer to handle different errors and states.
  }

  for (int i = 0; i < numTouchPins; i++) {
    int touchValue = touchRead(touchPins[i]);
    Serial.println(touchValue);
    if (touchValue > touchThreshold) {
      if (!isPlaying[i]) {
        Serial.println("Should play song");
        myDFPlayer.play(i + 1);  // Play track corresponding to touch pin (track numbers start from 1)
        isPlaying[i] = true;
      }
    } else {
      if (isPlaying[i]) {
        myDFPlayer.pause();  // Pause the track
        isPlaying[i] = false;
      }
    }
  }





  // Small delay to avoid excessive serial output
  delay(10);
}

void printDetail(uint8_t type, int value) {
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      // Loop the track that just finished playing
      myDFPlayer.play(value);
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
}