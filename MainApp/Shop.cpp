#include "Shop.h"

Shop::Shop()
{
	this->ShopProducts = gcnew Dictionary<Edition^, Int32>();
}

Shop::~Shop() {}


Void Shop::addProduct(Edition^ edition, Int32 stock_available)
{
	if (!this->ShopProducts->ContainsKey(edition))
	{
		this->ShopProducts->Add(edition, stock_available);
	}
	else {
		this->ShopProducts[edition] = this->ShopProducts[edition] + stock_available;
	}
}

