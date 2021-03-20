#include <iostream>
using namespace std;

#include "ReaderMain.h"

void Reader_Main(LibrarySystem* library) {
	int choice;
	string code;
	string id;
	do {
		cout << "[0] Out\n[1] displayCatalog\n[2] displayCatalogItem\n[3] checkOut\n[4] cheakIn\n";
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
			cout << "Enter your id: ";
			cin >> id;//登录借阅简化为输入读者id；
			cout << "Enter the code of the book you want to borrow: ";
			cin >> code;
			library->checkout(id, code);
			//((library->getBorrowerDB()).getBorrower(id)).addItem(&(library->getCatalog()).getItem(code));
			break;
		case 4:
		    cout<<"Enter your id: ";
			cin >> id;
			cout << "Enter the code of the book you want to check in: ";
			cin >> code;
			library->checkIn(id,code);
			//((library->getBorrowerDB()).getBorrower(id)).addItem(&(library->getCatalog()).getItem(code));
			break;
		default:
			cout << "Invaid Choice"<<endl;
		}
	} while (choice!=0);
}