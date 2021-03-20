#include "CCircle.h"
#include <iostream>
using namespace std;

CCircle::CCircle(ColorType color,int a):CShape(color)
{
	r = a;
}

CCircle::~CCircle()
{
}

void CCircle::draw()
{
	cout << "This is a circle : r="<<r<<"."<<endl;
}
