#include "MotorCar.h"
#include <iostream>
using namespace std;

MotorCar::MotorCar(int ms,int w):Vehicle(ms,w)
{
}

MotorCar::~MotorCar()
{
}

void MotorCar::run()
{
	cout << "MotorCar is running." << endl;
}

void MotorCar::stop()
{
	cout << "MotorCar is stopped."<<endl;
}
