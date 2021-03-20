#include <iostream>
#include "mains.h"
#include "Stack.h"
#include "Student.h"
//#include "List.h"
using namespace std;

int main() {
	min_main();

	/*Stack<int> ist;
	ist.push(3);
	ist.push(5);
	ist.push(4);
	cout << "Enter stack  seqence: 3、5、4" << endl;
	cout << "Pop from stack:";
	while (!ist.isEmpty()) {
		cout << ist.pop()<<" ";
	}
	cout << endl;
	Stack<float> fst;
	fst.push(3.6f);
	fst.push(4.8f);
	fst.push(1.2f);
	cout << "Enter stack  seqence: 3.6、4.8、1.2" << endl;
	cout << "Pop from stack:";
	while (!fst.isEmpty()) {
		cout << fst.pop() << " ";
	}
	cout << endl;
	Stack<char> cst;
	cst.push('a');
	cst.push('b');
	cst.push('c');
	cout << "Enter stack  seqence: a、b、c" << endl;
	cout << "Pop from stack:";
	while (!cst.isEmpty()) {
		cout << cst.pop() << " ";
	}
	cout << endl;*/

	vector_use_main();

	/*Student stu1("20181213","Jone",20,Man);
	Student stu2("20181219", "Mary", 19, Woman);
	Student stu3("20181013", "Jack", 21, Man);
	Student stu4("20171218", "Tom", 22, Man);
	Student stus[4] = {stu1,stu2,stu3,stu4};

	List<Student> stusList;
	for (int i = 0;i < 5;i++) {
		stusList.Add(stus[i]);
	}
	cout<<"Initial Student List print:"<<endl;
	stusList.PrintList();

	cout << "Expel student Tom:"<<endl;
	stusList.Remove(stu4);
	stusList.PrintList();
	Student stu5("20191010", "Li", 20, Woman);
	cout << "Add student:";
	stusList.Add(stu5);
	stusList.PrintList();*/

	system("pause");
}