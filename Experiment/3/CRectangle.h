#pragma once
#include "CShape.h"

class CRectangle:public CShape
{
public:
	CRectangle(ColorType);
	~CRectangle();
	void draw();
};