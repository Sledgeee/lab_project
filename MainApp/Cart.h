#pragma once

#include "Edition.h"
#include "DBQuery.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Edition;

public ref class Cart
{
public:
	value struct ProductInfo {
		Edition^ edition;
		Int32 count;
		float price_per_one;
	};
	static Dictionary<Edition^, Int32>^ CartProducts;
	static Int32 CountProducts;
	static Int32 CountKeys;
	static float TotalSum;

	Cart();
	~Cart();

	Void addProduct(Edition^ edition, Int32 number);
	Void calculateTotalPrice();
	float calculateSpecifyItemPrice(Edition^ edition, Int32 number);
	Void Refresh();
};

