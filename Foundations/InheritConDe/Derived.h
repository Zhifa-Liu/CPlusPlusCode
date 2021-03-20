#pragma once
#include "Base.h"

class Derived :public Base
{
	private:
		int b;
		Base m;
	public:
		Derived();
		Derived(int, int, int);
		void print();
		~Derived();
};


