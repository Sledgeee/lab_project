#pragma once

#include "Person.h"

using namespace System;

public ref class Account abstract : public Person
{
protected:
	Int32 id;
	String^ email;
	String^ login;
	String^ passwd;
public:
	Account();
	Account(Int32 id, String^ login, String^ passwd, String^ email, String^ name, Int32 age,
		String^ sex, String^ country, String^ city, float money);
	virtual ~Account();
	Int32   getId();
	String^ getEmail();
	String^ getLogin();
	String^ getPasswd();
	Void	setId(Int32 id);
	Void	setEmail(String^ email);
	Void	setLogin(String^ login);
	Void	setPasswd(String^ passwd);
	virtual Void CreateAccount() = 0;
};

