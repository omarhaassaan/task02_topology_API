#pragma once
#include "Device.h"
class Topology
{
	char* id;
	Device* components;
public:
	Topology(char*, Device*);
	~Topology();
};

