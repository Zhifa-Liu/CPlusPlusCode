#include "CThreePoint.h"
#include <iostream>
using namespace std;

CThreePoint::CThreePoint(int px, int py, int pz)
{
	x = px;
	y = py;
	z = pz;
}

CThreePoint::CThreePoint(CThreePoint & p)
{
	x = p.x;
	y = p.y;
	z = p.z;
}

int CThreePoint::GetZ()
{
	return z;
}

void CThreePoint::SetZ(int pz)
{
	z = pz;
}

void CThreePoint::ShowPoint()
{
	cout << "(" << x << "," << y << "," << z << ")" << " Address: " << this << endl;
}

CThreePoint::~CThreePoint()
{
}
