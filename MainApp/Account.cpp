#include "Account.h"

Account::Account() {}

Account::Account(Int32 id, String^ login, String^ password, String^ email, String^ name, String^ country, String^ city, float money, String^ root, bool two_fa)
	:id(id), login(login), password(password), email(email), root(root), TWO_FA(two_fa), 
	Person(name, country, city, money) {}

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

String^ Account::getPassword()
{
	return this->password;
}

String^ Account::getRoot()
{
	return this->root;
}

bool Account::get2FA()
{
	return this->TWO_FA;
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

Void Account::setPassword(String^ password)
{
	this->password = password;
}

Void Account::setRoot(String^ root)
{
	this->root = root;
}

Void Account::set2FA(bool turn2FA)
{
	this->TWO_FA = turn2FA;
}