#include "Recording.h"

Recording::Recording(string code_, string title_, int year_, bool avai, string performer_, string format_):CatalogItem(code_,title_,year_,avai)
{
	performer = performer_;
	format = format_;
}

Recording::~Recording()
{
}

string Recording::getFormat()
{
	return format;
}

string Recording::getPerformer()
{
	return performer;
}

string Recording::getDetail()
{
	return "code: " + code + "\ntitle: " + title + "\nyear: " + to_string(year) + "\navailable: " + to_string(available) + "\nperformer: " + performer + "\nformat: " + format;
}
