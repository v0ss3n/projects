---
layout: post
title: "Workshop Factsheet OER"
permalink: "/workshop-factsheet/"
---

# Interactive wearables: prototyping electronic art on the body - Open Educational Resources

### Titel / Ondertitel:

Interactive wearables: prototyping electronic art on the body

### Trefwoorden / thema's:

#wearables #wearableart #electronicart #programming

### Auteur

[Michelle Vossen](https://michellevossen.com/) is een interdisciplinair ontwerper en educator die werkt met textiel en technologie, gevestigd in Utrecht op het Hof van Cartesius. Haar praktijk draait om de combinatie van textiel met technologie in de vorm van zachte sensoren, door gebruik van verschillende handmatige en machinale textieltechnieken zoals breien, weven, borduren en naaien. Deze combineert ze met elektronische componenten, microcontrollers en code tot interactieve werken. Haar focus ligt op het creëren van zachte, tactiele interfaces die de haptische waarneming centraal stellen: tastbare interacties die je anders laten bewegen en aanraken.

### Credits

Deze OER is gelicenseerd onder Creative Commons 4.0 CC-BY Michelle Vossen

Deze OER is ontwikkeld gedurende de artist residency bij Creative Coding Utrecht. Gefinancierd door Stimuleringsfonds Creatieve Industrie.

### Leeftijd / Doelgroep:

De doelgroep voor deze workshop zijn jongeren tussen de 14 - 28 jaar

### Aantal deelnemers:
Max. 15

### Vereiste voorkennis:
Deze workshop kan op verschillende niveaus gegeven worden. Voor de deelnemers is enige kennis van programmeren in de Arduino IDE en basiskennis van elektronica en solderen handig, maar niet noodzakelijk. Als de groep weinig voorkennis heeft, is het aan te raden om voor één van de elektronica voorbeelden te kiezen, waarna de deelnemers de voorbeeldcode kunnen aanpassen. Hiermee kan de meeste tijd worden besteed aan het uitwerken van de wearables. 

Voor het grootste visuele effect: ga voor LDR of touch input, en licht (LEDs voor het gemak, Neopixels voor het effect) of beweging (mini servo motortjes) als output. Het is het makkelijkst als iedereen hetzelfde doet qua elektronica.

Als de deelnemers nog geen ervaring hebben, kun je solderen het beste achterwege laten. De workshop gaat om prototyping, niet om de meest uitgewerkte, geïntegreerde wearable maken :-)

<!-- Level 1: wearable prototyping: deelnemers maken voorbeeld circuitjes op breadboards 
Level 2: wearable exploration
Level 3: wearable  -->

De workshopleider moet kennis hebben van:

- Programmeren in de Arduino IDE
- Simpele elektronische circuitjes prototypen
- Maaktechnieken naar keuze

### Duur:

2x 4 uur

### Workshop Beschrijving:

In deze workshop maken de deelnemers interactieve, draagbare elektronische kunst met simpele elektronica die ze zelf programmeren! Deelnemers krijgen een crash course in Arduino programmeren, elektronische circuitjes maken op een breadboard en maken met technieken naar keuze een draagbaar kunstwerkje. 

### Workshop Doelstellingen:

Leerdoel | Hoe
--- | ---
Draagbare objecten ontwerpen in 3D | Prototyping met verschillende beschikbare materialen en 3D-technieken
Elektronica draagbaar maken | Elektronische circuits integreren, draagbare stroomopties gebruiken
Basisbeginselen van programmeren in Arduino IDE | Arduino IDE crashcursus - walkthrough voor beginners
Basisbeginselen van elektronica | 'Schetsen met hardware': prototypen van elektronica en leren door te doen, verschillende inputs/outputs uitproberen of er eentje uitkiezen om diep in te duiken

Einde dag 1 doelen:
- Een duidelijk idee voor een wearable
- Onderdelen van de wearable zonder elektronica, vormtesten en prototypes
- Werkende geprogrammeerde elektronica 

Einde dag 2 doelen:
- Werkende elektronica op het lichaam
- Elektronica en design komen samen in een draagbaar kunstwerk

### Materiaal, gereedschap, apparatuur:
Deelnemers moeten een laptop meenemen met daarop de Arduino IDE geïnstalleerd. De benodigde voorbeeldcode is [hier te vinden](https://github.com/v0ss3n/projects/tree/main/education/wearables/Arduino%20(code)) en de documentatie website is [hier](https://v0ss3n.github.io/projects/).

Afhankelijk van de versie van de workshop die je gaat doen, heb je de volgende materialen nodig:

#### Elektronica
- Seeed Studio XIAO ESP32S3-ontwikkelbord + 2 sets header-pinnen + Bluetooth-antenne
- Breadboard
- Jumperdraden (mannelijk/mannelijk en mannelijk/vrouwelijk)
- LiPO batterij (3,7 V 600 mAh)
- USB-C naar USB-C of USB-A-kabel

Afhankelijk van de versie die je kiest:
- LDR
- Enkele weerstanden: 67 Ohm (voor LEDs), 4,7-10 kOhm (voor LDR), 300-500 Ohm (voor Neopixels), 150-200 Ohm (voor speaker)
- LED/LED filament
- Neopixels
- Microservomotor
- 8 Ohm speaker

Tools:
- Multimeter

Alleen noodzakelijk bij een wat meer ervaren groep deelnemers:
- Soldeer stations: soldeerbouten, soldeertin, sponsjes 

#### Maakmaterialen
Het maakgedeelte is het meest flexibel qua uitwerking: je hoeft niet alle materialen te hebben, en je kan dit aanpassen aan de expertise van de workshop docent of aan de interesse van de deelnemers. [Hier heb ik een paar voorbeelden verzameld](https://v0ss3n.github.io/projects/wearable-electronics/). Wat basismaterialen om in huis te hebben:

Materialen om dingen vorm te geven:
- IJzerdraad
- Stof 
- Karton, papier, plastic (dikke plastic sheets en kleurenfilters zijn fijn)
- Textielverharder
- Klei

Materialen om dingen draagbaar te maken:
- Clipjes
- Haarbanden
- Klittenband
- Oorbellen
- Bestaande kledingstukken
- Veiligheidsspelden

Gereedschap & apparatuur:
- Knijp- en kniptangen
- Scharen
- Mesjes
- Snijmatten
- Naaimachine
- Lijmpistolen

Overig:
- Potloden en papier om te schetsen

### Voorbereiding:
Bereid de dingen die gesoldeerd moeten worden voor (header pins aan ontwikkelborden solderen, LiPO batterij solderen). 
Zet alle materialen en tools klaar. Leg papier en potloden klaar voor het brainstormen.

### Meer informatie:
- [De presentatie om mee te beginnen is hier te vinden](https://docs.google.com/presentation/d/1ME2McJVaysACMjvZqvqYNrnTcAuS8AELZ6eZsMklizI/edit?usp=sharing)
- [De programmeren en breadboarding presentatie is hier te vinden](https://docs.google.com/presentation/d/1AGPXkJWBf6cLnrpUOCS3_FByQYlOY5E3t-unRLCv0Cg/edit?usp=sharing)

---

# Workshop
Dit is een tweedaagse workshop wearable art.

Workshop dag 1 | Wat? | Opmerkingen
--- | ---
13:00-13:15 | Binnenkomst, welkom
13:15-13:45 | Introductie & presentatie (voorbeelden van mogelijke inputs/outputs, draagbare maaktechnieken, interacties) | [Presentatie](https://docs.google.com/presentation/d/1ME2McJVaysACMjvZqvqYNrnTcAuS8AELZ6eZsMklizI/edit?usp=sharing); [voorbeelden op de website](https://v0ss3n.github.io/projects/wearable-electronics/)
13:45-14:15 | Ideevorming, brainstormen, schetsen | Leg pen en papier klaar; loop rond om te kijken wat iedereen wil maken en mee te denken
14:15-15:00 | Crash course Elektronica & Arduino-programmering | Loop met de deelnemers door [de voorbereidende stappen](https://v0ss3n.github.io/projects/hardware-software/#setting-up-the-arduino-ide). [Begeleidende presentatie](https://docs.google.com/presentation/d/1AGPXkJWBf6cLnrpUOCS3_FByQYlOY5E3t-unRLCv0Cg/edit?usp=sharing)
15:00-15:15 | Pauze
15:15-16:45 | Eventueel doorgaan met de crash course en het prototyping van circuits, beginnen met (onderdelen van) het draagbare kunstwerk
16:45-17:00 | Show & tell, opruimen

Workshop dag 2 | Wat? | Opmerkingen
--- | ---
13:00-13:15 | Binnenkomst, welkom, wat heb je nodig om te beginnen?
13:15-15:00 | Werken aan het tot leven brengen van de draagbare kunst: elektronica & vormen samenbrengen, het draagbaar maken, het integreren van het elektronische circuit | [Integreren van elektronica op de website](https://v0ss3n.github.io/projects/wearable-electronics/#integrating-electronics-into-wearables)
15:00-15:15 | Pauze
15:15-16:30 | Prototypes afmaken: testen, troubleshooten, puntjes op de i
16:30-17:00 | Wearable art show! | Resultaten vastleggen & reflecteren op het proces, afsluiten met een drankje
