#include "LibrarySystem.h"

LibrarySystem::LibrarySystem(Catalog* cata, BorrowerDB* borrDB)
{
	catalog = *cata;
	borrowers = *borrDB;
}

LibrarySystem::~LibrarySystem()
{
}

void LibrarySystem::displayCatalog()
{
	catalog.dispalyCatalog();
}

void LibrarySystem::dispalyBorrowers()
{
	borrowers.dispalyBorrowers();
}

void LibrarySystem::dispalyCatalogItem(string code)
{
	cout<<(*catalog.getItem(code)).getDetail()<<endl;
}

void LibrarySystem::dispalyBorrower(string id)
{
	cout << (*borrowers.getBorrower(id)).userInfo()<<endl;
}

void LibrarySystem::checkout(string id,string code)
{
	Borrower* bor = borrowers.getBorrower(id);
	if (bor) {
		CatalogItem* c = catalog.getItem(code);
		if (c) {
			if ((*bor).addItem(c)) {
				cout << "Successful." << endl;//����ɹ�
			}
			else {
				cout << "Failed.It has been borrowed by others" << endl;//����ʧ��
			}
		}else {
			cout << "No item with code "+code<<endl;
		}
	}else {
		cout << "No borrower with id " + id<<endl;
	}
}

void LibrarySystem::checkIn(string id, string code)
{
		Borrower* bor = borrowers.getBorrower(id);
		if (bor) {
			CatalogItem* c = catalog.getItem(code);
			if (c) {
				if ((*bor).removeItem(c)) {
					cout << "Successful" << endl;//����ɹ�
				}
				else {
					cout << "Failed.You didn't borrow it." << endl;//����ʧ�ܣ���δ����code��Ӧ����)
				}
			}else {
				cout << "No borrowed item with code " + code;
			}
		}else {
			cout << "No borrower with id " + id;
		}
}

void LibrarySystem::addCatalogItem(CatalogItem* item)
{
	catalog.addCatalogItem(item);
}

Catalog& LibrarySystem::getCatalog()
{
	return catalog;
}

BorrowerDB & LibrarySystem::getBorrowerDB()
{
	return borrowers;
}
