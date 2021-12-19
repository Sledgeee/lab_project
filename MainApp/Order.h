#pragma once

#include "Customer.h"
#include "Edition.h"
#include "DBQuery.h"
#include "Cart.h"

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::Data;
using namespace System::IO;
using namespace System::Threading;
using namespace System::Threading::Tasks;
using namespace System::Collections::Generic;

ref class Customer;
ref class Edition;
ref class Cart;

public enum class Status
{
	WAITING_FOR_PAYMENT = 1,
	PAID = 2,
	BLACK_LIST = 3
};

public ref class Order
{
protected:
	Int32 id;
	Customer^ customer;
	Cart^ cart;
	DateTime^ date;
	bool payStatus;
public:
	Dictionary<Edition^, Int32>^ editions;
	Order();
	Order(Customer^ customer, Cart^ cart, bool paystatus);
	~Order();

	bool CreateOrder();
	Int32 getId();
	Cart^ getCart();
	Customer^ getCustomer();
	DateTime^ getDate();
	bool getPayStatus();
	Void setId(Int32 id);
	Void setCart(Cart^ cart);
	Void setCustomer(Customer^ customer);
	Void setDate(DateTime^ date);
	Void setPayStatus(bool payStatus);
};

