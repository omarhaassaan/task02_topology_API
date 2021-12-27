#include "stdafx.h"
#include "Device.h"


Device::Device(char* type, char* id, char* name, int def, int max, int min) :Device_Ranges(name, def, max, min)
{
	this->type = type;
	this->id = id;
}

char* Device::getType()
{
	return this->type;
}

char* Device::getId()
{
	return this->id;
}

void Device::setType(char* str)
{
	strcpy(this->type, str);
}

void Device::setId(char* str)
{
	strcpy(this->id, str);
}

void Device::addNode(char * node, char * value)
{
	strcpy((this->nodes)[nodeNumber], node);
	strcpy((this->values)[nodeNumber], value);
	nodeNumber++;
}


Device::~Device()
{
}
