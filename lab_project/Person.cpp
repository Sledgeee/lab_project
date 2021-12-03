#include "Person.h"

Person::Person() {}

Person::Person(Int32 id, String^ name, Int32 age, String^ sex, String^ email, String^ login, String^ passwd) 
	:id(id), name(name), age(age), sex(sex), email(email), login(login), passwd(passwd) {}

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

String^ Person::getEmail()
{
	return this->email;
}

String^ Person::getLogin()
{
	return this->login;
}

String^ Person::getPasswd()
{
	return this->passwd;
}

Void Person::setEmail(String^ email)
{
	this->email = email;
}

Void Person::setLogin(String^ login)
{
	this->login = login;
}

Void Person::setPasswd(String^ passwd)
{
	this->passwd = passwd;
}

Void Person::setName(String^ name) { this->name = name; }
Void Person::setAge(Int32 age) { this->age = age; }
Void Person::setSex(String^ sex) { this->sex = sex; }	