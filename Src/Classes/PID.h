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
	void setKp(uint16_t kp);
	void setTd(uint16_t td);
	void setTi(uint16_t ti);
	void setProbe(uint16_t Dt);
	void readEn(uint16_t value);
	uint16_t getOutputLoop(uint16_t setPoint, uint16_t processVariabl);

	virtual ~PID();

private:
	uint16_t Kp;
	uint16_t Ti;
	uint16_t Td;
	uint16_t dt=20;
	uint16_t ep=0;
	uint16_t en=0;
	uint16_t U;
	uint16_t sumOfIntegral=0.;
	uint16_t differential;
	void pidLoop();
};


#endif /* CLASSES_PID_H_ */
