/*
 * PID.h
 *
 *  Created on: 05.03.2020
 *      Author: Karolina
 */

#ifndef CLASSES_PID_H_
#define CLASSES_PID_H_

#include "main.h"
#include <Tools.h>

class PID {
public:
	PID(float kp = 0.0f, float ki = 0.0f, float kd = 0.0f);

	virtual ~PID();
	void setKp(float KP);
	void setKi(float KI);
	void setKd(float KD);
	void measure(uint8_t M);
	void set(float S);

	float getCV(float pv, float sp);

	void setDt(float DT);

	void enableP(uint8_t enable = true);
	void enableI(uint8_t enable = true);
	void enableD(uint8_t enable = true);


private:
	uint8_t proportional_enable, integral_enable, derivative_enable;
	float integral, proportional, derivative,output;
	float kp, ki, kd, dt;
	float set_point;
	float measured;
	float last_error;

	int32_t now_time;
	int32_t before_time;

	void calculate();
};


#endif /* CLASSES_PID_H_ */
