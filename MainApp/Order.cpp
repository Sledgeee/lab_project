#include "Order.h"

Order::Order()
{
	this->editions = gcnew Dictionary<Edition^, Int32>();
}

Order::Order(Client^ client, Cart^ cart, bool paystatus) : Order()
{
	this->client = client;
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
	cmd->Parameters->AddWithValue("@CID", client->getId());
	cmd->Parameters->AddWithValue("@CN", client->getName());
	cmd->Parameters->AddWithValue("@CE", client->getEmail());
	cmd->Parameters->AddWithValue("@EID", EditionsID);
	cmd->Parameters->AddWithValue("@EC", EditionsCount);
	cmd->Parameters->AddWithValue("@TS", cart->TotalSum);
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

Client^ Order::getClient()
{
	return this->client;
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

Void Order::setClient(Client^ client)
{
	this->client = client;
}

Void Order::setDate(DateTime^ date)
{
	this->date = date;
}

Void Order::setPayStatus(bool payStatus)
{
	this->payStatus = payStatus;
}

