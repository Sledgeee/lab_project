#pragma once

#include "Edition.h"

ref class Edition;

public ref class Magazine : public Edition
{
public:
	Magazine();
	Magazine(Int32 id, String^ name, String^ type, Int32 printlength, Publisher^ publisher, String^ language,
		String^ description, float price, Int32 discount, String^ linkToImage);
	virtual ~Magazine();
};

