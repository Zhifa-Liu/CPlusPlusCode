#pragma once
#include "Vehicle.h"
class Bicycle :virtual public Vehicle
{
public:
	Bicycle(int=0,int=0);
	~Bicycle();
	void run();
	void stop();
};

