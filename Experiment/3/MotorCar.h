#pragma once
#include "Vehicle.h"
class MotorCar:virtual public Vehicle
{
public:
	MotorCar(int=0,int=0);
	~MotorCar();
	void run();
	void stop();
};
