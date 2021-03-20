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
		double weight[N];//Ȩ
		double gradient[N];//�ݶ�
	public:
		Classifier(void);
		~Classifier(void);
		void ReadData(string textName);//��ȡtextName�ļ��е�������data��
		void OutputData(void); //���data�е�����
		void Preprocess(string textName);//Ԥ����textName�ļ��е����ݣ���ŵ����ļ���textName1����
		void Train();
		double Test();
    private:
		double WtX(int row);
		double Sigmoid(int row);
		void Nabla();
};

