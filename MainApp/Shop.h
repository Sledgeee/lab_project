#pragma once

#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "FormCart.h"
#include "Cart.h"

using namespace System; 
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Shop : public Cart
{
public:
	static Dictionary<Edition^, Int32>^ ShopProducts;
	static Cart^ cart;
	static List<Button^>^ spawnedButtons;
	static Form^ parent;
	static Label^ label;


	Shop(Form^, Label^);
	~Shop();

	static Void OpenCart();
	Void addProduct(Edition^ edition, Int32 stock_available);
};

