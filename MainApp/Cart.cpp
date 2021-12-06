#include "Cart.h"


Cart::Cart()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	this->Products = gcnew Dictionary<Edition^, ValueTuple<Int32, Int32> >();
}

Cart::~Cart() {}


Void Cart::addProduct(Edition^ edition, Int32 number, Int32 index)
{
	if (!this->Products->ContainsKey(edition))
	{
		ValueTuple<Int32, Int32> tuple(number, index);
		this->Products->Add(edition, tuple);
		this->CountProducts += number;
		this->CountKeys++;
	}
	else {
		int num = this->Products[edition].Item1 + number;
		ValueTuple<Int32, Int32> tuple(num, index);
		this->Products[edition] = tuple;
		this->CountProducts += number;
	}
	TotalSum += calculateSpecifyItemPrice(
		gcnew KeyValuePair<Edition^, ValueTuple<Int32, Int32> >(
			edition, ValueTuple<Int32, Int32>(
				this->Products[edition].Item1, this->Products[edition].Item2
				)
			)
	);
}

Void Cart::calculateTotalPrice()
{
	TotalSum = 0;
	for each (auto item in this->Products)
	{
		item.Key->getDiscount() > 0 ?
			this->TotalSum += item.Key->getPrice() * item.Value.Item1 - item.Key->getPrice() / 100 * item.Key->getDiscount() * item.Value.Item1 :
			this->TotalSum += item.Key->getPrice() * item.Value.Item1;
	}
	TotalSum = (float)Math::Round(TotalSum, 2);
}

float Cart::calculateSpecifyItemPrice(KeyValuePair<Edition^, ValueTuple<Int32, Int32> >^ item)
{
	return item->Key->getDiscount() > 0 ?
		(float)Math::Round(item->Key->getPrice() * item->Value.Item1 - item->Key->getPrice() / 100 * item->Key->getDiscount() * item->Value.Item1, 2) :
		(float)Math::Round(item->Key->getPrice() * item->Value.Item1, 2);
}

Void Cart::Refresh()
{
	this->CountProducts = 0;
	this->CountKeys = 0;
	this->TotalSum = 0;
	for each (auto value in this->Products)
	{
		this->CountKeys++;
		this->CountProducts += value.Value.Item1;
		this->TotalSum += value.Key->getPrice() * value.Value.Item1 - 
			value.Key->getPrice() / 100 * value.Key->getDiscount() * value.Value.Item1;
	}
	TotalSum = (float)Math::Round(TotalSum, 2);
}