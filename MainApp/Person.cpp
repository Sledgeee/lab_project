#include "Person.h"

Person::Person() {}

Person::Person(String^ name, Int32 age, String^ sex, String^ country, String^ city, float money)
	:name(name), age(age), sex(sex), country(country), city(city), money(money) {}

Person::~Person() {}

String^ Person::getName()
{
	return this->name;
}

Int32 Person::getAge()
{
	return this->age;
}

String^ Person::getSex()
{
	return this->sex;
}

Void Person::setName(String^ name) 
{ 
	this->name = name; 
}

Void Person::setAge(Int32 age) 
{
	this->age = age; 
}

Void Person::setSex(String^ sex) 
{
	this->sex = sex; 
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