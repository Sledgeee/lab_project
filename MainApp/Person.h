#pragma once

using namespace System;

public ref class Person abstract
{
protected:
	String^ name;
	String^ country;
	String^ city;
	float   money;
public:
	Person();
	Person(String^ name, String^ country, String^ city, float money);
	virtual ~Person();
	String^ getName();
	String^ getCountry();
	String^ getCity();
	float	getMoney();
	Void    setName(String^ name);
	Void	setCountry(String^ country);
	Void	setCity(String^ city);
	Void	setMoney(float money);
};

