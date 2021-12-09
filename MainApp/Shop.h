#pragma once

#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"
//#include "Cart.h"

using namespace System; 
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//ref class Cart;

public ref class Shop
{
public:
	static Dictionary<Edition^, Int32>^ ShopProducts;
	//static Cart^ cart;

	Shop();
	~Shop();

	Void addProduct(Edition^ edition, Int32 stock_available);
};

