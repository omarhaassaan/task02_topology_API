#include "stdafx.h"
#include "Device_Ranges.h"
#include <string>


Device_Ranges::Device_Ranges(char* name,int def,int max,int min)
{
	setName(name);
	setDef(def);
	setMax(max);
	setMin(min);
}

char * Device_Ranges::getName()
{
	return this->name;
}

int Device_Ranges::getDef()
{
	return this->def;
}

int Device_Ranges::getMax()
{
	return this->max;
}

int Device_Ranges::getMin()
{
	return this->min;
}

void Device_Ranges::setName(char * str)
{
	strcpy(this->name, str);
}

void Device_Ranges::setDef(int d)
{
	this->def = d;
}

void Device_Ranges::setMax(int m)
{
	this->max = m;
}

void Device_Ranges::setMin(int m)
{
	this->min = m;
}


Device_Ranges::~Device_Ranges()
{
}
