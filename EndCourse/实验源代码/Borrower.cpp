#include "Borrower.h"

Borrower::Borrower(string id_="", string name_="")
{
	id = id_;
	name = name_;
}

Borrower::~Borrower()
{
}

string Borrower::getId()
{
	return id;
}

string Borrower::getName()
{
	return name;
}

BorrowedItems& Borrower::getBorrows()
{
	return borrows;
}

bool Borrower::addItem(CatalogItem* item)
{
	if ((*item).isAvailable()) {
		borrows.addItems(item);
		(*item).setAvailable(false);
		return true;
	}
	return false;
}

bool Borrower::removeItem(CatalogItem* item)
{
	if (borrows.removeItems(item)) {
		(*item).setAvailable(true);
		return true;
	}
	return false;
}

string Borrower::userInfo()
{
	if (sizeof(borrows)==0) {
		return "Id: " + id + "\nName: " + name + "\nBorrow items:\n" + "No borrow itesm.";
	}
	else {
		return "Id: " + id + "\nName: " + name + "\nBorrow items:\n" + getBorrows().getBorrowsDetails();
	}
}
