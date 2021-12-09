#pragma once

#include "Person.h"

using namespace System;

ref class Person;

public ref class Account : public Person
{
protected:
	Int32 id;
	String^ email;
	String^ login;
	String^ password;
	String^ root;
	bool TWO_FA;
public:
	Account();
	Account(Int32 id, String^ login, String^ password, String^ email, String^ name, String^ country, String^ city, float money, String^ root, bool two_fa);
	virtual ~Account();
	Int32   getId();
	String^ getEmail();
	String^ getLogin();
	String^ getPassword();
	String^ getRoot();
	bool	get2FA();
	Void	setId(Int32 id);
	Void	setEmail(String^ email);
	Void	setLogin(String^ login);
	Void	setPassword(String^ password);
	Void	setRoot(String^ root);
	Void	set2FA(bool turn2FA);
};

