#include "Book.h"

Book::Book() {}

Book::Book(Int32 id, String^ name, String^ type, String^ author, String^ genre, Int32 printlength,
	Publisher^ publisher, String^ language, String^ description, float price,
	Int32 discount, String^ linkToImage)
	:author(author), genre(genre), 
	Edition(id, name, type, printlength, publisher, language, description, price, discount, linkToImage) {}

Book::~Book() {}

String^ Book::getAuthor()
{
	return this->author;
}

String^ Book::getGenre()
{
	return this->genre;
}

Void Book::setAuthor(String^ author)
{
	this->author = author;
}

Void Book::setGenre(String^ genre)
{
	this->genre = genre;
}

