#include<iostream>
using namespace std;

void transpose(int** arr) {
	int temp;
	for (int i = 0;i < 3;i++) {
		for (int j = i;j < 3;j++) {
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

int lab1_4_main() {
	//分配内存new
	int **arr = new int*[3];//指向指针的指针
	for (int i = 0;i < 3;i++) {
		arr[i] = new int[3];
	}
	//int (*arr)[3]=new int*[3][3]; or like this //指向数组的指针

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			cout << "Enter arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	transpose(arr);

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	//为arr释放内存
	for (int i = 0;i < 3;i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}