#pragma once
#include "CatalogItem.h"
#include <vector>
#include <iterator>
class BorrowedItems
{
private:
	vector<CatalogItem> borrows;
public:
	BorrowedItems();
	~BorrowedItems();
	bool addItems(CatalogItem* item);
	bool removeItems(CatalogItem* item);
	int getNumberOfItems();//��ǰ�Ľ�����������
	CatalogItem& getItem(int i);
	CatalogItem& getItem(string itemcode);//���ݽ������ױ�����ҽ�������
	string getBorrowsDetails();//��ǰ������Ϣ
};

