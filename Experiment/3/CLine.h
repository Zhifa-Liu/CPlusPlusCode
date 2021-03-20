#pragma once
#include "CShape.h"
#include "CPoint.h"

class CLine:public CShape
{
private:
	CPoint pt1, pt2; 
public:
	CLine(ColorType = Black);
	~CLine() = default;
	CLine(int=0, int=0, int=0, int=0, ColorType=Black);
	CLine(CPoint, CPoint ,ColorType);
	double Distance(); 
	void ShowLine();
	void draw();
};