# Automatic Boom Barrier and Traffic Lights Controller

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
