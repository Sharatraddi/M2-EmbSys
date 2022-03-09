# M2-EmbSys

#### This repository contains all the things related to Module 2 Mini project 

This project deals with controlling the boom barrier and traffic lights on the roads Automatically which will ensure the safety of the citizens, It will have a system in place to fine any vehicles which are over speeding, It will have a system in place to fine any vehicles which are coming over the zebra crossing and blocking it for the people to pass during signal, And finally it will have a timer so that eveyday at desired time all traffic will be halted for some time so that people can pass to the other side of the road and also it can control the pedestrian gates.

|Codiga Badges|Codacy Badge|
|:--:|:--:|
|![Codiga badge](https://api.codiga.io/project/31801/score/svg) ![Codiga badge](https://api.codiga.io/project/31801/status/svg)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/62cbec8fca804f92b49d6dc87dada71f)](https://www.codacy.com/gh/Sharatraddi/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Sharatraddi/M2-EmbSys&amp;utm_campaign=Badge_Grade)  

# Folder Structure
Folder Project->| Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`   | Documents specifying design details
`3_Implementation` | All code and documentation of 3 functionalities implemented
`4_TestplanAndOutput`| Documents with test plans and procedures & outputs
`5_Report`      | Contains report
`6_ImagesAndVideos` | Conatins all images and videos
`7_Other`      | Archive of other things

# Project Simulation
![Screenshot 2022-03-09 140715](https://user-images.githubusercontent.com/46928815/157403928-d936598f-4bb0-4d31-8508-58e3c8dc2dbe.png)

# Speed Fine
![speedfine](https://user-images.githubusercontent.com/46928815/157418218-c8eb40dd-c0fe-4533-b11d-992e358e2a01.gif) 

### Here if the vehicles are below the speed range of 50 KM's/HR all the speeding fine LED's are off else if the speed range is greater than 50KM's/HR the speeding fine LED's are off


# Zebra Crossing Fine
![Animationzebra](https://user-images.githubusercontent.com/46928815/157416605-5af906bf-66fc-4837-890c-8ff9dd5f7520.gif)

### Here if the vehicle distance w.r.t to zebra corssing is greater than 300 meters i.e if the vehicles are 300 meters w.r.t to the ultrasonic sensor then the vehicle is not no zebra corssing all the Corssing fine LED's are off or else if the distance is less than 300 meters w.r.t to the ultrrasonice sensor then the vehicle is on zebra crossing hence crossing fine LED's are on.

# Traffic lights & boom barrier
![Animation](https://user-images.githubusercontent.com/46928815/157388104-1c0085b0-3cb9-4782-8f16-cf5e052e3744.gif)

### Here the operations are 
* Hault the traffic initially and open all the pedestrain gates for people to pass
* All the lanes become red and the lane traffic starts with lane 1 red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 1 opens and after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 1 closes
* For the 2nd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 2 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 2 closes
* For the 3rd lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 3 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 3 closes
* And for the 4th lane red is turned off yellow is on then yellow is off green is on and the boom barrier of lane 4 opens after some delay yellow is on green is off and yellow is off and red is on and the boom barrier of lane 4 closes






