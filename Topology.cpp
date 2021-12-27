#include "stdafx.h"
#include "Topology.h"


Topology::Topology(char * id, Device * components)
{
	strcpy(this->id, id);
	this->components = components;
}

Topology::~Topology()
{
}
