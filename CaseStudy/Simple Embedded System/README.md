# **Kitchen Chimney** 🍎


> # Introduction
## The below is the picture of Kitchen Chimney

<img src="https://user-images.githubusercontent.com/46928815/154841899-188357ad-be36-458e-80c4-ebe94a1e9898.png" width=50% height=55% >

## **Description**
 ### **Chimneys are meant to expel hot exhaust gases from living spaces to outside, As the air passes through the machine it filters and absorbs heat and traps grease particles, keeping kitchen cool and free of odours.**
 
 #
 
 > # The System Development life cycle of Embedded System
   # The V Model
<img src="https://user-images.githubusercontent.com/46928815/155397318-b011348b-afdb-4d06-8f3d-190fdc91620a.png" width=100% height=100% >



> # Requirements 

## High Level Requirements:-
| ID | Description | Category |
| ----- | ----- | ------- |
|HLR01|It shall be able to sense the amount of somke in the working area|Technical|
|HLR02|It shall be able to sense the temperature of the working area|Technical|
|HLR03|It shall be able to detect the motion of the hand to operate it hands free|Technical|
|HLR04|It shall be able to calculate the difference in the voltage required by it when using solar panels|Technical|

## Low Level Requirements:-
| ID | Description | Category |
| ----- | ----- | ------- |
|LLR01|It shall detect the intensity of the smoke and level up or down the machine accordingly|Technical|
|LLR02|It shall detect the temperature of the machine if its too high it can turn itself off till it gets back to normal temperature|Technical|
|LLR03|It shall detect the movement of the hands by using the motion sensor & use it to turn on the machine hands free|Technical|
|LLR04|It shall detect the voltage that is generated form the solar panels and can send a signal for extra voltage form the AC mains if its less|Technical|

#


> # System Design
## The below is the block diagram of **Kitchen Chimney** and contains all the major components present in it

<img src="https://user-images.githubusercontent.com/46928815/154844369-f08e63f1-c86e-44a4-b24f-f099193f5e22.png" width=75% height=75% > 

#

![image](https://user-images.githubusercontent.com/46928815/155355899-1a2ed033-f0f7-47ef-b84b-7dc990f261d0.png)

## **Explanation of the components**

## Display

### **This shows the speed selected, the machine is on or off and is there any service required.**

## Touch Screen

### **This is used to select the level at which the chimney should run, to turn on the lights.**

## Speakers

### **This is used for acoustic feedback for the user.**

## Lights

### **This can be used as a secondary source of light.**

## Smoke Sensor

### **This is used to detect the intensity of the smoke and level up or down the machine accordingly.**

## Temperature Sensor

### **This is used to detect the temperature of the machine if its too high it can turn itself off till it gets back to normal temperature.**

## Motion Sensor

### **This sensor is used to turn on the machine hands free, it can be quite useful when the persons cooking are having their hands dirty and cannot touch the chimney.**

## Voltage Sensor

### **This machine can also run on solar power, when the solar power is being used it can sometimes have less voltage, its better to run through this sensor & compare it to the required voltage, if its less the difference voltage can be supplied through the AC input.**

## Clock

### **This is used as a reference variable and anything can be compared against this and perform the operation.**

## EEPROM

### **This electrically erasable programmable read-only memory can be used to program the operations used in the machine.**

## Micro Controller

### **This is the main brain of operation in the machine.**

## Solar Panels

### **This is used to convert light energy to electric energy and supply it to the machine.**

## Regulator

### **This is used to control the DC DC converter.**

## DC DC Converter

### **This is used to isolate some highly sensitive components in the circuit from other components of the circuit to avoid any kind of damage.**

## Exhaust Fan

### **This is the main part of the machine it is what creates vaccum and suks the smoke out of the area.**

## Exhaust Output

### **This is the output of the system.**

## Battery

### **This is used to shut down the system proplely if there is no power available aor during power cut.**

## AC Mains

### **This is the 230V mains supply.**

#

> # Applications

### **Chimneys are meant to expel hot exhaust gases from living spaces to outside.**
### **Chimney absorbs heat, smoke, oil, and grease to make kitchen clean and odor-free.**
