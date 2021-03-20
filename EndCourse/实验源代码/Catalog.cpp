#include "Catalog.h"

Catalog::Catalog()
{
}

Catalog::~Catalog()
{
}

void Catalog::addCatalogItem(CatalogItem* item)
{
	catalogItems.push_back(*item);
}

void Catalog::removeCatalogItem(CatalogItem* item)
{
	vector<CatalogItem>::iterator ite;
	for (ite = catalogItems.begin();ite != catalogItems.end();ite++) {
		if (!strcmp((*item).getCode().data(), (*ite).getCode().data()))
			ite = catalogItems.erase(ite);
	}
}

int Catalog::getNumberOfItems()
{
	return catalogItems.size();
}

CatalogItem* Catalog::getItem(string code)
{
	for (int i = 0;i < getNumberOfItems();i++) {
		if (!strcmp(code.data(), catalogItems[i].getCode().data())) {
			return &catalogItems[i];
		}
	}
	return nullptr;
}

void Catalog::dispalyCatalog()
{
	if (getNumberOfItems()==0) {
		cout << "The catalog is empty (¹Ü²ØÎª¿Õ)"<<endl;
	}else {
		vector<CatalogItem>::iterator ite;
		for (ite = catalogItems.begin();ite != catalogItems.end();ite++) {
			cout << (*ite).getCode() + " " + (*ite).getTitle()<<endl;
		}
	}
}
