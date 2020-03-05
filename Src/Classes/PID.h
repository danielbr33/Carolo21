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
	uint16_t getOutput();
	virtual ~PID();
private:
	uint16_t kp;
	uint16_t ki;
	uint16_t kd;
};


#endif /* CLASSES_PID_H_ */
