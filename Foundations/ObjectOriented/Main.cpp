#include<iostream>
#include "Clock.h"
#include "InheritanceConstructor.cpp"
using namespace std;

int main() {
	Clock c1,c2(8,0,0);
	c1.setTime(12,12,12);
	Clock c3(c2);
	c1.showTime();
	c2.showTime();

	ICmain();
	system("pause");
	return 0;
}
//main()执行完成时，调用析构函数释放c2，c1（栈）