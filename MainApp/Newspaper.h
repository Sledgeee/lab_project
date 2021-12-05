#pragma once

#include "Edition.h"

public ref class Newspaper : public Edition
{
	String^ genre;
public:
	Newspaper();
	Newspaper(Int32 id, String^ name, String^ type, String^ genre, Int32 paperback,
		Publisher^ publisher, String^ language, String^ description, float price,
		Int32 discount, String^ linkToImage);
	Newspaper(Int32 id, String^ name, float price, Int32 discount, String^ linkToImage);
	virtual ~Newspaper();

	String^ getGenre();
	Void	setGenre(String^ genre);
};

