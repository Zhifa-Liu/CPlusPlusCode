#include<iostream> 
using namespace std;

void transpse(int a[3][3]) {
	//bΪa��ת��
	int b[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			b[j][i] = a[i][j];
		}
	}
	//��b�ĸ�Ԫ�ظ���a�ĸ�Ԫ��
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			a[i][j] = b[i][j];
		}
	}
}

int lab1_3_main() {
	int a[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			cout << "Enter a["<<i<<"]["<<j<<"]:";
			cin >> a[i][j];
		}
	}
	transpse(a);
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}