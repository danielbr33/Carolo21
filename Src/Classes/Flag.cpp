/*
 * Flag.cpp
 *
 *  Created on: 08.03.2020
 *      Author: danie
 */

#include <Flag.h>

Flag::Flag(string name)
{
	// TODO Auto-generated constructor stub
	this->name=name;
}

Flag::~Flag() {
	// TODO Auto-generated destructor stub
}

void Flag::setValue(uint16_t value)
{
	this->value=value;
}

uint16_t Flag::getValue()
{
	return value;
}
