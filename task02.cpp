// task02.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "API.h"

using namespace std;

int main()
{
	API api;
	api.readJSON("topology.json");
	system("pause");
    return 0;
}

