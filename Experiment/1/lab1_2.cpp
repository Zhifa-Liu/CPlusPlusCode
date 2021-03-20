#include<iostream> 
using namespace std;

int max(int a,int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int max(int a,int b,int c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}else {
		if (b > c) {
			return b;
		}
		else {
			return c;
		}
	}
}

double max(double a,double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

double max(double a,double b,double c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b > c) {
			return b;
		}
		else {
			return c;
		}
	}
}

int lab1_2_main() {
	int a, b, c, maxvalue1;
	cout << "Enter two integers:";
	cin >> a;
	cin >> b;
	maxvalue1 = max(a ,b);
	cout << "Max Value():"<<maxvalue1<<endl;
	cout << "Enter three integers: ";
	cin >> a;
	cin >> b;
	cin >> c;
	maxvalue1 = max(a ,b ,c);
	cout << "Max Value():"<<maxvalue1<<endl;

	double x, y, z, maxvalue2;
	cout << "Enter two doubles:";
	cin >> x;
	cin >> y;
	maxvalue2 = max(x, y);
	cout << "Max Value():" << maxvalue2<<endl;
	cout << "Enter three doubles: ";
	cin >> x;
	cin >> y;
	cin >> z;
	maxvalue2 = max(x, y, z);
	cout << "Max Value():" << maxvalue2<<endl;
	return 0;
}