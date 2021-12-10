#include "Order.h"

Order::Order()
{
	this->editions = gcnew Dictionary<Edition^, Int32>();
}

Order::Order(Customer^ customer, Cart^ cart, bool paystatus) : Order()
{
	this->customer = customer;
	this->cart = cart;
	this->payStatus = paystatus;
}

Order::~Order() {}


Void Order::CreateOrder() {
	String^ EditionsID = "";
	String^ EditionsCount = "";
	int i = 0;
	for each (auto ID in cart->CartProducts) {
		if (i == 0) {
			EditionsID += (ID.Key->getId().ToString());
			EditionsCount += (ID.Value.ToString());
			i = 1;
			continue;
		}
		EditionsID += (" " + ID.Key->getId().ToString());
		EditionsCount += (" " + ID.Value.ToString());
	}
	SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
	con->Open();
	String^ sql = String::Format("INSERT INTO Orders " +
		"(CustomerID, CustomerName, CustomerEmail, EditionsID, EditionsCount, TotalSum, DateCreateOrder, PayStatus, ProcessStatus) " +
		"Values (@CID, @CN, @CE, @EID, @EC, @TS, @DCO, @PS, @PRS)");
	SqlCommand^ cmd = gcnew SqlCommand(sql, con);
	cmd->Parameters->AddWithValue("@CID", customer->getId());
	cmd->Parameters->AddWithValue("@CN", customer->getName());
	cmd->Parameters->AddWithValue("@CE", customer->getEmail());
	cmd->Parameters->AddWithValue("@EID", EditionsID);
	cmd->Parameters->AddWithValue("@EC", EditionsCount);
	cmd->Parameters->AddWithValue("@TS", Math::Round(cart->TotalSum, 2));
	cmd->Parameters->AddWithValue("@DCO", DateTime::Now);
	cmd->Parameters->AddWithValue("@PS", false);
	cmd->Parameters->AddWithValue("@PRS", Status::WAITING_FOR_PAYMENT);
	cmd->ExecuteNonQuery();
	con->Close();
}

Int32 Order::getId()
{
	return this->id;
}

Cart^ Order::getCart()
{
	return this->cart;
}

Customer^ Order::getCustomer()
{
	return this->customer;
}

DateTime^ Order::getDate()
{
	return this->date;
}

bool Order::getPayStatus()
{
	return this->payStatus;
}

Void Order::setId(Int32 id)
{
	this->id = id;
}

Void Order::setCart(Cart^ cart)
{
	this->cart = cart;
}

Void Order::setCustomer(Customer^ customer)
{
	this->customer = customer;
}

Void Order::setDate(DateTime^ date)
{
	this->date = date;
}

Void Order::setPayStatus(bool payStatus)
{
	this->payStatus = payStatus;
}

