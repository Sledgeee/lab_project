#include "Cart.h"


Cart::Cart()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	this->Products = gcnew Dictionary<Edition^, Int32>();
}

Cart::~Cart() {}


Void Cart::addProduct(Edition^ edition, Int32 number)
{
	if (!this->Products->ContainsKey(edition))
	{
		this->Products->Add(edition, number);
		this->CountProducts += number;
		this->CountKeys++;
	}
	else {
		this->Products[edition] += number;
		this->CountProducts += number;
	}
	TotalSum += calculateSpecifyItemPrice(gcnew KeyValuePair<Edition^, Int32>(edition, number));
}

Void Cart::calculateTotalPrice()
{
	TotalSum = 0;
	for each (auto item in this->Products)
	{
		item.Key->getDiscount() > 0 ?
			this->TotalSum += item.Key->getPrice() * item.Value - item.Key->getPrice() / 100 * item.Key->getDiscount() * item.Value :
			this->TotalSum += item.Key->getPrice() * item.Value;
	}
	TotalSum = (float)Math::Round(TotalSum, 2);
}

float Cart::calculateSpecifyItemPrice(KeyValuePair<Edition^, Int32>^ item)
{
	return item->Key->getDiscount() > 0 ?
		(float)Math::Round(item->Key->getPrice() * item->Value - item->Key->getPrice() / 100 * item->Key->getDiscount() * item->Value, 2) :
		(float)Math::Round(item->Key->getPrice() * item->Value, 2);
}

Void Cart::Refresh()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	for each (auto value in this->Products)
	{
		this->CountKeys++;
		this->CountProducts += value.Value;
		this->TotalSum += value.Key->getPrice() * value.Value - 
			value.Key->getPrice() / 100 * value.Key->getDiscount() * value.Value;
	}
	TotalSum = (float)Math::Round(TotalSum, 2);
}