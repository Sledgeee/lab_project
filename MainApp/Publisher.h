#pragma once

#include "Edition.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

ref class Edition;

public ref class Publisher
{
	String^ name;
	List<Edition^>^ editions;
public:
	Publisher();
	Publisher(String^ name);
	~Publisher();
};

