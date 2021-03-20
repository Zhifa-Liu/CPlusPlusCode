#include "Classifier.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


Classifier::Classifier(void)
{
	for (int i = 0;i < N;i++) {
		weight[i]=1;
	}
}

Classifier::~Classifier(void)
{
}

void Classifier::ReadData(string textName)
{
	ifstream inf(textName);
	char c;
	int row = 0;
	while (inf.peek() != EOF) {
		for (int i = 1;i <= N;i++)
		{
			data[row][0] = 1;
			inf >> data[row][i];
			inf.get(c);
		}
		row++;
	}
	inf.close();
}

void Classifier::OutputData(void)
{
	cout << left;
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N + 1;j++)
			cout << setw(10) << data[i][j] << "  ";
		cout << endl;
	}
}

void Classifier::Preprocess(string textName)
{
	double maxMin[N][2];
	for (int i = 0;i < N;i++)
	{
		maxMin[i][0] = -100000;
		maxMin[i][1] = 100000;
	}

	for (int row = 0;row < M;row++)
		for (int i = 1;i < N;i++)
		{
			if (data[row][i] > maxMin[i][0])
				maxMin[i][0] = data[row][i];
			if (data[row][i] < maxMin[i][1])
				maxMin[i][1] = data[row][i];
		}

	ofstream outs(textName);
	double d;
	for (int row = 0;row < M;row++) {
		for (int i = 1;i < N;i++)
		{
			d = (data[row][i] - maxMin[i][1]) / (maxMin[i][0] - maxMin[i][1]);
			outs << d;
			outs.put(',');
		}
		outs << data[row][N] - 1; //针对liver数据集，转换类标为0和1
		outs.put('\n');
	}
	outs.close();
	ReadData(textName);
}

double Classifier::WtX(int row)
{
	double sum = 0;
	for (int i = 0;i < N;i++) {
		sum += weight[i] * data[row][i];
	}
	return sum;
}

double Classifier::Sigmoid(int row)
{
	return 1 / (1+exp(-WtX(row)));
}

void Classifier::Nabla()
{
	for (int i = 0;i < N;i++) {
		double sum = 0;
		for (int j = 0;j < M;j++) {
			sum += data[j][i] * (data[j][N]-Sigmoid(j));
		}
		gradient[i] = sum;
	}
}

void Classifier::Train()
{
	for (int i = 0;i < T;i++) {
		Nabla();
		for (int j = 0;j < N;j++) {
			weight[j]+=gradient[j]*ST;
		}
	}
}

double Classifier::Test()
{
	int count = 0;
	for (int i = 0;i < M;i++) {
		if ((Sigmoid(i)>=0.5&&data[i][N]==1)||(Sigmoid(i)<0.5&&data[i][N]==0)) {
			count++;
		}
	}
	return (double) count / M;
}





