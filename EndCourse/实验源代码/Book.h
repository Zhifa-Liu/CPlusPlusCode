#pragma once
#include "CatalogItem.h"
#include <string>
using namespace std;
class Book :
	public CatalogItem
{
private:
	string author;
	int pages;
public:
	Book(string, string, int, bool, string, int);
	~Book();
	int getPage();
	string getAuthor();
	string getDetail();
};

