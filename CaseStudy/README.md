# Case Studies of Embedded systems
> ### This folder contains 2 case studies on simple and complex subsystems

# **Kitchen Chimney**


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

#

# Elevator

> # Introduction

## The below is the picture of **Elevator**

<img src="https://user-images.githubusercontent.com/46928815/154846452-1bb05198-fb57-49d7-a004-123d90f0cda6.png" width=40% height=50% >

## Description
### **Elevators or lifts, as they are commonly called, is a form of vertical transport used primarily to move between multiple floors found in high-rises and skyscrapers. These are used to transport both people and goods from one floor to another.**

#

> # The System Development Life Cycle of Embedded System

# The V Model
 <img src="https://user-images.githubusercontent.com/46928815/155401062-8613c50a-c51f-4d5b-98bc-8785da1c0fca.png" width=100% height=100% >
 
 > # Requirements
 
 ## High Level Requirements
| ID | Description | Category |
| ----- | ----- | ------- |
|HLR01|It shall be able to show necessary things on the Display |Technical|
|HLR02|It shall be able to sense imputs provided by the user|Technical|
|HLR03|It shall be able give acoustic feed back to the users via the speakers|Technical|
|HLR04|It shall be able to control the elevator doors|Technical|
|HLR05|It shall be able to control the lifting system|Technical|
|HLR06|It shall be able to sense the position of the doors in each floor |Technical|
|HLR07|It shall be able to sense any smoke in the elevator car |Technical|
|HLR08|It shall be able activate the fire system in the car in case of fire|Technical|

## Low Level Requirements
| ID | Description | Category |
| ----- | ----- | ------- |
|LLR01|It shall show the directions in which the car is moving, the floor in which the car is, the selected floor by the user & show car overload status|Technical|
|LLR02|It shall be able to register the inputs like the door open or close, emergency stop, floor selection, the direction provided by the user|Technical|
|LLR03|It shall be able to announce the floor in which the car is & the sound of the alarm|Technical|
|LLR04|It shall be able to conrol the elevator car doors at each level and act on the data provided|Technical|
|LLR05|It shall be able control the speed of the induction motor via the motor driver and set the motion of the elevator car|Technical|
|LLR06|It shall be able control the cars doors and act accordingly weather or not to open the door once the car reaches the floor|Technical|
|LLR07|It shall be able to sense any smoke in the elevator car and send a signal to fire alaram system |Technical|
|LLR08|It shall be able activate the fire system in the car by using the data form the smoke sensor in case of fire in the elevator car|Technical|

> # System Design


## The below is the block diagram of **Elevator Shaft** and contains all the major components present in it
 
<img src="https://user-images.githubusercontent.com/46928815/154847935-6bba8cdf-3bda-4c8a-ab8a-40994f492e7a.png" width=300% height=200% >
 
 ![Lift drawio](https://user-images.githubusercontent.com/46928815/155404790-8a580aa0-76d0-45b6-8087-f0ae1bb4dd11.png)
 
 ## Explanation of the components

## Display

### **This component has multiple fuctions it displays the selection of floor by the user, the floor in whitch the lift is currently at, the direction of lift which it is moving & the indication of overweight.**

## Touch Screen

### **This component also has multiple fuctions it basically is the input for for the lift, it contains options for the selection of Door open and close, The input for direction in which the lift has to move, the selection of the floor to which the lift has to go & emergency stop button.**

## Speakers

### **This component is used for the ringing of alarms and the announcement of floors in which the lift is currently at.**

## Lights

### **This is used as source of light in the elevator car.**

## Smoke Sensor

### **This is an electronic fire-protection device that automatically senses the presence of smoke, as a key indication of fire, and sounds a warning to building occupants, and  they issue a signal to the building's central fire alarm system.**

## Fire alarm system

### **This system activates from the signal of smoke sesnsor and it sprays water in case of fire.**

## Total System Bypass

### **This is used  to bypass all the saftey systems and controls and operate the machine completly mannually, it can be used in whike doing service of the lift.**

## Car status control

### **This is used to control the status of the elevator car mannualy and calibrate it to the floors of the building.**

## Clock

### **This is used as a reference variable and anything can be compared against this and perform the operations.**

## EEPROM

### **This electrically erasable programmable read-only memory can be used to program the operations used in the machine.**

## Real Time Clock

### **This elevator system is a very saftey intensive machine and it requires an real time operations for it to take decisions and act quickly upon it this is why the real time clock is used .**

## RAM

### **This is used to store all the operations and instructions of the machine.**

## Micro Controller

### **This is the main brain of operation in the machine.**

## Elevator Door Controller

### **This sub system is used to control the elavator car doors and to moniter the doors at each floor.**

## Lifting System

### **This subsystem consists of motor driver which has all the components and neccessary instructions to run the motor, in this case Induction motor, The induction motor is the main mechanical system which carries and operates the elevator car.**

## Postion Sensor

### **This is used to moniter and compare the position of the elevator car every time the doors try to open, if the positons are good to go the doors open.**

## AC Input

### **This is the Three Phase AC input power to the machine and subsystems working.**

## Elevator Car

### **This is the main carrier box for the people and goods to be carried.**

#

> # Applications

### **Elevators are used as a vertical transport move between multiple floors found in high-rises and skyscrapers.**
### **These are used to transport both people and goods from one floor to another.**

