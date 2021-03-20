#include "BorrowerDB.h"

BorrowerDB::BorrowerDB()
{
}

BorrowerDB::~BorrowerDB()
{
}

void BorrowerDB::addBorrower(Borrower* bor)
{
	borrowers.push_back(*bor);
}

void BorrowerDB::removeBorrower(string id)
{
	vector<Borrower>::iterator ite;
	for (ite = borrowers.begin();ite != borrowers.end();ite++) {
		if (!strcmp((*ite).getId().data(),id.data())) {
			ite = borrowers.erase(ite);
			return;
		}
	}
}

Borrower* BorrowerDB::getBorrower(int i)
{
	return &borrowers[i];
}

Borrower* BorrowerDB::getBorrower(string id)
{
	for (int i = 0;i < getNumbersofBorrower();i++) {
		if (!strcmp(id.data(), borrowers[i].getId().data())) {
			return &borrowers[i];
		}
	}
	return nullptr;
}

int BorrowerDB::getNumbersofBorrower()
{
	return borrowers.size();
}

void BorrowerDB::dispalyBorrowers()
{
	vector<Borrower>::iterator ite;
	for (ite = borrowers.begin();ite != borrowers.end();ite++) {
		cout << "Borrower's ID£º" << (*ite).getId() << " Borrower's Name£º" << (*ite).getName() << endl;
	}
}