#include "Cart.h"


Cart::Cart()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	this->CartProducts = gcnew Dictionary<Edition^, Int32>();
}

Cart::~Cart() {}


Void Cart::addProduct(Edition^ edition, Int32 number)
{
	if (!this->CartProducts->ContainsKey(edition))
	{
		this->CartProducts->Add(edition, number);
		this->CountProducts += number;
		this->CountKeys++;
	}
	else {
		this->CartProducts[edition] += number;
		this->CountProducts += number;
	}
	TotalSum += calculateSpecifyItemPrice(edition, number);
}

Void Cart::calculateTotalPrice()
{
	TotalSum = 0;
	for each (auto item in this->CartProducts)
	{
		this->TotalSum += calculateSpecifyItemPrice(item.Key, item.Value);
	}
}

float Cart::calculateSpecifyItemPrice(Edition^ edition, Int32 number)
{
	return edition->getDiscount() > 0 ?
		(float)Math::Round(edition->getPrice() * number - edition->getPrice() / 100 * edition->getDiscount() * number, 2) :
		(float)Math::Round(edition->getPrice() * number, 2);
}

Void Cart::Refresh()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	for each (auto value in this->CartProducts)
	{
		this->CountKeys++;
		this->CountProducts += value.Value;
		this->TotalSum += calculateSpecifyItemPrice(value.Key, value.Value);
	}
}