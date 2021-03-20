#include "Bicycle.h"
#include <iostream>
using namespace std;
#include "Bicycle.h"
#include "MotorCar.h"

Bicycle::Bicycle(int ms,int w):Vehicle(ms,w)
{
}

Bicycle::~Bicycle()
{
}

void Bicycle::run()
{
	cout << "Bicycal is running." << endl;
}

void Bicycle::stop()
{
	cout << "Bicycle is stopped." << endl;
}
