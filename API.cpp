#include "stdafx.h"
#include "API.h"
#include <iostream>
#include <fstream>


API::API()
{
}

char* API::findValue(const char* str) {
	int tempIdx = 0;
	while (str[tempIdx++] != ':');
	int valueIdx = tempIdx + 2;
	int size = 0;
	while (str[valueIdx++] != '\"')
		size++;
	char* value = new char;
	valueIdx = tempIdx + 2;
	int idx = 0;
	while (str[valueIdx] != '\"') {
		value[idx++] = str[valueIdx++];
	}
	value[idx] = '\0';
	return value;
}

bool API::readJSON(string fileName)
{
	string myText;
	ifstream MyReadFile(fileName);
	while (getline(MyReadFile, myText)) {
		//cout << myText<<endl;
		// id
		if (myText.find("\"id\"") != string::npos) {
			cout << findValue(myText.c_str())<<endl;
		}
		// type	
		if (myText.find("\"type\"") != string::npos) {
			cout << findValue(myText.c_str()) << endl;
		}
		// id
		if (myText.find("\"id\"") != string::npos) {
			cout << findValue(myText.c_str()) << endl;
		}
		if (myText.find("\"default\"") != string::npos) {
			cout << findValue(myText.c_str()) << endl;
		}
		if (myText.find("\"min\"") != string::npos) {
			cout << findValue(myText.c_str()) << endl;
		}
		if (myText.find("\"max\"") != string::npos) {
			cout << findValue(myText.c_str()) << endl;
		}

	}


	return true;
}

bool API::writeJSON(int)
{
	return false;
}

Topology * API::queryTopologies()
{
	return nullptr;
}

bool API::deleteTopology(int)
{
	return false;
}

Device * API::queryDevices(int)
{
	return nullptr;
}

Device * API::queryDevicesWithNetlistNode(int, char *)
{
	return nullptr;
}


API::~API()
{
}
