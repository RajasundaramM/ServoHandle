//----------------------------------------------
// ServoHandle.h
// Author: Rajasundaram Mathiazhagan
// https://www.linkedin.com/in/rajasundaramm/
//----------------------------------------------
#ifndef ServoHandle_h
#define ServoHandle_h

#include<Arduino.h>
#include<Servo.h>

class ServoHandle{
public:
int pin, angle, mini, maxi;
Servo ser;

ServoHandle();
init(int p, int initangle, int minlim, int maxlim);
pos(int ang, int del);
};

#endif
