#pragma once
#include <string>
#include "Device_Ranges.h"

using namespace std;

class Device : public Device_Ranges
{
	char* type;
	char* id;
	int nodeNumber = 0;
	char* nodes[5];
	char* values[5];


public:
	Device(char*,char*,char*,int,int,int);

	char* getType();
	char* getId();

	void setType(char*);
	void setId(char*);

	void addNode(char*, char*);


	~Device();
};

