#include <iostream>
#include "CPoint.h"
#include "CThreePoint.h"
#include "CShape.h"
#include "CLine.h"
#include "CRectangle.h"
#include "CCircle.h"
#include "Vehicle.h"
#include "Bicycle.h"
#include "MotorCar.h"
#include "MotorCycle.h"
using namespace std;

int main() {
	CThreePoint p(1,2,3);
	p.ShowPoint();
	CPoint* p1 = &p;
	p1->ShowPoint();

	CShape* c[3];
	CLine cl(0,0,1,1,Blue);
	CRectangle cr(Green);
	CCircle cc(Yellow);
	c[0] = &cl;
	c[1] = &cr;
	c[2] = &cc;
	for (int i = 0;i < 3;i++) {
		c[i]->draw();
	}

// 抽象类不能实例化
//	Vehicle v;
//	v.run();
//	v.stop();

	MotorCar ca;
	Bicycle b;
	MotorCycle cy;

	ca.run();
	ca.stop();
	b.run();
	b.stop();
	cy.run();
	cy.stop();

	Vehicle* ver[3];
	ver[0] = &ca;
	ver[1] = &b;
	ver[2] = &cy;
	for (int i =0;i < 3;i++) {
		ver[i]->run();
		ver[i]->stop();
	}
	system("pause");
}