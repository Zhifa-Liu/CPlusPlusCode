#include "CLine.h"
#include <cmath>
#include <iostream>
using namespace std;

CLine::CLine()
{
	pt1 = CPoint(0,0);
	pt2 = CPoint(0,0);
}

CLine::CLine(int x1, int y1, int x2, int y2):pt1(x1,y1),pt2(x2,y2)
{
	//pt1 = CPoint(x1,y1);
	//pt2 = CPoint(x2,y2);
}

CLine::CLine(CPoint p1, CPoint p2)
{
	pt1 = p1;
	pt2 = p2;
}

double CLine::Distance()
{
	return sqrt(pow(pt1.GetX()-pt2.GetX(),2)+pow(pt1.GetY()-pt2.GetY(),2));
}

void CLine::ShowLine()
{
	cout << "(" << pt1.GetX() << "," << pt1.GetY() << ")" << "------>"
		 << "(" << pt2.GetX() << "," << pt2.GetY() << ")" << endl;
}


