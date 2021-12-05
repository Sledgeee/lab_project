#pragma once

#include "Edition.h"

public ref class Book : public Edition
{
	String^	   author;
	String^	   genre;
public:
	Book();
	Book(Int32 id, String^ name, String^ type, String^ author, String^ genre, Int32 paperback,
		Publisher^ publisher, String^ language, String^ description, float price, 
		Int32 discount, String^ linkToImage);
	Book(Int32 id, String^ name, float price, Int32 discount, String^ linkToImage);
	virtual    ~Book();

	String^    getAuthor();
	String^	   getGenre();
	Void       setAuthor(String^ author);
	Void       setGenre(String^ genre);
};
