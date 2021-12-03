#pragma once

#include "Person.h"
#include "DBQuery.h"

using namespace System;

ref class Admin : Person
{
protected:
	String^ country;
	String^ city;
public:
	Admin();
	Admin(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
		String^ sex, String^ country, String^ city);
	virtual ~Admin();

	Void CreateAccount() override;
};

