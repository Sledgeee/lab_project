#pragma once

#include "Client.h"
#include "Cart.h"
#include "Edition.h"

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::Data;
using namespace System::IO;
using namespace System::Threading;
using namespace System::Collections::Generic;

ref class Client;
ref class Cart;
ref class Edition;

public ref class Order
{
	Int32 id;
	Client^ client;
	Cart^ cart;
	float totalSum;
	Dictionary<Edition^, Int32>^ editions;
	DateTime^ date;
	bool payStatus;
public:
	Order();
	Order(Int32 id, Client^ client, Cart^ cart, float totalSum,
		Dictionary<Edition^, Int32>^ editions, DateTime^ date, bool payStatus);
	~Order();

	Int32	  getId();
	Client^ getClient();
	Cart^ getCart();
	float	  getTotalSum();
	Dictionary<Edition^, Int32>^ getEditions();
	DateTime^ getDate();
	bool      getPayStatus();
	Void	  setId(Int32 id);
	Void	  setClient(Client^ client);
	Void      setCart(Cart^ cart);
	Void	  setTotalSum(float totalSum);
	Void	  setEditions(Dictionary<Edition^, Int32>^ editions);
	Void      setDate(DateTime^ date);
	Void	  setPayStatus(bool payStatus);
};

