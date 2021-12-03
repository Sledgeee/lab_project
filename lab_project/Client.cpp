#include "Client.h"

Client::Client() {}

Client::Client(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
	String^ sex, String^ country, String^ city, float money) : Person(id, name, age, sex, email, login, passwd)
{
	this->money = money;
	this->country = country;
	this->city = city;
}
Client::~Client() {}

String^ Client::getCountry()
{
	return this->country;
}

String^ Client::getCity()
{
	return this->city;
}

float Client::getMoney()
{
	return this->money;
}

Void Client::setCountry(String^ country)
{
	this->country = country;
}

Void Client::setCity(String^ city)
{
	this->city = city;
}

Void Client::setMoney(float money)
{
	this->money = money;
}

Void Client::CreateAccount()
{
	DBQuery::InsertData(login, passwd, email, name, age, sex, country, city, money);
}

//Client^ Client::operator=(Client^ data)
//{
//	Client^ temp = this;
//	temp->id = data->id;
//	temp->login = data->login;
//	temp->email = data->email;
//	temp->passwd = data->passwd;
//	temp->name = data->name;
//	temp->age = data->age;
//	temp->sex = data->sex;
//	temp->country = data->country;
//	temp->city = data->city;
//	temp->money = data->money;
//	return temp;
//}
