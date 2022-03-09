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

