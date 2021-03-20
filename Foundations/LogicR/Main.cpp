#include<iostream>
#include "Classifier.h"

int main() {
	Classifier c;
	c.ReadData("./bupa.txt");
	c.Preprocess("1bupa.txt");
	c.OutputData();
	c.Train();
	cout << "The accuracy is : " << c.Test() << endl;
	system("pause");
	return 0;
}