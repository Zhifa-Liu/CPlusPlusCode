#pragma once
#include <string>
using namespace std;

#define M 345  //number of instances
#define N 7    //number of attributes
#define T 5000
#define ST 0.001

class Classifier
{
	private:
		double data[M][N + 1];
		double weight[N];//权
		double gradient[N];//梯度
	public:
		Classifier(void);
		~Classifier(void);
		void ReadData(string textName);//读取textName文件中的数据至data中
		void OutputData(void); //输出data中的数据
		void Preprocess(string textName);//预处理textName文件中的数据，存放到新文件“textName1”中
		void Train();
		double Test();
    private:
		double WtX(int row);
		double Sigmoid(int row);
		void Nabla();
};

