#pragma once
#include "Catalog.h"
#include "BorrowerDB.h"
#include "Book.h"
#include "Recording.h"
class LibrarySystem
{
private:
	Catalog catalog;
	BorrowerDB borrowers;
public:
	LibrarySystem(Catalog*,BorrowerDB*);
	~LibrarySystem();
	void displayCatalog(); //展示馆藏文献
	void dispalyBorrowers();//展示图书管读者
	void dispalyCatalogItem(string code);//展示馆藏编码为code的文献
	void dispalyBorrower(string id);//展示读者号为id的读者
	void checkout(string,string);//借书
	void checkIn(string,string);//还书
	void addCatalogItem(CatalogItem* book);
	Catalog& getCatalog();
	BorrowerDB& getBorrowerDB();
};

