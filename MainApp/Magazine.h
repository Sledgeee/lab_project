#pragma once

#include "Edition.h"

public ref class Magazine : public Edition
{
public:
	Magazine();
	Magazine(Int32 id, String^ name, String^ type, Int32 paperback, Publisher^ publisher, String^ language,
		String^ description, float price, Int32 discount, String^ linkToImage);
	Magazine(Int32 id, String^ name, float price, Int32 discount, String^ linkToImage);
	virtual ~Magazine();
};

