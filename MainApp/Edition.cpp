#include "Edition.h"

Edition::Edition() {}

Edition::Edition(Int32 id, String^ name, String^ type, Int32 paperback, Publisher^ publisher, String^ language,
	String^ description, float price, Int32 discount, String^ linkToImage)
	:id(id), name(name), type(type), paperback(paperback), publisher(publisher), language(language),
	description(description), price(price), discount(discount), linkToImage(linkToImage) {}

Edition::~Edition() {}

Int32 Edition::getId()
{
	return this->id;
}

String^ Edition::getName()
{
	return this->name;
}

String^ Edition::getType()
{
	return this->type;
}

Int32 Edition::getPaperback()
{
	return this->paperback;
}

Publisher^ Edition::getPublisher()
{
	return this->publisher;
}

String^ Edition::getLanguage()
{
	return this->language;
}

String^ Edition::getDescription()
{
	return this->description;
}

float Edition::getPrice()
{
	return this->price;
}

Int32 Edition::getDiscount()
{
	return this->discount;
}

String^ Edition::getLinkToImage()
{
	return this->linkToImage;
}

Void Edition::setId(Int32 id)
{
	this->id = id;
}

Void Edition::setName(String^ name)
{
	this->name = name;
}

Void Edition::setType(String^ type)
{
	this->type = type;
}

Void Edition::setPaperback(Int32 paperback)
{
	this->paperback = paperback;
}

Void Edition::setPublisher(Publisher^ publisher)
{
	this->publisher = publisher;
}

Void Edition::setDescription(String^ description)
{
	this->description = description;
}

Void Edition::setLanguage(String^ language)
{
	this->language = language;
}

Void Edition::setPrice(float price)
{
	this->price = price;
}

Void Edition::setDiscount(Int32 discount)
{
	this->discount = discount;
}

Void Edition::setLinkToImage(String^ linkToImage)
{
	this->linkToImage = linkToImage;
}

