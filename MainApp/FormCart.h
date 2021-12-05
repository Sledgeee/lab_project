#pragma once

#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "DBQuery.h"
#include "Cart.h"

namespace MainApp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Cart
	/// </summary>

	public ref class FormCart : public System::Windows::Forms::Form
	{
	public:
		FormCart(Cart^ cart)
		{
			InitializeComponent();
			this->cart = cart;
		}
		Cart^ cart;
		List<Button^>^ spawnedButtons;
		List<Label^>^ spawnedLabels;
		List<TextBox^>^ spawnedTextBoxes;
		List<Panel^>^ spawnedPanels;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PanelButtons;
	private: System::Windows::Forms::Panel^ PanelCheckout;
	private: System::Windows::Forms::Label^ lblTotalPrice;
	private: System::Windows::Forms::Button^ btnCheckout;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::ImageList^ imageList3;
	private: System::Windows::Forms::Button^ btnContinueShopping;
	private: System::Windows::Forms::Panel^ PanelControls;
	private: System::Windows::Forms::Label^ lblCart;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblIsEmpty;
	private: System::Windows::Forms::Label^ lblFixIt;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ImageList^ imageList1;
	public:
	private: System::Windows::Forms::Panel^ PanelDesk;
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCart::typeid));
			this->PanelControls = (gcnew System::Windows::Forms::Panel());
			this->lblCart = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblIsEmpty = (gcnew System::Windows::Forms::Label());
			this->lblFixIt = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->PanelDesk = (gcnew System::Windows::Forms::Panel());
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->PanelButtons = (gcnew System::Windows::Forms::Panel());
			this->PanelCheckout = (gcnew System::Windows::Forms::Panel());
			this->lblTotalPrice = (gcnew System::Windows::Forms::Label());
			this->btnCheckout = (gcnew System::Windows::Forms::Button());
			this->btnContinueShopping = (gcnew System::Windows::Forms::Button());
			this->PanelControls->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelButtons->SuspendLayout();
			this->PanelCheckout->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelControls
			// 
			this->PanelControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->PanelControls->Controls->Add(this->lblCart);
			this->PanelControls->Controls->Add(this->btnExit);
			this->PanelControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelControls->Location = System::Drawing::Point(0, 0);
			this->PanelControls->Name = L"PanelControls";
			this->PanelControls->Size = System::Drawing::Size(900, 59);
			this->PanelControls->TabIndex = 5;
			// 
			// lblCart
			// 
			this->lblCart->AutoSize = true;
			this->lblCart->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCart->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCart->Location = System::Drawing::Point(3, -9);
			this->lblCart->Name = L"lblCart";
			this->lblCart->Size = System::Drawing::Size(139, 63);
			this->lblCart->TabIndex = 7;
			this->lblCart->Text = L"Cart";
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(856, 14);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 28);
			this->btnExit->TabIndex = 6;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormCart::btnContinueShopping_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(297, 213);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(302, 297);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lblIsEmpty
			// 
			this->lblIsEmpty->AutoSize = true;
			this->lblIsEmpty->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblIsEmpty->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblIsEmpty->Location = System::Drawing::Point(315, 513);
			this->lblIsEmpty->Name = L"lblIsEmpty";
			this->lblIsEmpty->Size = System::Drawing::Size(293, 46);
			this->lblIsEmpty->TabIndex = 8;
			this->lblIsEmpty->Text = L"Cart is empty";
			// 
			// lblFixIt
			// 
			this->lblFixIt->AutoSize = true;
			this->lblFixIt->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFixIt->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblFixIt->Location = System::Drawing::Point(200, 569);
			this->lblFixIt->Name = L"lblFixIt";
			this->lblFixIt->Size = System::Drawing::Size(518, 32);
			this->lblFixIt->TabIndex = 9;
			this->lblFixIt->Text = L"But it\'s never too late to fix it :)";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"minus.png");
			this->imageList1->Images->SetKeyName(1, L"plus.png");
			// 
			// PanelDesk
			// 
			this->PanelDesk->AutoScroll = true;
			this->PanelDesk->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDesk->Location = System::Drawing::Point(0, 59);
			this->PanelDesk->Name = L"PanelDesk";
			this->PanelDesk->Size = System::Drawing::Size(900, 626);
			this->PanelDesk->TabIndex = 12;
			// 
			// imageList3
			// 
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"trash_blue.png");
			this->imageList3->Images->SetKeyName(1, L"trash_red.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"ellipsis.png");
			// 
			// PanelButtons
			// 
			this->PanelButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->PanelButtons->Controls->Add(this->PanelCheckout);
			this->PanelButtons->Controls->Add(this->btnContinueShopping);
			this->PanelButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PanelButtons->Location = System::Drawing::Point(0, 685);
			this->PanelButtons->Name = L"PanelButtons";
			this->PanelButtons->Size = System::Drawing::Size(900, 115);
			this->PanelButtons->TabIndex = 2;
			// 
			// PanelCheckout
			// 
			this->PanelCheckout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PanelCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->PanelCheckout->Controls->Add(this->lblTotalPrice);
			this->PanelCheckout->Controls->Add(this->btnCheckout);
			this->PanelCheckout->Location = System::Drawing::Point(616, 7);
			this->PanelCheckout->Name = L"PanelCheckout";
			this->PanelCheckout->Size = System::Drawing::Size(277, 100);
			this->PanelCheckout->TabIndex = 12;
			this->PanelCheckout->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormCart::PanelCheckout_Paint);
			// 
			// lblTotalPrice
			// 
			this->lblTotalPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTotalPrice->AutoSize = true;
			this->lblTotalPrice->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTotalPrice->ForeColor = System::Drawing::Color::Black;
			this->lblTotalPrice->Location = System::Drawing::Point(3, 31);
			this->lblTotalPrice->Name = L"lblTotalPrice";
			this->lblTotalPrice->Size = System::Drawing::Size(34, 39);
			this->lblTotalPrice->TabIndex = 8;
			this->lblTotalPrice->Text = L"0";
			this->lblTotalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTotalPrice->TextChanged += gcnew System::EventHandler(this, &FormCart::lblTotalPrice_TextChanged);
			// 
			// btnCheckout
			// 
			this->btnCheckout->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnCheckout->FlatAppearance->BorderSize = 0;
			this->btnCheckout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCheckout->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCheckout->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnCheckout->Location = System::Drawing::Point(148, 29);
			this->btnCheckout->Name = L"btnCheckout";
			this->btnCheckout->Size = System::Drawing::Size(119, 45);
			this->btnCheckout->TabIndex = 1;
			this->btnCheckout->Text = L"Checkout";
			this->btnCheckout->UseVisualStyleBackColor = false;
			this->btnCheckout->Click += gcnew System::EventHandler(this, &FormCart::btnCheckout_Click);
			// 
			// btnContinueShopping
			// 
			this->btnContinueShopping->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnContinueShopping->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnContinueShopping->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContinueShopping->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnContinueShopping->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->btnContinueShopping->Location = System::Drawing::Point(10, 62);
			this->btnContinueShopping->Name = L"btnContinueShopping";
			this->btnContinueShopping->Size = System::Drawing::Size(220, 45);
			this->btnContinueShopping->TabIndex = 13;
			this->btnContinueShopping->Text = L"Continue shopping";
			this->btnContinueShopping->UseVisualStyleBackColor = false;
			this->btnContinueShopping->Click += gcnew System::EventHandler(this, &FormCart::btnContinueShopping_Click);
			// 
			// FormCart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(900, 800);
			this->Controls->Add(this->PanelDesk);
			this->Controls->Add(this->PanelControls);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblIsEmpty);
			this->Controls->Add(this->lblFixIt);
			this->Controls->Add(this->PanelButtons);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormCart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cart";
			this->Load += gcnew System::EventHandler(this, &FormCart::FormCart_Load);
			this->PanelControls->ResumeLayout(false);
			this->PanelControls->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelButtons->ResumeLayout(false);
			this->PanelCheckout->ResumeLayout(false);
			this->PanelCheckout->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormCart_Load(System::Object^ sender, System::EventArgs^ e) {
		if (cart->CountProducts == 0)
		{
			PanelDesk->Visible = false;
			PanelButtons->Visible = false;
			return;
		}

		if (cart->Products != nullptr)
		{
			spawnedButtons = gcnew List<Button^>();
			spawnedLabels = gcnew List<Label^>();
			spawnedTextBoxes = gcnew List<TextBox^>();
			spawnedPanels = gcnew List<Panel^>();
			SpawnPanels();
			lblTotalPrice->Text = cart->TotalSum + L"$";
			if (lblTotalPrice->Location.X + lblTotalPrice->Size.Width >= btnCheckout->Location.X - 3)
			{
				PanelCheckout->Location = Drawing::Point(PanelCheckout->Location.X - 25, PanelCheckout->Location.Y);
				PanelCheckout->Size = Drawing::Size(PanelCheckout->Size.Width + 25, PanelCheckout->Size.Height);
				PanelCheckout->Refresh();
			}
		}
	}

	private: System::Void PanelCheckout_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, this->PanelCheckout->ClientRectangle, Color::FromArgb(0, 160, 70), ButtonBorderStyle::Solid);
	}

	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ button = (Button^)sender;
		int index = Int32::Parse(button->Name[button->Name->Length - 1].ToString()) - 1;
		spawnedTextBoxes[index]->Text = (Convert::ToInt32(spawnedTextBoxes[index]->Text) + 1).ToString();
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ button = (Button^)sender;
		int index = Int32::Parse(button->Name[button->Name->Length - 1].ToString()) - 1;
		if (Convert::ToInt32(spawnedTextBoxes[index]->Text) == 1)
			return;
		spawnedTextBoxes[index]->Text = (Convert::ToInt32(spawnedTextBoxes[index]->Text) - 1).ToString();
	}

	private: System::Void edition_counter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TextBox^ counter = (TextBox^)sender;
		if (String::IsNullOrWhiteSpace(counter->Text))
		{
			counter->Text = "1";
			return;
		}
		int index = Int32::Parse(counter->Name[counter->Name->Length - 1].ToString()) - 1;
		int i = 0;
		for each (auto prod in cart->Products)
		{
			if (i == index) {
				cart->Products[prod.Key] = Int32::Parse(counter->Text);
				break;
			}
			i++;
		}
		i = 0;
		for each (auto prod in cart->Products)
		{
			if (i == index) {
				spawnedLabels[index]->Text = cart->calculateSpecifyItemPrice(prod).ToString() + "$";
				break;
			}
			i++;
		}

		cart->calculateTotalPrice();

		lblTotalPrice->Text = Math::Round(cart->TotalSum, 2).ToString() + "$";
		if (lblTotalPrice->Location.X + lblTotalPrice->Size.Width >= btnCheckout->Location.X - 3)
		{
			PanelCheckout->Location = Drawing::Point(PanelCheckout->Location.X - 25, PanelCheckout->Location.Y);
			PanelCheckout->Size = Drawing::Size(PanelCheckout->Size.Width + 25, PanelCheckout->Size.Height);
			PanelCheckout->Refresh();
		}
	}

	private: System::Void SpawnPanels() {
		int i = 1;
		for each (auto product in cart->Products)
		{
			Button^ btn_plus = gcnew Button;
			btn_plus->FlatAppearance->BorderSize = 0;
			btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_plus->ImageIndex = 1;
			btn_plus->ImageList = this->imageList1;
			btn_plus->Location = System::Drawing::Point(530, 101);
			btn_plus->Name = L"bn" + i;
			btn_plus->Size = System::Drawing::Size(42, 35);
			btn_plus->UseVisualStyleBackColor = true;
			btn_plus->Click += gcnew EventHandler(this, &FormCart::plus_Click);

			Button^ btn_minus = gcnew Button;
			btn_minus->FlatAppearance->BorderSize = 0;
			btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_minus->ImageIndex = 0;
			btn_minus->ImageList = this->imageList1;
			btn_minus->Location = System::Drawing::Point(405, 101);
			btn_minus->Name = L"bm" + i;
			btn_minus->Size = System::Drawing::Size(42, 35);
			btn_minus->UseVisualStyleBackColor = true;
			btn_minus->Click += gcnew EventHandler(this, &FormCart::minus_Click);

			TextBox^ edition_counter = gcnew TextBox;
			edition_counter->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			edition_counter->Location = System::Drawing::Point(453, 101);
			edition_counter->MaxLength = 4;
			edition_counter->Name = L"ec" + i;
			edition_counter->Size = System::Drawing::Size(71, 35);
			edition_counter->Text = product.Value.ToString();
			edition_counter->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			edition_counter->TextChanged += gcnew EventHandler(this, &FormCart::edition_counter_TextChanged);

			Label^ edition_name = gcnew Label;
			edition_name->AutoSize = true;
			edition_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			edition_name->ForeColor = System::Drawing::Color::Gainsboro;
			edition_name->Location = System::Drawing::Point(221, 18);
			edition_name->Name = L"en" + i;
			edition_name->Size = System::Drawing::Size(168, 28);
			edition_name->Text = product.Key->getName();

			Label^ type_name = gcnew Label;
			type_name->AutoSize = true;
			type_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			type_name->ForeColor = System::Drawing::Color::Gainsboro;
			type_name->Location = System::Drawing::Point(221, 55);
			type_name->Name = L"tn" + i;
			type_name->Size = System::Drawing::Size(60, 28);
			type_name->Text = product.Key->getType();

			float calculatedPrice = cart->calculateSpecifyItemPrice(product);

			Label^ price = gcnew Label;
			price->AutoSize = true;
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			price->ForeColor = System::Drawing::Color::Gainsboro;
			price->Location = System::Drawing::Point(711, 101);
			price->Name = L"p" + i;
			price->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			price->Size = System::Drawing::Size(70, 32);
			price->Text = (Math::Round(calculatedPrice, 2)).ToString() + L"$";
			price->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			PictureBox^ edition_preview = gcnew PictureBox;
			String^ link = product.Key->getLinkToImage();
			edition_preview->ImageLocation = String::IsNullOrEmpty(link) == false ? link : "C:\\Users\\infab\\Desktop\\icons\\275x350.png";
			edition_preview->Location = System::Drawing::Point(26, 18);
			edition_preview->Name = L"ep" + i;
			edition_preview->Size = System::Drawing::Size(175, 175);
			edition_preview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			edition_preview->TabStop = false;

			Button^ btn_ellipsis = gcnew Button;
			btn_ellipsis->FlatAppearance->BorderSize = 0;
			btn_ellipsis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_ellipsis->ImageKey = L"ellipsis.png";
			btn_ellipsis->ImageList = this->imageList2;
			btn_ellipsis->Location = System::Drawing::Point(838, 24);
			btn_ellipsis->Name = L"be" + i;
			btn_ellipsis->Size = System::Drawing::Size(45, 32);
			btn_ellipsis->UseVisualStyleBackColor = true;
			btn_ellipsis->Click += gcnew System::EventHandler(this, &FormCart::btnEllipsis_Click);

			Button^ btn_remove = gcnew Button;
			btn_remove->BackColor = System::Drawing::Color::White;
			btn_remove->FlatAppearance->BorderSize = 2;
			btn_remove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_remove->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btn_remove->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			btn_remove->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btn_remove->ImageKey = L"trash_blue.png";
			btn_remove->ImageList = this->imageList3;
			btn_remove->Location = System::Drawing::Point(655, 15);
			btn_remove->Name = L"br" + i;
			btn_remove->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			btn_remove->Size = System::Drawing::Size(232, 50);
			btn_remove->Text = L" Remove";
			btn_remove->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btn_remove->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			btn_remove->UseVisualStyleBackColor = false;
			btn_remove->Visible = false;
			btn_remove->Click += gcnew System::EventHandler(this, &FormCart::btnRemove_Click);
			btn_remove->MouseLeave += gcnew System::EventHandler(this, &FormCart::btnRemove_MouseLeave);
			btn_remove->MouseHover += gcnew System::EventHandler(this, &FormCart::btnRemove_MouseHover);

			Panel^ panel = gcnew Panel;
			panel->Dock = System::Windows::Forms::DockStyle::Top;
			panel->Location = System::Drawing::Point(0, 0);
			panel->Name = L"p" + i;
			panel->Size = System::Drawing::Size(900, 214);
			panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormCart::panel_MouseDown);
			panel->Controls->Add(btn_plus);
			panel->Controls->Add(btn_minus);
			panel->Controls->Add(btn_ellipsis);
			panel->Controls->Add(btn_remove);
			panel->Controls->Add(edition_counter);
			panel->Controls->Add(edition_name);
			panel->Controls->Add(type_name);
			panel->Controls->Add(price);
			panel->Controls->Add(edition_preview);
			PanelDesk->Controls->Add(panel);
			panel->SuspendLayout();
			spawnedButtons->Add(btn_remove);
			spawnedLabels->Add(price);
			spawnedTextBoxes->Add(edition_counter);
			spawnedPanels->Add(panel);
			i++;
		}
	}

	private: System::Void lblTotalPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnContinueShopping_Click(System::Object^ sender, System::EventArgs^ e) {
		cart->Refresh();
		this->Close();
	}
	private: System::Void btnCheckout_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnEllipsis_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		String^ name = button->Name;
		int index = Int32::Parse(name[name->Length - 1].ToString()) - 1;
		spawnedButtons[index]->Visible = true;
		spawnedButtons[index]->BringToFront();
	}
	private: System::Void btnRemove_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		button->ForeColor = Color::Red;
		button->ImageKey = L"trash_red.png";
	}
	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		String^ name = button->Name;
		int index = Int32::Parse(name[name->Length - 1].ToString()) - 1;
		int i = 0;
		for each (auto prod in cart->Products)
		{
			if (i == index)
			{
				cart->Products->Remove(prod.Key);
				break;
			}
			i++;
		}
		cart->Refresh();
		spawnedPanels[index]->Controls->Clear();
		PanelDesk->Controls->Remove(spawnedPanels[index]);
		spawnedPanels->Remove(spawnedPanels[index]);
		spawnedLabels->Remove(spawnedLabels[index]);
		spawnedButtons->Remove(spawnedButtons[index]);
		spawnedTextBoxes->Remove(spawnedTextBoxes[index]);
		if (cart->CountProducts == 0)
		{
			PanelDesk->Visible = false;
			PanelButtons->Visible = false;
			return;
		}
		lblTotalPrice->Text = Math::Round(cart->TotalSum, 2).ToString() + "$";
	}
	private: System::Void btnRemove_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		button->ForeColor = Color::FromArgb(62, 119, 170);
		button->ImageKey = L"trash_blue.png";
	}
	private: System::Void panel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Panel^ panel = (Panel^)sender;
		String^ name = panel->Name;
		int index = Int32::Parse(name[name->Length - 1].ToString()) - 1;
		if (spawnedButtons[index]->Visible)
			spawnedButtons[index]->Visible = false;
	}
	};
}