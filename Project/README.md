# Report

# Automatic Boom Barrier and Traffic Lights Controller

## **Description**

### This project deals with controlling the boom barrier and traffic lights on the roads Automatically which will ensure the safety of the citizens, It will have a system in place to fine any vehicles which are over speeding, It will have a system in place to fine any vehicles which are coming over the zebra crossing and blocking it for the people to pass during signal, And finally it will have a timer so that eveyday at desired time all traffic will be halted for some time so that people can pass to the other side of the road and also it can control the pedestrian gates.
<img src="https://user-images.githubusercontent.com/46928815/155202567-4026f11a-651a-4f5b-9f66-f75e07d79dd1.png" width=70% height=55% >

## Identifying features
1. It shall control the boom barriers and traffic lights on the automatically according to out needs like we can program it 
2. It shall detect any over speeding vehicles on the road
3. It shall detect any vehicles which are over the zebra crossing during the signal
4. It shall fine these vehicles 
5. It shall control the pedestrain gates automatically

## State of art

1. The aim of this project is to bring out the human need for controlling the traffic and gates as it can be having its errors and caveats
2. The fining of the vehicles then and there it self will make sure everyone follows the road rules correctly, thus contributating to healthy road habits
3. So by implemeting the automatic traffic control system can reduce the human erros preventing bad things happening on the roads

# SWOT Analysis

![image](https://user-images.githubusercontent.com/46928815/157364090-bda29444-fd06-47e7-86fc-c0aa33151932.png)

# 5W's & 1H

![image](https://user-images.githubusercontent.com/46928815/157364029-24b2f679-4676-425d-a988-8d2527dbeb91.png)

# Requirements

## High Level Requirements:-
| ID | Description | Category |
| ----- | ----- | ------- |
|HLR01|It shall be able to control the boom barriers and traffic lights on the road automatically |Technical|
|HLR02|It shall be able to detect any speeding vehicles|Technical|
|HLR03|It shall be able to detect any vehicles over the zebra crossing|Technical|
|HLR04|It shall be able to control pedestrian gates automatically |Technical|
|HLR05|It shall be able to display desired content on the displays |Technical|
|HLR06|It shall be able to fine the vehicles who are not following the rules of the road |Technical|

## Low Level Requirements:-
| ID | Description | Category |
| ----- | ----- | ------- |
|LLR01|It shall control the traffic automatically as required and also open and close the boom barrier on the roads |Technical|
|LLR02|It shall detect any speeding vehicles simulated through the potentionmeter |Technical|
|LLR03|It shall detect any vehicles on the zebra crossing via the ultra sonic sensor|Technical|
|LLR04|It shall control the pedestrian gate when there is a signal for people to cross the road|Technical|
|LLR05|It shall be coded to display desierd content on the displays like the vechile distance from the zebra crossing and comments |Technical|
|LLR06|It shall be able to fine the vehicles who are not following the rules of the road i.e over speeding & crossing over the zebra crossing simulated via turning on LED's|Technical|

# Architecture

## The below is the block diagram of **The Project** and contains all the major components present in it

<img src="https://user-images.githubusercontent.com/46928815/157380622-7744e535-6d7d-40e5-9141-8b713dfc9453.png" width=100% height=100% >

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

## Potentiometer

### **A potentiometer is a type of position sensor. They are used to measure displacement in any direction in this project they are used to simulate speeding and approaching vehicles**

## Clock

### **This is used as a reference variable and anything can be compared against this and perform the operation.**

## EEPROM

### **This electrically erasable programmable read-only memory can be used to program the operations used in the system.**

## Real Time Clock

### **This elevator system is a very saftey intensive machine and it requires an real time operations for it to take decisions and act quickly upon it this is why the real time clock is used .**

## Traffic lights and control

### **This will show the respective lights on the lanes according to the signal.**

## Display

### **This is used to display the descriptions of the roads**

## UML Diagram
![UML Diagram](https://user-images.githubusercontent.com/46928815/157377725-1da6bfd6-a9c0-479f-bfa2-a14c489a83ab.png)
## Use case diagram
![Use case diagram](https://user-images.githubusercontent.com/46928815/157377755-967c4d78-22a1-4af1-9b3b-14d1b801fbe6.png)
## Flow Chart
![Flow chart](https://user-images.githubusercontent.com/46928815/157377774-5c611a23-6243-43d1-943d-f4ed32d23063.png)

# The System Development life cycle of Embedded System
# The V Model
<img src="https://user-images.githubusercontent.com/46928815/155397318-b011348b-afdb-4d06-8f3d-190fdc91620a.png" width=100% height=100% >

# Implementation

## Breif code explanation
### Basically there are 3 functionalities in the program

1. **Speed Fine funciton**
  
  Using potentiometer the speed sensor is simulated, the vehicles below the speed range of 50 KM's/HR all the speeding fine LED's are off 
   the vehicles upper than speed range of 50 KM's/HR all the speeding fine LED's are on.
   
 2. **Crossing Fine function**
   
   Using ultra sonic sensor if the vehicles are 300 meters w.r.t to the sensor then the vehicle is not no zebra corssing all the Corssing fine LED's are off
   if the vehicles are less than 300 meters w.r.t to the sensor then the vehicle is no zebra corssing all the Corssing fine LED's are on.
   
3. **Traffic light boom barrier and pedestrain gate control function**
    
    This function works as follows
    
    * Hault the traffic initially and open all the pedestrain gates for people to pass
    * All the lanes become red and the lane traffic starts with lane 1 red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 1 opens and after       some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 1 closes
    * For the 2nd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 2 opens after some delay yellow is on green is off and yellow is       off and red is on and the boom barrier of lane 2 closes
    * For the 3rd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 3 opens after some delay yellow is on green is off and yellow is      off and red is on and the boom barrier of lane 3 closes
    * And for the 4th lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 4 opens after some delay yellow is on green is off and yellow       is off and red is on and the boom barrier of lane 4 closes

# Test plan and output

# Test plan

## High Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|HLT1|All Servos open when the traffic is haulted|Program Execution|Servo motor open (90 Degree)|servo motor open (90 Degree)|Pass|
|HLT2|Calculate the distance of approaching vehicle in all lanes|distance & time|distance of the vehicle w.r.t to zebra crossing|distance of the vehicle w.r.t to zebra crossing|Pass|
|HLT3|Fine the vehicle |distance of the vehicle w.r.t to zebra crossing|Fine led on|Fine led on|Pass|
|HLT4|Display the Distance of lane 1|Program execution|Display of distance of the vehicle & is it safe from zebra crossing|Display of distance of the vehicle & is it safe from zebra crossing|Pass|
|HLT5|Moniter any vehicles speeding over the speed limit|Potentiometer|Speed Fine led on |Speed Fine led on|Pass|
|HLT6|Traffic lights normal operation|Program Execution|Traffic signal's LED's on|Traffic signal's LED's on|Pass|
|HLT7|Hault the traffic for some time after the execution over for all lanes|Program execution|All red lights on in all the lanes & all servors open (90 degrees)|All red lights on in all the lanes & all servors open (90 degrees)|Pass|

## Low Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|LLT1|See the traffic lights if all are red the open the pedestrain gates (Servo Motors) of all lanes|Program Execution|Servo motors open|Servo motors open|Pass|
|LLT2|Should calculate the distance of the vehicle w.r.t to zebra corssing|Distance & Time|trigger and echo pins perdorm this tasks & distance is known|trigger and echo pins perdorm this tasks & distance is known|Pass|
|LLT3|Fine the vehicle which crosses the zebra crossing during pedestrain corssing time|distance of the vehicle w.r.t to zebra crossing|Based on the distance the crossing fine led should turn on|Based on the distance the crossing fine led should turn on|Pass|
|LLT4|Calculating the value of distance of vehicle form the zebra crossing|Program Execution|Display distance in meters and also show warnings|Display distance in meters and also show warnings|Pass|
|LLT5|A potentiometer is used to simulate this|value above the threshold|Based on the value of the potentiometer, if above the threshhold the speed_fine led should be on|Based on the value of the potentiometer, if above the threshhold the speed_fine led should be on|Pass|
|LLT6|Preprogrammed delays of the traffic lights is executing|Program Execuation|All the leds of the traffic lights should be on|All the leds of the traffic lights should be on|Pass|
|LLT7|All redlights on in all the lanes|Program Execution|Led's on and servo motor open (90 Degrees)|Led's on and servo motor open (90 Degrees)|Pass|

# Output

## Photo of Simulation

![image](https://user-images.githubusercontent.com/46928815/157354886-12039994-889e-445b-95ef-d45aff93c950.png)

## Speed Fine output

![image](https://user-images.githubusercontent.com/46928815/157355185-4c042fcb-c696-4491-94d6-a41cee79b7be.png)
### As we can see in the potentiometer properties the value of current resistance is 50 i.e the vehicles are below the speed range of 50 KM's/HR all the speeding fine LED's are off

![image](https://user-images.githubusercontent.com/46928815/157358986-a7a49387-6e23-485a-839b-fa7969cbcd74.png)
### As we can see in the potentiometer properties the value of current resistance is 51 i.e the vehicles are above the speed range of 50 KM's/HR all the speeding fine LED's are on
### Note: the values can change in individual lanes as well
# Speed Fine GIF
![speedfine](https://user-images.githubusercontent.com/46928815/157418218-c8eb40dd-c0fe-4533-b11d-992e358e2a01.gif) 

## Crossing the zebra crossing output

![image](https://user-images.githubusercontent.com/46928815/157356177-663f6d6b-da4b-41da-bf18-162774a91f82.png)
### As we can see vehicle distance w.r.t to sensor is greater than 300 meters i.e if the vehicles are 300 meters w.r.t to the ultrasonic sensor then the vehicle is not no zebra corssing all the Corssing fine LED's are off
![image](https://user-images.githubusercontent.com/46928815/157356720-249aad41-ffeb-435c-bff6-50066ebe73fa.png)
### And also there is comment saying no fine

![image](https://user-images.githubusercontent.com/46928815/157356816-beed0e3c-0b9f-4f9d-aec0-a66d69acf63d.png)
### As we can see Vehicle distance w.r.t to sensor is less than 300 meters i.e if the vehicles are below 300 meters w.r.t to the ultrasonic sensor then the vehicle is on the zebra corssing all the Corssing fine LED's are on
![image](https://user-images.githubusercontent.com/46928815/157357011-bc8ee646-7d1d-4d28-809d-131d0fcefb87.png)
### And also there is comment saying no fine 

# Zebra Crossing Fine
![Animationzebra](https://user-images.githubusercontent.com/46928815/157416605-5af906bf-66fc-4837-890c-8ff9dd5f7520.gif)

## Traffic operations as per the code
![Animation](https://user-images.githubusercontent.com/46928815/157388104-1c0085b0-3cb9-4782-8f16-cf5e052e3744.gif)
### Operations are
1. Hault the traffic initially and open all the pedestrain gates for people to pass
2. All the lanes become red and the lane traffic starts with lane 1 red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 1 opens and after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 1 closes
3. For the 2nd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 2 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 2 closes
4. For the 3rd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 3 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 3 closes
5. And for the 4th lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 4 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 4 closes

# Advantages And Disadvantages
## Advantages

* It will make the traffic control easy and reliable
* It will make the whole system less prone form human errors
* It will save lives as there are many monitoring systems kept in place
* It will help develop healthy driving habits 

## Disadvantages

* Complexity might increase as the things become more feature rich
* Reliability with the sensors might be a issure during bad weather conditions

# Applications

Transportation industries

#

