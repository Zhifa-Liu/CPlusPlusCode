#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

void Show(int v) {
	cout << v << " ";
}

int vector_use_main() {
	cout << "Enter integers (0 to quit):" << endl;
	vector<int> v;
	int integer;
	cin>>integer;
	while (integer != 0) {
		v.push_back(integer);
		cin >> integer;
	}

	sort(v.begin(),v.end());//排序

	cout << "Member function output:"<<endl;
	for (int i = 0;i < v.size() ;i++) {
		cout << v[i]<<" ";//重载的成员函数
	}
	cout << endl;

	cout << "Vector output:"<<endl;
	vector<int>::iterator ite;
	for (ite = v.begin();ite != v.end();ite++) {
		cout << *ite << " ";
	}
	cout << endl;

	cout << "For each output:"<<endl;
	for_each(v.begin(), v.end(), Show);
	cout << endl;

	return 0;
}