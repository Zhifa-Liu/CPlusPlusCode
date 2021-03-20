#include "Book.h"

Book::Book(string code_, string title_, int year_, bool avai, string author_, int pages_):CatalogItem(code_,title_,year_,avai)
{
	author = author_;
	pages = pages_;
}

Book::~Book()
{
}

int Book::getPage()
{
	return pages;
}

string Book::getAuthor()
{
	return author;
}

string Book::getDetail()
{
	return "code: " + code + "\ntitle: " + title + "\nyear: " + to_string(year) + "\navailable: " + to_string(available) + "\nauthor: " + author + "\nnumberOfPags: " +to_string(pages);
}
