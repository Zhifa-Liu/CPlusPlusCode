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
	BorrowedItems& getBorrows();//当前借阅文献
	bool addItem(CatalogItem* item);//借书
	bool removeItem(CatalogItem* item);//还书
	string userInfo();//读者及当前借阅信息
};