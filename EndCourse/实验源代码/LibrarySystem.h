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
	void displayCatalog(); //չʾ�ݲ�����
	void dispalyBorrowers();//չʾͼ��ܶ���
	void dispalyCatalogItem(string code);//չʾ�ݲر���Ϊcode������
	void dispalyBorrower(string id);//չʾ���ߺ�Ϊid�Ķ���
	void checkout(string,string);//����
	void checkIn(string,string);//����
	void addCatalogItem(CatalogItem* book);
	Catalog& getCatalog();
	BorrowerDB& getBorrowerDB();
};

