/*
 * PID.h
 *
 *  Created on: 05.03.2020
 *      Author: danie
 */

#ifndef CLASSES_PID_H_
#define CLASSES_PID_H_

class PID {
public:
	PID();

	virtual ~PID();
private:
	int kp;
	int ki;
	int kd;
};

#endif /* CLASSES_PID_H_ */
