#pragma once
#include "Bicycle.h"
#include "MotorCar.h"

class MotorCycle:public MotorCar,public Bicycle
{
public:
	MotorCycle(int=0,int=0);
	~MotorCycle();
	void run();
	void stop();
};
