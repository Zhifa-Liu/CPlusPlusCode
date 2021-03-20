#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

#include<algorithm>
using namespace std;

void Show(int a) {
	cout << a;
}

int main() {
	int arr[] = { 4,2,1,8 };

	vector<int> v(arr,arr+4);
	while (!v.empty()) {
		cout << v.back()<<endl;
		v.pop_back();
	}
	for_each(v.begin(), v.end(), Show);

	list<int> li(arr,arr+4);
	list<int>::iterator ite;
	for (ite = li.begin();ite != li.end();ite++) {
		cout << *ite << endl;
	}
	ite=find(li.begin(),li.end(),1);
	if (ite!=li.end()) {
		cout << "Found";
	}else {
		cout << "Not Found";
	}

	map<int, string> m;
	m.insert(pair<int,string>(1,"A"));
	m.insert(map<int,string>::value_type(2,"B"));
	m[3] = "C";
	map<int, string>::iterator it;
	for (it = m.begin();it != m.end();it++) {
		cout << it->first << endl;
		it->second;
	}
	system("pause");
}