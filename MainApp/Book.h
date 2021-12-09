#pragma once

#include "Edition.h"

ref class Edition;

public ref class Book : public Edition
{
	String^	   author;
	String^	   genre;
public:
	Book();
	Book(Int32 id, String^ name, String^ type, String^ author, String^ genre, Int32 printlength,
		Publisher^ publisher, String^ language, String^ description, float price, 
		Int32 discount, String^ linkToImage);
	virtual    ~Book();

	String^    getAuthor();
	String^	   getGenre();
	Void       setAuthor(String^ author);
	Void       setGenre(String^ genre);
};
