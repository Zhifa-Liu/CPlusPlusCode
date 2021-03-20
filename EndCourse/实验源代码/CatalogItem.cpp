#include "CatalogItem.h"

CatalogItem::CatalogItem(string code_, string title_, int year_, bool avai)
{
	code = code_;
	title = title_;
	year = year_;
	available = avai;
}

CatalogItem::~CatalogItem()
{
}

string CatalogItem::getCode()
{
	return code;
}

string CatalogItem::getTitle()
{
	return title;
}

int CatalogItem::getYear()
{
	return year;
}

void CatalogItem::setAvailable(bool avai)
{
	available = avai;
}

bool CatalogItem::isAvailable()
{
	return available;
}

string CatalogItem::getDetail()
{
	return "code: " + code + "\ntitle: " + title + "\nyear: " + to_string(year) + "\navailable: " + to_string(available);
}
