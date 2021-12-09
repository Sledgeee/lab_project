#pragma once

#include "Account.h"
#include "Mailer.h"

using namespace System;
using namespace System::Data;
using namespace System::IO;
using namespace System::Collections;
using namespace System::Collections::Generic;

public ref class Session : Account
{
public:
	static String^ session_filename = "session.dat";
	Session();
	Session(String^ login, String^ password);
	Session(Int32 id, String^ login, String^ password, String^ email);
	~Session();

	Void ReadSession();
	Void CreateSession();
};

