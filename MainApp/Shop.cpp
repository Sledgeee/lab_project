#include "Shop.h"

Shop::Shop(Form^ form, Label^ label)
{
	this->spawnedButtons = gcnew List<Button^>();
	this->cart = gcnew Cart;
	this->parent = form;
	this->label = label;
	this->ShopProducts = gcnew Dictionary<Edition^, Int32>();
}

Shop::~Shop() {}

Void Shop::OpenCart()
{
	label->Focus();
	Form^ form = gcnew Form;
	form->BackColor = Color::Black;
	form->FormBorderStyle = Windows::Forms::FormBorderStyle::None;
	form->Text = String::Empty;
	form->StartPosition = Windows::Forms::FormStartPosition::CenterScreen;
	form->Opacity = 0.5;
	form->Size = Drawing::Size(parent->Size.Width, parent->Size.Height);
	form->BringToFront();
	form->Show();
	(gcnew MainApp::FormCart(cart, spawnedButtons))->ShowDialog();
	form->Close();
	label->Text = cart->CountProducts.ToString();
}

Void Shop::addProduct(Edition^ edition, Int32 stock_available)
{
	if (!this->ShopProducts->ContainsKey(edition))
	{
		this->ShopProducts->Add(edition, stock_available);
	}
	else {
		this->ShopProducts[edition] = this->ShopProducts[edition] + stock_available;
	}
}

