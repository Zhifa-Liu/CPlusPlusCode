#pragma once
#include "CatalogItem.h"
#include "vector"
#include <iostream>
class Catalog
{
private:
	vector<CatalogItem> catalogItems;//管藏
public:
	Catalog();
	~Catalog();
	void addCatalogItem(CatalogItem* item);
	void removeCatalogItem(CatalogItem* item);
	int getNumberOfItems();//管藏数量
	CatalogItem* getItem(string code);
	void dispalyCatalog();
};

