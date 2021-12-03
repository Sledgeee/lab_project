#pragma once

#include "Person.h"
#include "DBQuery.h"

using namespace System;

ref class Client : Person
{
protected:
	float money;
	String^ country;
	String^ city;
public:
	Client();
	Client(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age, 
		String^ sex, String^ country, String^ city, float money);
	virtual ~Client();

	String^ getCountry();
	String^ getCity();
	float getMoney();

	Void setCountry(String^ country);
	Void setCity(String^ city);
	Void setMoney(float money);

	Void CreateAccount() override;

//	Client^ operator=(Client^);
};

