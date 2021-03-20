#include<fstream>
#include<iostream>
using namespace std;

int lab1_5_main(char* a, char* b) {
	ifstream fin(a, ios::in | ios::binary);
	ofstream fout(b, ios::out | ios::binary);

	if (!fin) {
		cout << "infile open error" << endl;
		fin.close();
	}
	if (!fout) {
		cout << "outfile open error" << endl;
		fin.close();
	}

	char i = '1';
	char read;
	cout << "Souse file contents:\n";
	while (fin.get(read)) {
		cout << read;
		if (i == '1') {
			fout.put(i);
			fout.put(' ');
			i++;
		}
		if (read == '\n') {
			fout.put('\n');
			fout.put(i);
			fout.put(' ');
			i++;
			continue;
		}
		fout.put(read);
	}
	fin.close();
	fout.close();
	cout << "\nAim file contents:\n";
	ifstream inf(b);
	while (inf.get(read)) {
		cout << read;
	}
	cout << endl;
	inf.close();
	delete[] a;
	delete[] b;
	return 0;
}