#pragma once

#include "Edition.h"
#include "DBQuery.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Cart
{
public:
	
	static Dictionary<Edition^, ValueTuple<Int32, Int32> >^ Products;
	static Int32 CountProducts;
	static Int32 CountKeys;
	static float TotalSum;

	Cart();
	~Cart();

	Void addProduct(Edition^ edition, Int32 number, Int32 index);
	Void calculateTotalPrice();
	float calculateSpecifyItemPrice(KeyValuePair<Edition^, ValueTuple<Int32, Int32> >^ item);
	Void Refresh();
};

