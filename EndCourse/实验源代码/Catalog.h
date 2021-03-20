#pragma once
#include "CatalogItem.h"
#include "vector"
#include <iostream>
class Catalog
{
private:
	vector<CatalogItem> catalogItems;//�ܲ�
public:
	Catalog();
	~Catalog();
	void addCatalogItem(CatalogItem* item);
	void removeCatalogItem(CatalogItem* item);
	int getNumberOfItems();//�ܲ�����
	CatalogItem* getItem(string code);
	void dispalyCatalog();
};

