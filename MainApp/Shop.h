#pragma once

#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"

using namespace System; 
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Shop
{
public:
	static Dictionary<Edition^, Int32>^ ShopProducts;

	Shop();
	~Shop();

	Void addProduct(Edition^ edition, Int32 stock_available);
};

