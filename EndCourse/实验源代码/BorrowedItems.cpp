#include "BorrowedItems.h"
BorrowedItems::BorrowedItems()
{
}

BorrowedItems::~BorrowedItems()
{
}

bool BorrowedItems::addItems(CatalogItem* item)
{
	borrows.push_back(*item);
	return true;
}

bool BorrowedItems::removeItems(CatalogItem* item)
{
	vector<CatalogItem>::iterator ite;
	for (ite = borrows.begin();ite != borrows.end();ite++) {
		if (!strcmp((*item).getCode().data(),(*ite).getCode().data())) {
			ite=borrows.erase(ite);
			return true;
		}
	}
	return false;
}

int BorrowedItems::getNumberOfItems()
{
	return borrows.size();
}

CatalogItem& BorrowedItems::getItem(int i)
{
	return borrows[i];
}

CatalogItem& BorrowedItems::getItem(string itemcode)
{
	vector<CatalogItem>::iterator ite;
	for (ite = borrows.begin();ite != borrows.end();ite++) {
		if (strcmp(itemcode.data(), (*ite).getCode().data())) {
			return *ite;
		}
	}
	throw "No such elements";
}

string BorrowedItems::getBorrowsDetails()
{
	string details;
	vector<CatalogItem>::iterator ite;
	if (getNumberOfItems()==0) {
		details = "No Borrowed Item";
		return details;
	}
	for (ite = borrows.begin();ite != borrows.end();ite++) {
		details += (*ite).getCode() + " " + (*ite).getTitle();
	}
	return details;
}