#pragma once
#include <string>
#include "Topology.h"

using namespace std;

class API
{
	Topology* topologies;
	char* findValue(const char*);
public:
	API();
	bool readJSON(string);
	bool writeJSON(int);
	Topology* queryTopologies();
	bool deleteTopology(int);
	Device* queryDevices(int);
	Device* queryDevicesWithNetlistNode(int, char*);
	~API();
};

