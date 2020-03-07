/*
 *
 * PID.h
 *
 *  Created on: 05.03.2020
 *      Author: danie
 */

#ifndef CLASSES_PID_H_
#define CLASSES_PID_H_
#include "main.h"

class PID {
public:
	PID();
	void setKp(uint16_t Kp);
	void setKd(uint16_t Kd);
	void setKi(uint16_t Ki);
	void setProbe(uint16_t Dt);
	void setU(uint16_t U);
	void readY(uint16_t Y);
	uint16_t getOutput();
	void pidLoop();
	virtual ~PID();

private:
	uint16_t kp;
	uint16_t ki;
	uint16_t kd;
	uint16_t output;
	uint16_t dt=20;
	uint16_t ep=0;
	uint16_t en=0;
	uint16_t y;
	uint16_t u;
	double sumOfIntegral=0.;


};


#endif /* CLASSES_PID_H_ */
