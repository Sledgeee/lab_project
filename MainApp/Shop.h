#pragma once

#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "FormCart.h"
#include "Cart.h"

using namespace System; 
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Shop : public Cart
{
public:
	static Cart^ cart;
	static List<Button^>^ spawnedButtons;
	static Form^ parent;
	static Label^ label;


	Shop(Form^, Label^);
	~Shop();


	
public: static Void OpenCart()
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
	(gcnew MainApp::FormCart(cart))->ShowDialog();
	form->Close();
	label->Text = cart->CountProducts.ToString();
}
};

