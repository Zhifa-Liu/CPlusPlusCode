#include "CRectangle.h"
#include "CShape.h"
#include <iostream>
using namespace std;

CRectangle::CRectangle(ColorType color=Black):CShape(color)
{
}

CRectangle::~CRectangle()
{
}

void CRectangle::draw()
{
	cout << "This is a rectngle."<<endl;
}
