#include "Base.h"
#include <iostream>
using namespace std;


Base::Base()
{
	a = 0;
	cout << "Default Construct base.\n";
}

Base::Base(int d)
{
	a = d;
	cout << "Construct base.\n";
}

void Base::print()
{
	cout << a;
}

int Base::getA()
{
	return a;
}


Base::~Base()
{
	cout << "Deconstruct base " << a << endl;
}
