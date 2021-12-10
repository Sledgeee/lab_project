#pragma once

#include "Account.h"
#include "DBQuery.h"

using namespace System;

ref class Account;

public ref class Customer : Account
{
public:
	Customer();
	Customer(Int32 id, String^ login, String^ password, String^ email, String^ name, 
		String^ country, String^ city, float money, bool two_fa);
	Customer(Account^ account);
	virtual ~Customer();

	Void CreateAccount();
};

