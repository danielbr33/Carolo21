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
	numberOfFlags+=1;
    Flag ** newTab = new Flag*[numberOfFlags];
    for (uint8_t i=0; i<numberOfFlags; i++)
    	newTab[i]=tab[i];
    newTab[numberOfFlags]=this;
    tab=newTab;  //w tej linijce jest blad, jak wstawic wartosci z tymczasowej tablicy do tablicy statycznej klasy
    delete[] newTab;
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

 uint16_t Flag::getNumberOfFlags()
{
	return numberOfFlags;
}

