#include<iostream>
using namespace std;
#include "Clock.h"

Clock::Clock()
{

}

Clock::Clock(int hour,int minute,int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

Clock::Clock(Clock & c)
{
	hour = c.hour;
	minute = c.minute;
	second = c.second;
}

Clock::~Clock()
{
}

void Clock::setTime(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Clock::showTime()
{
	// TODO: 在此处添加实现代码.
	cout << hour << ";"<<minute << ":" << second<<endl;
}
