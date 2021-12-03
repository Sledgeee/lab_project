#include "Account.h"

Account::Account() {}

Account::Account(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
	String^ sex, String^ country, String^ city, float money)
	:id(id), login(login), passwd(passwd), email(email), Person(name, age, sex, country, city, money) {}

Account::~Account() {}

Int32 Account::getId()
{
	return this->id;
}

String^ Account::getEmail()
{
	return this->email;
}

String^ Account::getLogin()
{
	return this->login;
}

String^ Account::getPasswd()
{
	return this->passwd;
}

Void Account::setId(Int32 id)
{
	this->id = id;
}

Void Account::setEmail(String^ email)
{
	this->email = email;
}

Void Account::setLogin(String^ login)
{
	this->login = login;
}

Void Account::setPasswd(String^ passwd)
{
	this->passwd = passwd;
}