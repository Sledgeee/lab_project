#pragma once

#include "Shop.h"

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
		List<Edition^>^ list;
	private: System::Void FormShop_Load(System::Object^ sender, System::EventArgs^ e) {
		list = gcnew List<Edition^>();
		list->Add(gcnew Book(
			1,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		));
		for (int i = 1; i <= list->Count; i++)
			SpawnPanel(i, list[i - 1]);
	}

	private: System::Void SpawnPanel(int i, Edition^ edition)
	{
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

	   Label^ price_without_discount = gcnew Label;
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

	   Label^ price_with_discount = gcnew Label;
	   price_with_discount->AutoSize = true;
	   price_with_discount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	   price_with_discount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		   static_cast<System::Byte>(204)));
	   price_with_discount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
		   static_cast<System::Int32>(static_cast<System::Byte>(71)));
	   price_with_discount->Location = System::Drawing::Point(5, 309);
	   price_with_discount->Name = L"pwd" + i;
	   price_with_discount->Size = System::Drawing::Size(111, 35);
	   price_with_discount->Text =
		   Math::Round((edition->getPrice() - edition->getPrice() / 100 * edition->getDiscount()), 2).ToString() + "$";
	   price_with_discount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

	   Label^ label_available = gcnew Label;
	   label_available->AutoSize = true;
	   label_available->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	   label_available->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		   static_cast<System::Byte>(204)));
	   label_available->ForeColor = System::Drawing::Color::Lime;
	   label_available->Location = System::Drawing::Point(6, 347);
	   label_available->Name = L"la" + i;
	   label_available->Size = System::Drawing::Size(120, 28);
	   label_available->Text = L"Available";
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

	   Panel^ panel_available = gcnew Panel;
	   panel_available->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	   panel_available->Controls->Add(edition_preview);
	   panel_available->Controls->Add(edition_name);
	   panel_available->Controls->Add(price_without_discount);
	   panel_available->Controls->Add(price_with_discount);
	   panel_available->Controls->Add(add_to_cart);
	   shop->spawnedButtons->Add(add_to_cart);
	   panel_available->Controls->Add(label_available);
	   panel_available->Location = System::Drawing::Point(9, 9);
	   panel_available->Margin = System::Windows::Forms::Padding(9);
	   panel_available->Name = L"pa" + i;
	   panel_available->Size = System::Drawing::Size(434, 386);
	   flowDesk->Controls->Add(panel_available);
	   panel_available->SuspendLayout();
	   panel_available->ResumeLayout(false);
	   panel_available->PerformLayout();
	}

	private: System::Void add_to_cart_Click(System::Object^ sender, System::EventArgs^ e) {
	   Button^ btn = (Button^)sender;
	   String^ index_str = "";
	   for (int i = 3; i < btn->Name->Length; i++)
		   index_str += btn->Name[i];
	   int index = Int32::Parse(index_str) - 1;
	   if (shop->spawnedButtons[index]->ImageKey == L"shop_cart_empty.png")
	   {
		   shop->spawnedButtons[index]->ImageKey = L"shop_cart_has.png";
		   shop->addProduct(list[index], 1);
		   shop->label->Text = (Int32::Parse(shop->label->Text) + 1).ToString();
	   }
	   else {
		   Shop::OpenCart();
		   //shop->spawnedButtons[index]->ImageKey = L"shop_cart_empty.png";
	   }
	}
	};
}
