#pragma once
#include "CPoint.h"
class CLine
{
	private:
		CPoint pt1, pt2;  //pt1和pt2分别代表该线段的起点和终点
	public:
		CLine();
		~CLine()=default;
		CLine(int x1, int y1, int x2, int y2);
		CLine(CPoint p1, CPoint p2);
		double Distance();  //计算该线段长度的成员函数
		void ShowLine();
};
