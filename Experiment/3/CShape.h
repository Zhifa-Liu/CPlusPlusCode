#pragma once
enum ColorType { White, Black, Red, Green, Blue, Yellow, Magenta, Cyan };

class  CShape
{
protected:
	ColorType  color;
public:
	CShape(ColorType);
	virtual void draw()=0;
};
