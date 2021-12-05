#pragma once

#include "Publisher.h"

using namespace System;

ref class Publisher;

public ref class Edition abstract
{
	Int32	id;
	String^ name;
	String^ type;
	Int32	paperback;
	Publisher^ publisher;
	String^ language;
	String^ description;
	float	price;
	Int32	discount;
	String^ linkToImage;
public:
	Edition();
	Edition(Int32 id, String^ name, String^ type, Int32 paperback, Publisher^ publisher, String^ language, 
		String^ description, float price, Int32 discount, String^ linkToImage);
	~Edition();

	Int32   getId();
	String^ getName();
	String^ getType();
	Int32	getPaperback();
	Publisher^ getPublisher();
	String^ getLanguage();
	String^ getDescription();
	float	getPrice();
	Int32	getDiscount();
	String^ getLinkToImage();
	Void	setId(Int32 id);
	Void	setName(String^ name);
	Void	setType(String^ type);
	Void	setPaperback(Int32 paperback);
	Void	setPublisher(Publisher^ publisher);
	Void	setLanguage(String^ language);
	Void	setDescription(String^ description);
	Void	setPrice(float price);
	Void	setDiscount(Int32 discount);
	Void	setLinkToImage(String^ linkToImage);
};

