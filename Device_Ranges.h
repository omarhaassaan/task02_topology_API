#pragma once

class Device_Ranges
{
	char* name;
	int def, min, max;
public:
	Device_Ranges(char*,int,int,int);

	char* getName();
	int getDef();
	int getMax();
	int getMin();

	void setName(char*);
	void setDef(int);
	void setMax(int);
	void setMin(int);

	~Device_Ranges();
};

