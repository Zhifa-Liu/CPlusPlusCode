#include "Derived.h"
#include <iostream>
using namespace std;

Derived::Derived()
{
	b = 0;
	cout << "Default construct Derived.\n";
}

Derived::Derived(int i, int j, int k) :Base(i), m(j), b(k)
{
	cout << "Construct Derived.\n";
}

void Derived::print()
{
	Base::print();
	cout << "," << b << "," << m.getA() << endl;
}

Derived::~Derived()
{
	cout << "Deconstruct Derived " << b << endl;
}

