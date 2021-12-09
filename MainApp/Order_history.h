#pragma once

#include "Order.h"

ref class Order_history : Order
{
public:
	value struct Data {
		Order^ order;
		float total_sum;
		List<String^>^ image_links;
		int process_status;
	};
	List<Data>^ orders;
	Order_history();
	virtual ~Order_history();
};

