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

# Architecture
## UML Diagram
![UML Diagram](https://user-images.githubusercontent.com/46928815/157377725-1da6bfd6-a9c0-479f-bfa2-a14c489a83ab.png)
## Use case diagram
![Use case diagram](https://user-images.githubusercontent.com/46928815/157377755-967c4d78-22a1-4af1-9b3b-14d1b801fbe6.png)
## Flow Chart
![Flow chart](https://user-images.githubusercontent.com/46928815/157377774-5c611a23-6243-43d1-943d-f4ed32d23063.png)

