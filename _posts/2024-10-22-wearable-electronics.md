---
layout: post
title: "Developing your wearable art concept"
permalink: "/wearable-electronics/"
---

<div class="videowrapper"><video width="480" height="360" autoplay loop muted>
  <source src="{{ site.baseurl }}/assets\videos\wearable-necklace.mp4" type="video/mp4"></video>
</div>

## How to make things wearable?
There is a few ingredients to make a succesful wearable, and they all work together. There is not a fixed place to start - some people work better with a thought-through concept, others work better when they start making. 

- What's your **inspiration**? What's the concept, what do you want to say with your wearable piece of art? 
- Where and how do you wear it? Pick a **part of the body** - are you making something for on your head? Around your arm? On your hand? How can you make it wearable for that body part? 
    - This can change along the way! By trying out your wearable as you're making it on different parts of the body, it can go in different directions.
- Pick your **input/output** - is it moving, emitting light or making sound? Is there an interaction: does it react to sound or dimming of light? Pick your electronics based on that. You can try out different options and see what you like
    - Prototyping your electronics on a breadboard is the easiest
- Pick your **materials** - what is it made of? Is it hard or soft? How do you attach it to the body? Prototype in 3D!
    - Make something wearable from scratch - i.e. with patterns, elastic, straps, velcro, etc.
    - Build on something existing - i.e. on a glove or head band

There are various ways to make something wearable. You can use all kinds of clips, hairbands, gloves, velcro, straps... Below you can find some of the available options.

![]({{ site.baseurl }}/assets\images\IMG_8583.JPG)

## Tools, techniques, machines & materials
To make your actual wearable, you can use various techniques - from quick cardboard prototyping with glue to sewing & jewelry making techniques. Below are some examples of materials and techniques to create 2D and 3D shapes to give shape to your wearable!

Creating three dimensional shapes with
- Metal wire 
- Fabric, color filter sheets
- Sewing machine zigzag

Set the sewing machine to zigzag and carefully start sewing:

![]({{ site.baseurl }}/assets/images\IMG_8528.JPG)

- Metal wire 
- Bending with plyers (see also <https://www.wikihow.com/Bend-Wire>)

- Fabric
- Textile hardener
- Hot air gun (for quick drying)

- Cardboard
- Hot glue

- Paper
- Origami & other folding techniques

- Paper
- Papier-mâché

- Metal wire frame
- Wrapping stretchy fabric around it

- Fibers
- Felting needles

- Embedding electronic components in clay
- Sewing LEDs onto fabric 
- Glueing 

Other prototyping materials and techniques to explore:
- air drying modeling clay: clay modeling techniques & tools
- metal wire: jewelry making techniques, soldering 
- fabric & thread: sewing, textile craft techniques
- conductive fabric: soldering 

<!-- Step 1 - drawing out system of input and output before programming -->

## Integrating electronics into wearables
How do you go from a messy breadboard and wearable elements to electronics that you can wear? If you make something big, you often have some space to hide your electronics under something. If it's small, then you need other solutions. It's not always about how to make your circuit invisible, but rather how you can place your microcontroller and battery in relation to your input and output, in a way that looks natural or intentional. If you can't hide it, you can always make it part of the look! For example, if you want to make an earring with a motor, why not make another earring in which you can put your battery and microcontroller? Or you could have a microcontroller necklace that you can wear under your shirt, or on top if you make it look nice! If you make something to wear on your head, maybe you can hide your microcontroller and battery under a ponytail, or you can place the microcontroller and battery on a clip that you pin to the back inside of your shirt. 

And don't forget: we're prototyping, so it's also okay if it's not immediately the most efficient, optimal, final form of your wearable dreams. You have to start somewhere!

Your wearable art has 3 ingredients:
1. Battery powered electronics
2. Something that makes it wearable
3. An interesting input/output/interaction coming to life with electronics and your creations

Here you can see these elements laid out: there is a microcontroller powered with a rechargeable LiPO battery, there is a headband to wear it on your head, and there is an eye antenna attached to the servo motor that can float in front of you like a deep sea fish. With these ingredients, you could glue the microcontroller and battery to a hair clip and hide it in a bun or under your hair, or you could make the wires longer and hide it a bit further away. 

![]({{ site.baseurl }}/assets\images\IMG_8521.JPG)

### Swaying necklace
Another example to make something wearable is to make a necklace with a pouch like here. 

![]({{ site.baseurl }}/assets\images\IMG_8526.JPG)
![]({{ site.baseurl }}/assets\images\IMG_8584.JPG)

The microcontroller and the battery fit in the pouch, and match with the swaying ribbon. This is an example of hiding the electronics in plain sight by making them match with the wearable.

<div class="videowrapper"><video width="480" height="360" autoplay loop muted>
  <source src="{{ site.baseurl }}/assets\videos\wearable-necklace.mp4" type="video/mp4"></video>
</div>

### Swinging ring
Now, if you want the movement on your hand instead, you could attach the motor to a glove, or in this case, bend metal wire to make a ring. 

![]({{ site.baseurl }}/assets\images\IMG_8574.JPG)

![]({{ site.baseurl }}/assets\images\IMG_8576.JPG)

Here you can see it in action: 

<div class="videowrapper"><video width="480" height="360" autoplay loop muted>
  <source src="{{ site.baseurl }}/assets\videos\wearablering.mp4" type="video/mp4"></video>
</div>

The electronics are simply hidden in my sleeve. I'm wearing them on my skin by sticking pieces of velcro to my arm and to the battery and microcontroller, so they easily come off if needed but they are still pretty stable. This is nice for prototyping. They could also be velcro'ed to a bracelet or sleeve. 

![]({{ site.baseurl }}/assets\images\IMG_8581.JPG)

### Interactive scarf
In this next example (using the Arduino example LDR_NeoPixel_amount), the electronics can be hidden in the wearable object (a scarf) itself. 

![]({{ site.baseurl }}/assets\images\IMG_8556.JPG)

The lights (Neopixels) need to go on the inside, but the LDR needs to be on the outside so it can detect lighting changes.

![]({{ site.baseurl }}/assets\images\IMG_8571.JPG)

#### Interaction prototyping
Here you can see it in action. Once you have a first prototype, you can start the prototyping the interaction that you want. There is plenty of ways to influence the amount of light on an LDR: covering it with your hand, walking into a darker area, putting something on top of it. Many things to try out!

<div class="videowrapper"><video width="480" height="360" autoplay loop muted>
  <source src="{{ site.baseurl }}/assets\videos\scarf1.mp4" type="video/mp4"></video>
</div>

Here, a subtle movement of the neck is already enough to turn on the lights.

<div class="videowrapper"><video width="480" height="360" autoplay loop muted>
  <source src="{{ site.baseurl }}/assets\videos\scarf2.mp4" type="video/mp4"></video>
</div>

---

## More examples & inspiration

- Embroidery, embedding electronics into soft circuits

[chainStitch Noise by Afroditi Psarra](https://etextile-summercamp.org/swatch-exchange/chain-stitch-noise/)

![](http://etextile-summercamp.org/swatch-exchange/wp-content/uploads/2016/05/chainStitch-synth-1024x765.jpg)

### Output: motion

![](https://github.com/socialbodylab/KineticWearablesToolkit/raw/master/2020-Feb-15-800px-KWT-04.jpg)

Have a look at [this project called Kinetic Wearables Toolkit by the Social Body Lab at OCAD University](https://github.com/socialbodylab/KineticWearablesToolkit)! They are researching ways to incorporate motion and kinetics into wearables with 3D printed parts and various motors, including the servo motors that we are also using. I printed some of their parts so you can play around with it!


### Output: light

![](https://www.maloubeemer.com/wp-content/uploads/2021/09/006-Second-Skins-Re-fream-Malou-Beemer-.jpg)

[Second Skins Re-FREAM by Malou Beemer](https://www.maloubeemer.com/project/second-skins-re-fream/) shows integration of LEDs into garments, using textiles to diffuse the light. It also shows traces sewn with a sewing machine on the project page. 

