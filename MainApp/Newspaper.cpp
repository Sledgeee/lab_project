#include "Newspaper.h"

Newspaper::Newspaper() {}

Newspaper::Newspaper(Int32 id, String^ name, String^ type, String^ genre, Int32 printlength,
	Publisher^ publisher, String^ language, String^ description, float price,
	Int32 discount, String^ linkToImage)
	:genre(genre), Edition(id, name, type, printlength, publisher, language, description, price, discount, linkToImage) {}

Newspaper::~Newspaper() {}

String^ Newspaper::getGenre()
{
	return this->genre;
}

Void Newspaper::setGenre(String^ genre)
{
	this->genre = genre;
}

