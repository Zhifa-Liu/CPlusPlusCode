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
	int getNumberOfItems();//当前的借阅文献数量
	CatalogItem& getItem(int i);
	CatalogItem& getItem(string itemcode);//根据借阅文献编码查找借阅文献
	string getBorrowsDetails();//当前借阅信息
};

