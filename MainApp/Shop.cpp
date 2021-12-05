#include "Shop.h"

Shop::Shop(Form^ form, Label^ label)
{
	this->spawnedButtons = gcnew List<Button^>();
	this->cart = gcnew Cart;
	this->parent = form;
	this->label = label;
}

Shop::~Shop() {}

