#pragma once

#include "Publisher.h"

using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;

ref class Publisher;

ref class Stock
{
	List<Publisher^>^ stock;
public:
	Stock();
	~Stock();
};

