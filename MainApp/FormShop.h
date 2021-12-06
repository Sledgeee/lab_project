#pragma once

#include "Shop.h"
#include "DBQuery.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Shop
	/// </summary>

	public ref class FormShop : public System::Windows::Forms::Form
	{
	public:
		FormShop(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormShop(Shop^ shop)
		{
			InitializeComponent();
			this->shop = shop;
		}

	public:
		Shop^ shop;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormShop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowDesk;
	protected:

	protected:


	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormShop::typeid));
			this->flowDesk = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// flowDesk
			// 
			this->flowDesk->AutoScroll = true;
			this->flowDesk->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowDesk->Location = System::Drawing::Point(0, 0);
			this->flowDesk->Name = L"flowDesk";
			this->flowDesk->Size = System::Drawing::Size(1347, 785);
			this->flowDesk->TabIndex = 0;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"shop_cart_empty.png");
			this->imageList1->Images->SetKeyName(1, L"shop_cart_has.png");
			// 
			// FormShop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 785);
			this->Controls->Add(this->flowDesk);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormShop";
			this->Text = L"Shop";
			this->Load += gcnew System::EventHandler(this, &FormShop::FormShop_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormShop_Load(System::Object^ sender, System::EventArgs^ e) {
		/*editions_to_flow->Add(gcnew Book(
			1,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			2,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			3,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			4,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			5,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			6,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		editions_to_flow->Add(gcnew Book(
			7,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));*/
		SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("Select * From Editions", con);
		SqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->HasRows)
		{
			while (reader->Read())
			{
				if (reader["Type"] == "Book")
				{
					shop->ShopProducts->Add(gcnew Book(
						Convert::ToInt32(reader["Id"]),
						reader["Name"]->ToString(),
						reader["Type"]->ToString(),
						reader["Author"]->ToString(),
						reader["Genre"]->ToString(),
						Convert::ToInt32(reader["Paperback"]),
						gcnew Publisher(reader["Publisher"]->ToString()),
						reader["Language"]->ToString(),
						reader["Description"]->ToString(),
						(float)Convert::ToDouble(reader["Price"]),
						Convert::ToInt32(reader["Discount"]),
						reader["LinkToImg"]->ToString()
						),
						Convert::ToInt32(reader["Available"])
					);
				}
				else if (reader["Type"] == "Newspaper")
				{
					shop->ShopProducts->Add(gcnew Newspaper(
							Convert::ToInt32(reader["Id"]),
							reader["Name"]->ToString(),
							reader["Type"]->ToString(),
							reader["Genre"]->ToString(),
							Convert::ToInt32(reader["Paperback"]),
							gcnew Publisher(reader["Publisher"]->ToString()),
							reader["Language"]->ToString(),
							reader["Description"]->ToString(),
							(float)Convert::ToDouble(reader["Price"]),
							Convert::ToInt32(reader["Discount"]),
							reader["LinkToImg"]->ToString()
							),
							Convert::ToInt32(reader["Available"])
						);
				}
				else {
					shop->ShopProducts->Add(gcnew Magazine(
						Convert::ToInt32(reader["Id"]),
						reader["Name"]->ToString(),
						reader["Type"]->ToString(),
						Convert::ToInt32(reader["Paperback"]),
						gcnew Publisher(reader["Publisher"]->ToString()),
						reader["Language"]->ToString(),
						reader["Description"]->ToString(),
						(float)Convert::ToDouble(reader["Price"]),
						Convert::ToInt32(reader["Discount"]),
						reader["LinkToImg"]->ToString()
						),
						Convert::ToInt32(reader["Available"])
					);
				}
			}
		}
		int i = 1;
		for each (auto prod in shop->ShopProducts) {
			SpawnPanel(i, prod.Key, prod.Value);
			i++;
		}
	}

	private: System::Void SpawnPanel(int i, Edition^ edition, int number)
	{
		Panel^ panel = gcnew Panel;
		panel->Location = System::Drawing::Point(9, 9);
		panel->Margin = System::Windows::Forms::Padding(9);
		panel->Name = L"pa" + i;
		panel->Size = System::Drawing::Size(434, 386);
		panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

		PictureBox^ edition_preview = gcnew PictureBox;
		edition_preview->ImageLocation = edition->getLinkToImage();
		edition_preview->Location = System::Drawing::Point(3, 3);
		edition_preview->Name = L"ep" + i;
		edition_preview->Size = System::Drawing::Size(428, 227);
		edition_preview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

		Label^ edition_name = gcnew Label;
		edition_name->AutoSize = true;
		edition_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		edition_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		edition_name->ForeColor = System::Drawing::Color::Gainsboro;
		edition_name->Location = System::Drawing::Point(6, 236);
		edition_name->MaximumSize = System::Drawing::Size(420, 50);
		edition_name->Name = L"en" + i;
		edition_name->Size = System::Drawing::Size(419, 50);
		edition_name->Text = edition->getName();
		edition_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		String^ price;
		Label^ price_without_discount = nullptr;
		if (edition->getDiscount() > 0 && number > 0) {
			price_without_discount = gcnew Label;
			price_without_discount->AutoSize = true;
			price_without_discount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price_without_discount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			price_without_discount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			price_without_discount->Location = System::Drawing::Point(6, 288);
			price_without_discount->Name = L"pwod" + i;
			price_without_discount->Size = System::Drawing::Size(84, 28);
			price_without_discount->Text = edition->getPrice() + "$";
			price_without_discount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			price = Math::Round((edition->getPrice() - edition->getPrice() / 100 * edition->getDiscount()), 2).ToString() + "$";
			panel->Controls->Add(price_without_discount);
		}
		else price = edition->getPrice().ToString() + "$";

		Label^ label_price = gcnew Label;
		label_price->AutoSize = true;
		label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		label_price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		if (price_without_discount != nullptr) {
			label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
		}
		else label_price->ForeColor = Color::Gainsboro;
		label_price->Location = System::Drawing::Point(5, 309);
		label_price->Name = L"pwd" + i;
		label_price->Size = System::Drawing::Size(111, 35);
		label_price->Text = price;
		label_price->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		
		bool available = true;
		Label^ label_available = gcnew Label;
		label_available->AutoSize = true;
		label_available->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		label_available->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (number > 500) {
			label_available->ForeColor = System::Drawing::Color::Lime;
			label_available->Text = L"Available";
		}
		else if (number != 0) {
			label_available->ForeColor = System::Drawing::Color::FromArgb(248, 65, 71);
			label_available->Text = L"Ends";
		}
		else {
			label_price->ForeColor = System::Drawing::Color::FromArgb(121, 120, 120);
			label_available->ForeColor = System::Drawing::Color::FromArgb(121, 120, 120);
			label_available->Text = L"Not available";
			available = false;
		}
		label_available->Location = System::Drawing::Point(6, 347);
		label_available->Name = L"la" + i;
		label_available->Size = System::Drawing::Size(120, 28);
		label_available->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		Button^ add_to_cart = gcnew Button;
		add_to_cart->FlatAppearance->BorderSize = 0;
		add_to_cart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		add_to_cart->ImageKey = L"shop_cart_empty.png";
		add_to_cart->ImageList = imageList1;
		add_to_cart->Location = System::Drawing::Point(340, 302);
		add_to_cart->Name = L"atc" + i;
		add_to_cart->Size = System::Drawing::Size(84, 51);
		add_to_cart->UseVisualStyleBackColor = true;
		add_to_cart->Click += gcnew System::EventHandler(this, &FormShop::add_to_cart_Click);
		if (!available)
			add_to_cart->Visible = false;

		panel->Controls->Add(edition_preview);
		panel->Controls->Add(edition_name);
		panel->Controls->Add(add_to_cart);
		shop->spawnedButtons->Add(add_to_cart);
		panel->Controls->Add(label_price);
		panel->Controls->Add(label_available);
		flowDesk->Controls->Add(panel);
		panel->SuspendLayout();
		panel->ResumeLayout(false);
		panel->PerformLayout();
	}

	private: System::Void add_to_cart_Click(System::Object^ sender, System::EventArgs^ e) {
		flowDesk->Focus();
		Button^ btn = (Button^)sender;
		String^ index_str = "";
		for (int i = 3; i < btn->Name->Length; i++)
			index_str += btn->Name[i];
		int index = Int32::Parse(index_str) - 1;
		if (shop->spawnedButtons[index]->ImageKey == L"shop_cart_empty.png")
		{
			shop->spawnedButtons[index]->ImageKey = L"shop_cart_has.png";
			int i = 0;
			for each (auto prod in shop->ShopProducts)
			{
				if (i == index) {
					shop->addProduct(prod.Key, 1, index);
					break;
				}
				i++;
			}
			shop->label->Text = (Int32::Parse(shop->label->Text) + 1).ToString();
		}
		else {
			Shop::OpenCart();
		}
	}
	};
}
