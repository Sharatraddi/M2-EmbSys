# Case Studies of Embedded systems

# Automatic Traffic Lights and Boom Barrier Controller

## Description 

### **This project deals with controlling the *Traffic Lights and Boom Barrier on the roads Automatically* which will ensure the safety of the citizens, it will even have any interrupts to make sure that if any lanes have emergency vehicles that lane should be cleared on priority and also it will have a timer so that eveyday at desired time all traffic will be halted for some time in the evening so that school children can pass to the other side of the road.** 

<img src="https://user-images.githubusercontent.com/46928815/155202567-4026f11a-651a-4f5b-9f66-f75e07d79dd1.png" width=70% height=55% >


## The below is the block diagram of **The Project** and contains all the major components present in it

<img src="https://user-images.githubusercontent.com/46928815/155212628-88966365-bf8b-40c3-a6b4-f44e38890179.png" width=100% height=100% >

# Explanation of the components

## Microcontroller 

### **This is the main controller and decision maker of the system, in this project ATMEGA326 is used for all computation, it uses all the data  from the inputs of the sensors  and take the neccessary actions required as the program, it gives signals to boom barrier and and pedestrian gates to open or close as the system needs, it controls what is to be displayed on the traffic lighs and the counter the description of the roads and also it can be loaded with the code of any advertisements to be displayed.**

## Motor Driver

### **These act as a interface between the motors and the control circuits. Motor require high amount of current whereas the controller circuit works on low current signals. So the function of motor drivers is to take a low-current control signal and then turn it into a higher-current signal that can drive a motor.**

## Boom Barrier

### **This is a bar pivoted to allow or block vehicular access through a controlled point.**

## Pedestrian Gate

### **This is a gate used for pedestrian ingress and egress on the road.**

## Ultrasonic Sensor

### **This is a measurement device which provide precise distance measurement of the vehicles using ultrasonic wave. This sensor has transmitter which transmit ultrasonic waves. When waves hitting an vehicle, part of their energy reflected back to receiver of the sensor as echo signal, from this distance to the vehicle can be calculated trough the speed of the ultrasonic waves**

## Special Photo Sensor

### **This is used to pick up special patterns of frequencies of light that has been coded into the emergency vehichles which emit them onto this sensors which will help then decide to clear the traffic on that lane on priority .**

## RIFD Sensor

### **This sensor is used to fine the user who is speeding on the road above the set speed, this will scan the FASTag of the user speeding up and fines him/her and directly cuts the amount form the tag.**

## Clock

### **This is used as a reference variable and anything can be compared against this and perform the operation.**

## EEPROM

### **This electrically erasable programmable read-only memory can be used to program the operations used in the system.**

## Real Time Clock

### **This elevator system is a very saftey intensive machine and it requires an real time operations for it to take decisions and act quickly upon it this is why the real time clock is used .**

## Traffic lights and control

### **This will show the respective lights on the lanes according to the signal.**

## Display

### **This is used to display the descriptions of the roads and even advertisements.**

## Street lights

### **These lights can be interfaced with the control system so that they an be controlled accordingly.**

## Speakers

### **This is used to announce any necessary things.**

## Total System Bypass

### **This is essentially a bypass switch to take over the control of the system mannually.**

#












# **Kitchen Chimney** 🍎

## The below is the picture of Kitchen Chimney

<img src="https://user-images.githubusercontent.com/46928815/154841899-188357ad-be36-458e-80c4-ebe94a1e9898.png" width=50% height=55% >

 ### **Chimneys are meant to expel hot exhaust gases from living spaces to outside, As the air passes through the machine it filters and absorbs heat and traps grease particles, keeping kitchen cool and free of odours.**


## The below is the block diagram of **Kitchen Chimney** and contains all the major components present in it

<img src="https://user-images.githubusercontent.com/46928815/154844369-f08e63f1-c86e-44a4-b24f-f099193f5e22.png" width=75% height=75% >

# Explanation of the components

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

# Elevator 🔩

## The below is the picture of **Elevator**

<img src="https://user-images.githubusercontent.com/46928815/154846452-1bb05198-fb57-49d7-a004-123d90f0cda6.png" width=50% height=75% >

 ### **Elevators or lifts, as they are commonly called, is a form of vertical transport used primarily to move between multiple floors found in high-rises and skyscrapers. These are used to transport both people and goods from one floor to another.**
 
 ## The below is the block diagram of **Elevator Shaft** and contains all the major components present in it
 
 <img src="https://user-images.githubusercontent.com/46928815/154847935-6bba8cdf-3bda-4c8a-ab8a-40994f492e7a.png" width=300% height=200% >

# Explanation of the components

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
