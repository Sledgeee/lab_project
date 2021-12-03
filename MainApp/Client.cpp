#include "Client.h"

Client::Client() {}

Client::Client(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
	String^ sex, String^ country, String^ city, float money)
	: Account(id, login, passwd, email, name, age, sex, country, city, money) {}

Client::~Client() {}

Void Client::CreateAccount()
{
	DBQuery::InsertData(login, passwd, email, name, age, sex, country, city, money);
}

