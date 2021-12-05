#pragma once

#include "Account.h"
#include "DBQuery.h"

using namespace System;

public ref class Client : public Account
{
public:
	Client();
	Client(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
		String^ sex, String^ country, String^ city, float money);
	virtual ~Client();
	Void CreateAccount() override;
};

