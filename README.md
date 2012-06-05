xcj_swarm
=========

Xinchejian Swarm Robot project

Introduction:

Build a swarm of robots with autonomus behavior to achieve their goals by interacting with each other using IR communication.

Requirements:

Each basic robot contains the following:
	
	- 1x microcontroller Attiny2313
	- 1x motor controller L293D
	- 2x gear motors
	- 1x LiPo battery 3.7V
	- 1x IR sensor + IR emitter
	- 1x microfon

A custom made PCB will be used. This PCB will be mounted into a 3D printed casing which contains the gear motors and the wheels as well the IR sensor array.

Maximum price for the basic robot should not exceed 5US$


Each robot will have a basic programming and basic hardware platform. 
The basic programming is:

1. Self protection: 
	- check your battery status
	- find the charging station when battery runs low
	- avoid obstacles and other robots
	- search for power (sunlight etc.)
2. Community (swarm) needs:
	- search for building material
	- search for dead robots
	- bring dead robots to the charging station
	- help dead robots with a charger robot
	- tell others where to find power (sunlight)
	- tell others where is an obstacle or danger

Folder structure:

/kicad kicad schematics and PCB design files

More at the XinCheJian website www.xinchejian.com

//Will be updated...

This is the last change from Lutz
