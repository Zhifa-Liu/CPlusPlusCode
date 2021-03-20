#pragma once
class Vehicle
{
protected:
	int maxSpeed;
	int weight;
public:
	Vehicle(int=0,int=0);
	~Vehicle();
	virtual void run()=0;
	virtual void stop()=0;
};

