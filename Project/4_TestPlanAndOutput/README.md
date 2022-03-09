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









