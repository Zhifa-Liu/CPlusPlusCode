#include <iostream>
using namespace std;

#include "LibrarySystem.h"
#include "Book.h"
#include "Recording.h"

#include "ManagerMain.h"
#include "ReaderMain.h"

int main() {
	cout<<"Welcome to our library system";

	Catalog allCatalog;
	Book b1("B001", "PS", 2018, true, "LY", 230);
	Book b2("B002", "Java", 2016, true, "HMB", 670);
	Book b3("B003","C++",2017,true,"Stephen",936);
	Recording r1("R001", "Recording China", 0, true, "DVA", "Tape");
	Recording r2("R002", "Recording World", 0, true, "DCBA", "Disk");
	CatalogItem items[5]{b1,b2,b3,r1,r2};
	for (CatalogItem item : items) {
		allCatalog.addCatalogItem(&item);
	}

	BorrowerDB borrowerDB;
	Borrower bor1("20185217", "LZF");
	Borrower bor2("20185287","MHB");
	Borrower borrowers[2]{ bor1,bor2 };
	for (Borrower borrower : borrowers) {
		borrowerDB.addBorrower(&borrower);
	}

	LibrarySystem library(&allCatalog, &borrowerDB);

	int choice;
	do {
		cout << endl<< "[0]Quit\n[1]Reader\n[2]Manager\n";
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
		case 0:
			break;
		case 1:
			Reader_Main(&library);
			break;
		case 2:
			Manager_Main(&library);
			break;
		default:
			cout << "Invalid Choice " << choice << endl;
		}
	} while (choice != 0);
	cout<<"Thank you for your coming";
	system("pause");
}