//----------------------------------------------
// ServoHandle.cpp
// Author: Rajasundaram Mathiazhagan
// https://www.linkedin.com/in/rajasundaramm/
//----------------------------------------------
#include "Arduino.h"
#include "Servo.h"
#include "ServoHandle.h"

ServoHandle :: ServoHandle(){

}

ServoHandle :: init(int p, int initangle, int minlim, int maxlim){
this->pin = p;
this->ser.attach(this->pin);
this->mini=minlim;
this->maxi=maxlim;
this->pos(initangle,1000);
}

ServoHandle :: pos(int ang, int del){
if(ang>this->maxi){ang = this->maxi;}
if(ang<this->mini){ang = this->mini;}
this->ser.write(ang);
this->angle = ang;
delay(del);
}
