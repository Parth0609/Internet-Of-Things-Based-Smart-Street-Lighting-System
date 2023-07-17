# Internet-Of-Things-Based-Smart-Street-Lighting-System

Project Overview 
1. INTRODUCTION: The present Lighting system on roads is like a menage 
lighting system i.e., once the lights have been turned on, they will stay on until or 
unless someone switches back the switch and turns them off manually, regardless 
of whether someone is present inside the room or not (vehicles on the road in this 
case). In the traditional system the lights are turned on before the evening and they 
stay on until next morning, staying on for the periods even when there are no 
vehicles on the road. This system also requires significant manpower. In the 
proposed model all manual operation is eliminated alongside saving energy 
consumption.
2. PROBLEM STATEMENT: Today, India is the fifth largest energy 
consumer in the world. While the planet consumes 12000 million tonnes of oil 
equivalent (MTOE) of energy resources, India consumes 4.4% of the planet’s total 
(524.2 MTOE). India is Ranked 104th in per capita electricity consumption index 
among the whole world. Despite being a heavy energy consumer a large part of 
India’s energy comes from non-renewable sources. As of March 2019, India 
produced 75.38 % of its total energy production using non-renewable sources 
(substantially Fossil Energy). Coal alone accounts for 86.78 % of electricity 
generated in FY20. Still a Large part of this energy is wasted every year due to 
traditional switch-based street lighting system. Old street lighting systems account 
for around 6-7 % of the total 20.66 % of energy losses in the country. 
Another aspect of the problem is loss of infrastructure. Reports indicate that the 
average lifespan of Argon Bulbs and Halogen Lamps is significantly reduced by 
around 10 percent due to nonstop operation in the traditional street lighting 
systems. These problems can lead to significant losses of a country(s) 
infrastructure. 
Power saving is a matter of concern because natural sources of power are getting 
diminished due to unregulated usage and various other reasons. 
3. PROJECT OBJECTIVE: The street lighting is one of the largest energy 
expenses for a city. An intelligent street lighting system can cut municipal street 
lighting costs as much as 50% - 70%.This project proposes a IOT application, 
designed specifically to solve the power wastage pro. This application provides an 
IR sensors-based System where the lights can turn on and off on their own, 
without any human guidance depending on the time of the day, Weather, and 
Intensity of the traffic on the road where system is enforced. Here the system had 
to be made to be able to identify any vehicle or pedestrian on the road and work 
accordingly. 
Secondly the system had to be made more and more effective, so we have used a 
minimalistic approach by using n similar smaller systems on a single road patch 
rather than using a single system for a long road lowering the functional costs of 
the system. However, the onetime implementation cost of system will increase due 
to usage of more sensors, but again it will be beneficial in case of system or device 
failures. The whole system won’t be impaired in case of a faulty sensor sparing 
the inconvenience and repair costs. 
4. ABOUT: The project is an Internet of Things-based application for Smart street 
Lighting system using Infra-Red Sensors To detect presence of vehicles or 
pedestrians on a street or road, thus enabling the Lighting system to control itself 
without any external or human guidance. The system will turn on the lights once a 
vehicle or pedestrian enters the street and will turn of only once all the vehicles 
have passed and the street is completely empty. In case of highway the subsequent 
patch of the road will be lit once the vehicle crosses the exit sensor on current 
patch. This project proposes a model for modifying current street lighting system 
by using smart system to minimise electricity and infrastructure consumption.
This system guarantees large amount of energy and infrastructure savings by 
implementing a system which functions only when needed and allows the 
infrastructure to rest while not in use alongside decreasing power and energy 
consumption. The automation also intends to reduce manpower with help of 
intelligent systems and devices. 
5. PROBLEMS (in classical streetlight system):
 Lights remain on even in the presence of natural light. 
 Works on manual switches. 
 Requires human guidance. 
 Higher power consumption. 
 Loss of infrastructure 
6. ADVANTAGES (Proposed system): 
 Automatic Functioning of lights. 
 Low maintenance. 
 Reduction of light pollution. 
 Manpower reduced. 
 Lower energy consumption. 
 Lifespan of infrastructure improved. 
7. APPLIANCES USED: 
 Arduino Uno Wi-Fi (ESP8266) 
 Infra-red Sensors 
 Breadboards
 Led indicators 
 Jumper Wires 
 USB Cable 
 Power Supply (3 Volts) 
8. SOFTWARE COMPONENTS USED:
 Arduino IDE 
 ESP8266WiFi.h Module 
 Windows Driver Package - Ports 
9. COMPONENTS DESCRIPTION:
 Arduino Uno Wi-Fi (ESP8266): node MCU is a pairing of 
firmware and hardware based around the esp8266-12 e-module 
which is a low-cost Wi-Fi enabled microchip with a full Tcp/Ip 
stack and microcontroller capabilities. originally the developers 
only tied the term node MCU to their open-source firmware which 
ran on the esp8266 - 12 e base development kit. the ESP8266 chip 
has a single10 bit ADC with an input range of 0 to 1 volt. the 
ESP8266 development boards include everything you need to build 
prototypes. They have an onboard SB to serial programmer, a 3.3 
voltage regulator, LEDs, buttons, and a voltage divider for the 
ADC. They are also breadboard friendly. This makes them ready to 
program out of the box. You can use them to build custom smart 
home devices. For example, you can monitor the temperature in 
your house, check the battery level in your car, and play mp3 
notifications. 
 Infra-red Sensors: The IR in the name stands for Infrared Radiation. 
It is a type of light that falls outside the visible spectrum but can be 
felt as heat. The LED here is the IR LED. It works as the IR 
transmitter. The component next to the IR LEDs a photodiode that 
works as the receiver. The transmitter emits IR light, and the 
receiver keeps checking for reflected light. If an object is present in 
front of the sensor, the light gets reflected after hitting the object 
and the receiver detects it. This is how an IR sensor detects objects 
ahead of it. The blue knob here is a potentiometer. You can control 
the range i.e., from how far you would like to detect the object by 
changing the value of the potentiometer. The IR sensor is a digital 
sensor, thus, its output will either be 1 or 0. 
 Arduino IDE: The Arduino Software (IDE) is an open-source 
software, and it makes easy to code and upload it to the board. The 
environment is written in Java. This software is often used with 
any Arduino board
