/*
 * PID.cpp
 *
 *  Created on: 05.03.2020
 *      Author: danie
 */

#include <PID.h>

uint16_t PID::getOutput()
{

}

void PID::setKp(uint16_t Kp)
{
	if (Kp>100)
		kp=100;
	else
		kp=Kp;
}

void PID::setKd(uint16_t Kd)
{
	if (Kd>100)
		kd=100;
	else
		kd=Kd;
}

void PID::setKi(uint16_t Ki)
{
	if (Ki>100)
		ki=100;
	else
		ki=Ki;
}

PID::PID()
{
	// TODO Auto-generated constructor stub
}

PID::~PID()
{
	// TODO Auto-generated destructor stub
}

