#include <iostream>
using namespace std;

#include "ManagerMain.h"

void Manager_Main(LibrarySystem* library) {
	int choice;
	string code;
	string id;
	do {
		cout<<"[0] Out\n[1] displayCatalog\n[2] displayCatalogItem\n[3] displayBorrowerDatabase\n[4] displayBorrower\n[5] addCatalogItem\n";
		cout << "Enter Choice:";
		cin >> choice;
		switch (choice) {
		case 0:
			break;
		case 1:
			library->displayCatalog();
			break;
		case 2:
			cout << "Enter Item's Code:";
			cin >> code;
			library->dispalyCatalogItem(code);
			break;
		case 3:
			library->dispalyBorrowers();
			break;
		case 4:
			cout << "Enter Reader(Borrower)'s ID£º";
			cin >> id;
			library->dispalyBorrower(id);
			break;
		case 5: {
			int cho;
			cout << "Enter 1 to add books £¬2 to add recordings:";
			cin >> cho;
			string c = "";
			string title = "";
			int year;

			if (cho == 1) {
				cout << "Please enter code of the book:";
				cin >> c;
				cout << "Please enter title of the book:";
				cin >> title;
				string author;
				cout << "Please enter author of the book:";
				cin >> author;
				cout << "Please enter publish year of the book:";
				cin >> year;
				int pages;
				cout << "Please enter pages year of the book:";
				cin >> pages;
				Book b(c, title, true, year, author, pages);
				library->addCatalogItem(&b);
			}
			else if (cho == 2) {
				cout << "Please enter code of the recording:";
				cin >> c;
				cout << "Please enter title of the  recording:";
				cin >> title;
				string performer;
				cout << "Please enter performer of the  recording:";
				cin >> performer;
				cout << "Please enter publish year of the recording:";
				cin >> year;
				string format;
				cout << "Please enter format of the recording:";
				cin >> format;
				Recording r(c, title, true, year, performer, format);
				library->addCatalogItem(&r);
			}
			else {
				cout << "Please check!";
			}
			break;
		}
		default:
			cout << "Invaild Choice." << endl;
		}
	} while (choice != 0);
}