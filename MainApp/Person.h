#pragma once

using namespace System;

public ref class Person abstract
{
protected:
	String^ name;
	Int32   age;
	String^ sex;
	String^ country;
	String^ city;
	float   money;
public:
	Person();
	Person(String^ name, Int32 age, String^ sex, String^ country, String^ city, float money);
	virtual ~Person();
	String^ getName();
	Int32	getAge();
	String^ getSex();
	String^ getCountry();
	String^ getCity();
	float	getMoney();
	Void    setName(String^ name);
	Void	setAge(Int32 age);
	Void	setSex(String^ sex);
	Void	setCountry(String^ country);
	Void	setCity(String^ city);
	Void	setMoney(float money);
};

