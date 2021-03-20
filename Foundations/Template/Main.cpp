#include <iostream>
using namespace std;
#include "Array.cpp"
template <class T>
 
T max(T a,T b) {
	return a > b ? a : b;
}

const char* max(const char* a,const char* b) {
	return strcmp(a,b)>0?a:b;
}

int main() {
	int x = 10, y = 15;
	cout << max(x,y)<<endl;
	const char* a = "xyz";
	const char* b = "abc";
	cout << max(a,b)<<endl;

	int n;
	cin >> n;
	Array<int> arr(n);
	for (int i = 0;i < n;i++) {
		arr[i] = i;
	}
	for (int i = 0;i < n;i++) {
		cout << arr[i]<<endl;
	}
	system("pause");
}