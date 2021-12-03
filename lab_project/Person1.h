#pragma once

using namespace System;

ref class Person abstract
{
protected:
	Int32	id;
	String^ name;
	Int32   age;
	String^ sex;
	String^ email;
	String^ login;
	String^ passwd;
public:
	Person();
	Person(Int32 id, String^ name, Int32 age, String^ sex, String^ email, String^ login, String^ passwd);
	virtual ~Person();
	String^ getName();
	Int32	getAge();
	String^ getSex();
	String^ getEmail();
	String^ getLogin();
	String^ getPasswd();
	Void    setName(String^ name);
	Void	setAge(Int32 age);
	Void	setSex(String^ sex);
	Void	setEmail(String^ email);
	Void	setLogin(String^ login);
	Void	setPasswd(String^ passwd);

	virtual Void CreateAccount() = 0;
};

