#pragma once

#include "Account.h"
#include "DBQuery.h"

using namespace System;

ref class Account;

public ref class Admin : public Account
{
public:
	Admin();
	Admin(Int32 id, String^ login, String^ password, String^ email, String^ name, String^ country, String^ city, float money, bool two_fa);
	Admin(Account^ account);
	virtual ~Admin();

	Void CreateAccount();
};

