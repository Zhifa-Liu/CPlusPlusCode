#include <iostream>
#include "CPoint.h"
using namespace std;

int CPoint::nCount = 0;

CPoint::CPoint(int px, int py)
{
	x = px;
	y = py;
	nCount++;
}

CPoint::CPoint(CPoint & cpoint)
{
	x = cpoint.x;
	y = cpoint.y;
	nCount++;
}

CPoint::~CPoint()
{
	nCount--;
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
	CPoint c(this->x+cpoint.GetX(),this->y+cpoint.GetY());
	return c;
}