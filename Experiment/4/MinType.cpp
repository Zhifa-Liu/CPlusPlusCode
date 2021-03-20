#include <iostream>
using namespace std;
template <class T>

T min(T& a, T& b) {
	return a > b ? b : a;
}

const char* min(const char* a, const char* b) {
	return strcmp(a, b) < 0 ? a : b;
}

int min_main() {
	int x = 10, y = 15;
	cout << "Min value between "<<x<<" and "<<y<<" : "<<min(x, y) << endl;

	const char* a = "abc";
	const char* b = "xyz";
	cout << "Min value between " << a << " and " << b <<" : "<< min(a, b) << endl;

	return 0;
}