#include "Derived.h"
#include <iostream>
using namespace std;

int main()
{
	{
		Derived d[2];
		d[0] = Derived(3, 4, 5);
		d[1] = Derived(7, 8, 9);
		for (int i = 0; i < 2; i++)
			d[i].print();
	}
	system("pause");
	return 0;
}
