#include<iostream>
using namespace std;

inline int isnumber(char);

void i_main() {
	char c;
	while ((c = cin.get()) != '\n') {
		if (isnumber(c)) {
			cout << "digit";
		}
		else {
			cout << "not digit";
		}
	}
}

int isnumber(char c) {
	return c >'9'&& c < '0' ? 1 : 0;
}