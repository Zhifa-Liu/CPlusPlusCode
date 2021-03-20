#pragma once

#include<string>
using namespace std;

class CatalogItem
{
protected:
	string code;//馆藏文献编码
	string title;//馆藏文献标题
	int year;//馆藏文献年份
	bool  available;//馆藏文献是否可借
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

