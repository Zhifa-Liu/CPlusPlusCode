#pragma once
#include "vector"
#include "Borrower.h"
#include <iostream>
class BorrowerDB
{
private:
	vector<Borrower> borrowers;
public:
	BorrowerDB();
	~BorrowerDB();
	void addBorrower(Borrower* bor);
	void removeBorrower(string id);
	Borrower* getBorrower(int i);
	Borrower* getBorrower(string id);
	int getNumbersofBorrower();
	void dispalyBorrowers();
};

