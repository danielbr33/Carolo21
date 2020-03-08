/*
 * Flag.h
 *
 *  Created on: 08.03.2020
 *      Author: danie
 */

#ifndef CLASSES_FLAG_H_
#define CLASSES_FLAG_H_
#include "main.h"
#include <string>
using namespace std;


class Flag
{
private:
	string name;
	uint16_t value;
public:
	Flag(string name);
	virtual ~Flag();
	void setValue(uint16_t value);
	uint16_t getValue();
};

#endif /* CLASSES_FLAG_H_ */
