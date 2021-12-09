#include "Person.h"

Person::Person() {}

Person::Person(String^ name, String^ country, String^ city, float money)
	:name(name), country(country), city(city), money(money) {}

Person::~Person() {}

String^ Person::getName()
{
	return this->name;
}

Void Person::setName(String^ name) 
{ 
	this->name = name; 
}

String^ Person::getCountry()
{
	return this->country;
}

String^ Person::getCity()
{
	return this->city;
}

float Person::getMoney()
{
	return this->money;
}

Void Person::setCountry(String^ country)
{
	this->country = country;
}

Void Person::setCity(String^ city)
{
	this->city = city;
}

Void Person::setMoney(float money)
{
	this->money = money;
}