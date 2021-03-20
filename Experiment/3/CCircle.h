#pragma once
#include "CShape.h"

class CCircle:public CShape
{
private:
	int r;
public:
	CCircle(ColorType=Black,int=0);
	~CCircle();
	void draw();
};