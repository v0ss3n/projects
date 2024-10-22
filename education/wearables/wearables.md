# Wearables
You can already make electronic wearables without a microcontroller. For example, you can use a coin cell battery (and optional coin cell battery holder with on/off switch) and an LED or LED filament and make something that emits light. You can even make it interactive by introducing an LDR (light dependent resistor) to the mix. But once you start using a microcontroller and programming, the sky is the limit!

------------------------------------

## Workshop planning
**Workshop day 1 - 13:00-17:00**

Workshop day 1 | 13:00-17:00
--- | ---
13:00-13:15 | Walk in, welcome
13:15-13:45 | Introduction & presentation (examples of possible inputs/outputs, wearable fabrication techniques, interactions)
13:45-14:15 | Ideation, brainstorming, sketching
14:15-15:00 | Electronics & Arduino programming crash course focusing on your wishes! If you know electronics/programming already: get started!
15:00-15:15 | Break
15:15-16:45 | Prototyping circuits and (parts of) the wearable work of art
16:45-17:00 | Show & tell, clean up

Workshop day 2 | 13:00-17:00
--- | ---
13:00-13:15 | Walk in, welcome, what do you need to get started?
13:15-15:00 | Working on bringing the wearable art to life: bringing electronics & shapes together, making it wearable, integrating the circuit
15:00-15:15 | Break
15:15-16:30 | Finalizing prototypes: testing, troubleshooting, finishing touches 
16:30-17:00 | Wearable art show! Documenting results & reflecting on the process



Learning goal | How
--- | ---
Designing wearable things in 3D | Prototyping with various available materials and 3D techniques
Making electronics wearable | Integrating electronic circuits, using portable power options
Programming basics in Arduino IDE | Arduino IDE crash course - walkthrough for beginners
Basics of electronics | 'Sketching in hardware': prototyping electronics and learning by doing, trying out different inputs/outputs or deep diving into one


End of day 1 goals: 
- a clear idea for a wearable
- parts of the wearable without electronics done
- working programmed electronics (doesn't have to be wireless, soldered or final yet, just a first working iteration)  


**Workshop day 2 - 13:00-17:00**
End of day 2 goals:
- Making electronics wearable (starting together with this)
- 

Starting with going around what everyone has worked on

End with show

------------------------------------

## Developing your wearable art concept 
### How to make things wearable?

0. What's your inspiration/reference? What's the concept, what do you want to say with your wearable piece of art? 

1. Pick your **body part** - are you making something for on your head? Around your arm? On your hand?
2. Pick your **input/output** - is it moving, emitting light or making sound? Is there an interaction: does it react to sound or dimming of light? Pick your electronics based on that.
    - Prototype your electronics on a breadboard
3. Pick your **materials** - what is it made of? Is it hard or soft? How do you attach it to the body? Prototype in 3D!
    - Make something from scratch, with patterns, elastic, straps
    - Build on something existing - i.e. on a glove or head band
        

### Making electronic circuits wearable

-  Hiding in plain sight, making the circuit part of the 

----

## Hardware & software

### What you need

System:
- Seeed Studio XIAO ESP32S3 development board
- Grove Shield for XIAO with battery management chip
- 3.7V Lithium battery
- USB-C cable to USB-C or USB-A (depending on the ports on your computer)

Output (options):
Motion:
- Micro servo motor
- Vibration motor

Light:
- LEDs
- LED filament 
- Neopixels

Sound:
- 8 Ohm speaker

Input:
- LDR
- Potentiometer
- Sound sensor
- Proximity sensor
- Self made sensor, with something like Velostat or a e-textile crafted sensor

-------

## Setting up the Arduino IDE
In these examples we're using a [Seeed Studio XIAO ESP32S3](https://wiki.seeedstudio.com/xiao_esp32s3_getting_started/). Their wiki is a great place to get started and acquainted with all of the possibilities this tiny development board has to offer. 

![](https://files.seeedstudio.com/wiki/SeeedStudio-XIAO-ESP32S3/img/2.jpg)

For a quick start, follow these steps in the Arduino IDE (assuming you have it installed already; if not, download the latest stable version and launch it):

1. Navigate to ```File > Preferences```, and paste this URL in the 'Additional Boards Manager URLs': <https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
2. Now, navigate to ```Tools > Board > Boards Manager...```, type the keyword "esp32" in the search box, select 2.0.17 (the latest version, 3.x.x, are not working with the ESP32Servo library) and install it.
3. Plug in your board and select the board and port from the dropdown menu in the top left of the interface. Click on 'Select other board and port' and look for the XIAO_ESP32S3. 

![](arduino-ide.board.png)

That should be it! Now you can start uploading the example code or write your own. One thing to keep in mind with ESP32s is that sometimes they're in the wrong mode for programming. You can get back to boot mode by unplugging the board, then pressing and holding down the boot button on the board, then plugging it back in. Now it should work again :-)

## Basic setup
To prototype wearables, we're going to use the Grove Shield for XIAO, which makes trying things out very easy. You can even charge your lithium battery with it, so you don't need a separate charger for it. It's plug and play and you can snap off the smaller part of the base if you don't need it. You can always leave out the shield if it's too bulky for your final wearable once you know how you want to wire everything. 

![](https://files.seeedstudio.com/wiki/Grove-Shield-for-Seeeduino-XIAO/img/pinout.png)

To start out, we'll use the shield as a prototyping board. You can plug in female jumper wires into the sockets to connect the data pins to your inputs and outputs, you can solder wires to the GPIO holes or you can solder sockets into the GPIO holes to plug in jumper wires for modularity.

#### Example Arduino code
Example code can be found in the ```Arduino (code)``` folder. You can find the following examples:

Programmed input:
- Blinking an LED (output, digitalWrite)
- Fading an LED (analogWrite, PWM)

Digital input:

- TO DO (using internal pullup resistor)

Analog input:
- Reading LDR sensor data (serial monitor)
- Using LDR sensor data to fade LED (mapping input values to output values)
- Using LDR sensor data to light up Neopixels (libraries)
- Sweeping a servo

Touch input:
- Turning on an LED with touch (touchRead, using input to do something with output, while statement)
- Toggling an LED with touch (if/else statement)
- Fading an LED with touch (touchRead, mapping capacitance ranges)
- Mapping a capacitance range to tones on a speaker (tone)
- Using touch pins to make a keyboard (multiple pins, arrays)

Nice to haves:

If you've made the circuit with an LDR, it's only one step further to connect your own, self made sensor! Take out the LDR, and stick one jumper wire to alligator clip in each 
- How to make a voltage divider with e-textiles
- Wireless communication (but too hard to start with)

## Resources
- <https://docs.espressif.com/projects/arduino-esp32/en/latest/api/touch.html>

----

## Tools, techniques, machines & materials
Prototyping materials and techniques
- air drying modeling clay: clay modeling techniques & tools
- metal wire: jewelry making techniques, soldering 
- fabric & thread: sewing, textile craft techniques
- conductive fabric: soldering 

Creating three dimensional shapes with
- metal wire
- color filter sheets
- sewing machine zigzag

- Fabric
- Textile hardener

- Cardboard
- Hot glue

- Paper
- Origami & other folding techniques

- Paper
- Papier-mâché

- Metal wire frame
- Wrapping stretchy fabric around it



Step - drawing out system of input and output before programming



- Embedding electronic components in clay
- Sewing LEDs onto fabric 
- Glueing 
