#pragma once
#include "BorrowedItems.h"
#include "CatalogItem.h"
class Borrower
{
private:
	string id;
	string name;
	BorrowedItems borrows;
public:
	Borrower(string,string);
	~Borrower();
	string getId();
	string getName();
	BorrowedItems& getBorrows();//��ǰ��������
	bool addItem(CatalogItem* item);//����
	bool removeItem(CatalogItem* item);//����
	string userInfo();//���߼���ǰ������Ϣ
};