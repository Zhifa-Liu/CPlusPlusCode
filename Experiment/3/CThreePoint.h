#pragma once
#include "CPoint.h"

class CThreePoint : public CPoint
{
protected:
	int z;
public:
	CThreePoint(int = 0, int = 0, int = 0);
	CThreePoint(CThreePoint&);
	~CThreePoint();
	int GetZ();
	void SetZ(int pz);
	void ShowPoint();
};