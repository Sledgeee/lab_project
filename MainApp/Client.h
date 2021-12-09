#pragma once

#include "Account.h"
#include "DBQuery.h"

using namespace System;

ref class Account;

public ref class Client : Account
{
public:
	Client();
	Client(Int32 id, String^ login, String^ password, String^ email, String^ name, String^ country, String^ city, float money, bool two_fa);
	Client(Account^ account);
	virtual ~Client();

	Void CreateAccount();
};

