#include "Order.h"

Order::Order() {}

Order::Order(Int32 id, Client^ client, Cart^ cart, float totalSum,
	Dictionary<Edition^, Int32>^ editions, DateTime^ date, bool payStatus)
{
	this->id = id;
	this->client = client;
	this->cart = cart;
	this->totalSum = totalSum;
	this->editions = editions;
	this->date = date;
	this->payStatus = payStatus;
}

Order::~Order() {}

Int32 Order::getId()
{
	return this->id;
}

Client^ Order::getClient()
{
	return this->client;
}

Cart^ Order::getCart()
{
	return this->cart;
}

float Order::getTotalSum()
{
	return this->totalSum;
}

Dictionary<Edition^, Int32>^ Order::getEditions()
{
	return this->editions;
}

DateTime^ Order::getDate()
{
	return this->date;
}

bool Order::getPayStatus()
{
	return this->payStatus;
}

Void Order::setId(Int32 id)
{
	this->id = id;
}

Void Order::setClient(Client^ client)
{
	this->client = client;
}

Void Order::setCart(Cart^ cart)
{
	this->cart = cart;
}

Void Order::setTotalSum(float totalSum)
{
	this->totalSum = totalSum;
}

Void Order::setEditions(Dictionary<Edition^, Int32>^ editions)
{
	this->editions = editions;
}

Void Order::setDate(DateTime^ date)
{
	this->date = date;
}

Void Order::setPayStatus(bool payStatus)
{
	this->payStatus = payStatus;
}

