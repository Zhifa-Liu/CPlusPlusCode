#pragma once

class CPoint
{
protected:
	int x, y;
public:
	CPoint(int px = 0, int py = 0);
	CPoint(CPoint&);
	~CPoint();
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
	virtual void ShowPoint();
	CPoint operator+ (CPoint cpiont);
};
