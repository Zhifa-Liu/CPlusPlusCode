#pragma once
#include "CatalogItem.h"
#include <string>
//¼ÇÂ¼
class Recording:public CatalogItem
{
private:
	string performer;
	string format;
public:
	Recording(string,string,int,bool,string,string);
	~Recording();
	string getFormat();
	string getPerformer();
	string getDetail();
};