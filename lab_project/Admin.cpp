#include "Admin.h"

Admin::Admin() {}
Admin::Admin(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
	String^ sex, String^ country, String^ city) : Person(id, name, age, sex, email, login, passwd)
{
	this->country = country;
	this->city = city;
}
Admin::~Admin() {}

Void Admin::CreateAccount()
{
	DBQuery::InsertData(login, passwd, email, name, age, sex, country, city, 0.f);
	DBQuery::CreateRequestToCreateAdminAccount(login, passwd, email, name);
}