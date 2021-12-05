#pragma once

#include "Edition.h"
#include "DBQuery.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Cart
{
public:
	static Dictionary<Edition^, Int32>^ Products;
	static Int32 CountProducts;
	static Int32 CountKeys;
	static float TotalSum;

	Cart();
	~Cart();

	Void addProduct(Edition^ edition, Int32 number);
	Void calculateTotalPrice();
	float calculateSpecifyItemPrice(KeyValuePair<Edition^, Int32>^ item);
	Void Refresh();
};

