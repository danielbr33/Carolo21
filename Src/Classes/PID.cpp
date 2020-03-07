/*
 * PID.cpp
 *
 *  Created on: 05.03.2020
 *      Author: danie
 */

#include <PID.h>

uint16_t PID::getOutput()
{
	return U;
}

void PID::setKp(uint16_t kp)
{
	if (Kp>100)
		kp=100;
	else
		kp=Kp;
}

void PID::setTd(uint16_t td)
{
	if (td>100)
		Td=100;
	else
		Td=td;
}

void PID::setTi(uint16_t ti)
{
	if (ti>100)
		Ti=100;
	else
		Ti=ti;
}

void PID::setProbe(uint16_t Dt){
	dt=Dt;
}

void PID::readEn(uint16_t value){
	en=value;
}

void PID::pidLoop()
{
	//readEn(...);  //skad maja byc pobrane dane o uchybie
	sumOfIntegral+=((ep+en)/2)*dt/1000;
	differential=(en-ep)/dt*1000;
	U=Kp*(en+(1/Ti)*sumOfIntegral+Td*differential);
	ep=en;
}

PID::PID()
{
	// TODO Auto-generated constructor stub
}

PID::~PID()
{
	// TODO Auto-generated destructor stub
}

