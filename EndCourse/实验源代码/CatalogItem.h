#pragma once

#include<string>
using namespace std;

class CatalogItem
{
protected:
	string code;//�ݲ����ױ���
	string title;//�ݲ����ױ���
	int year;//�ݲ��������
	bool  available;//�ݲ������Ƿ�ɽ�
public:
	CatalogItem(string,string,int,bool);
	~CatalogItem();
	string getCode();
	string getTitle();
	int getYear();
	void setAvailable(bool avai);
	bool isAvailable();
	string getDetail();
};

