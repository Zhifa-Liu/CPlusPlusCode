#include <iostream>
#include "CPoint.h"
using namespace std;

CPoint::CPoint(int px, int py)
{
	x = px;
	y = py;
}

CPoint::CPoint(CPoint & cpoint)
{
	x = cpoint.x;
	y = cpoint.y;
}

CPoint::~CPoint()
{
}

int CPoint::GetX()
{
	return x;
}

int CPoint::GetY()
{
	return y;
}

void CPoint::SetX(int px)
{
	x = px;
}

void CPoint::SetY(int py)
{
	y = py;
}

void CPoint::ShowPoint()
{
	cout << "(" << x << "," << y << ")" << " Address: "<< this <<endl;
}

CPoint CPoint::operator+ (CPoint cpoint)
{
	CPoint c(this->x + cpoint.GetX(), this->y + cpoint.GetY());
	return c;
}