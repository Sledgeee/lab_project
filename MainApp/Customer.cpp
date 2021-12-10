#include "Customer.h"

Customer::Customer() {}

Customer::Customer(Int32 id, String^ login, String^ password, String^ email, String^ name, String^ country, String^ city, float money, bool two_fa)
	: Account(id, login, password, email, name, country, city, money, "Customer", two_fa) {
}

Customer::Customer(Account^ account)
{
	this->id = account->getId();
	this->login = account->getLogin();
	this->email = account->getEmail();
	this->password = account->getPassword();
	this->root = account->getRoot();
	this->TWO_FA = account->get2FA();
	this->name = account->getName();
	this->country = account->getCountry();
	this->city = account->getCity();
	this->money = account->getMoney();
}

Void Customer::CreateAccount()
{
	DBQuery::InsertData(this);
}


Customer::~Customer() {}

