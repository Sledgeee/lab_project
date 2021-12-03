#include "Admin.h"

Admin::Admin() {}
Admin::Admin(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
	String^ sex, String^ country, String^ city) 
	: Account(id, login, passwd, email, name, age, sex, country, city, money) {}

Admin::~Admin() {}

Void Admin::CreateAccount()
{
	DBQuery::InsertData(login, passwd, email, name, age, sex, country, city, 0.f);
	DBQuery::CreateRequestToCreateAdminAccount(login, passwd, email, name, age, sex, country, city);
}