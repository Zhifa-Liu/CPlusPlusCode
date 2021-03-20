#include <iostream>
#include "CPoint.h"
#include "CLine.h"
using namespace std;

CPoint operator-(CPoint cpoint1, CPoint cpoint2);
istream& operator>>(istream&, CPoint&);
ostream& operator<<(ostream&, CPoint&);

int main() {
	CPoint cpoint1;
	CPoint *cpoint2 = new CPoint(3,3);
	cpoint1.ShowPoint();
	(*cpoint2).ShowPoint();
	delete cpoint2;

	CPoint c1(2,3);
	CPoint c2(1,2);
	//÷ÿ‘ÿ‘ÀÀ„∑˚+≤‚ ‘
	cout << "Overload + Test" << endl;
	CPoint c3;
	c3 = c1 + c2;
	c3.ShowPoint();
	//÷ÿ‘ÿ‘ÀÀ„∑˚-≤‚ ‘
	cout << "Overload - Test" << endl;
	CPoint c4;
	c4 = c1 - c2;
	c4.ShowPoint();
	//‘ÀÀ„∑˚1÷ÿ‘ÿ<<”Î>>≤‚ ‘
	cout << "Overload << and >> Test" << endl;
	cout << "Enter x,y(x y) of point" << endl;
	CPoint c5;
	cin >> c5;
	cout << c5;
	//CLine ≤‚ ‘
	CLine cl1;
	CLine cl2(0,0,3,4);
	CLine cl3(c1,c2);
	cl1.ShowLine();
	cout<<cl1.Distance()<<endl;
	cl2.ShowLine();
	cout << cl2.Distance() << endl;
	cl3.ShowLine();
	cout << cl3.Distance() << endl;

	system("pause");
}

CPoint operator-(CPoint cpoint1, CPoint cpoint2) {
	CPoint c(cpoint1.GetX() - cpoint2.GetX(), cpoint1.GetY() - cpoint2.GetY());
	return c;
}

istream & operator>>(istream& i, CPoint & cpoint)
{
	int x, y;
	i >> x >> y;
	cpoint.SetX(x);
	cpoint.SetY(y);
	return i;
}

ostream & operator<<(ostream& o, CPoint & cpoint)
{
	cpoint.ShowPoint();
	return o;
}