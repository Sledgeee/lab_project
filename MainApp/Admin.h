#pragma once

#include "Account.h"
#include "DBQuery.h"

using namespace System;

public ref class Admin : public Account
{
public:
	Admin();
	Admin(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
		String^ sex, String^ country, String^ city);
	virtual ~Admin();
	Void CreateAccount() override;
};

