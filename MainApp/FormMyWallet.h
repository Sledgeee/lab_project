#pragma once

#include "Customer.h"
#include "DBQuery.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMyWallet
	/// </summary>
	public ref class FormMyWallet : public System::Windows::Forms::Form
	{
	public:
		FormMyWallet(Customer^ customer)
		{
			InitializeComponent();
			this->customer = customer;
		}

	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::Label^ lblBalance;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Panel^ panel7;

	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   Customer^ customer;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMyWallet()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMyWallet::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblBalance);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1354, 88);
			this->panel1->TabIndex = 0;
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBalance->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblBalance->Location = System::Drawing::Point(219, 26);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(159, 35);
			this->lblBalance->TabIndex = 0;
			this->lblBalance->Text = L"BALANCE: ";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 88);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1354, 532);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(225, 28);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(871, 480);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormMyWallet::panel4_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->pictureBox4);
			this->panel7->Controls->Add(this->pictureBox2);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->pictureBox1);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->textBox5);
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Location = System::Drawing::Point(169, 161);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(535, 283);
			this->panel7->TabIndex = 4;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormMyWallet::panel4_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->pictureBox3->Location = System::Drawing::Point(22, 135);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(157, 131);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(19, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 17);
			this->label10->TabIndex = 15;
			this->label10->Text = L"CURRENT CART VENDOR";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(110, 35);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(83, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(22, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label9->Location = System::Drawing::Point(18, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(208, 21);
			this->label9->TabIndex = 5;
			this->label9->Text = L"SUPPORTED CARD VENDORS";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(199, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Location = System::Drawing::Point(233, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 25);
			this->label8->TabIndex = 11;
			this->label8->Text = L"/";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->BackColor = System::Drawing::Color::DimGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox6->Location = System::Drawing::Point(259, 187);
			this->textBox6->MaxLength = 2;
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(32, 27);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMyWallet::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(199, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"PAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMyWallet::button1_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(438, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"CVV / CVC";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(196, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"VALIDITY";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(196, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"CARD NUMBER";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->BackColor = System::Drawing::Color::DimGray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox5->Location = System::Drawing::Point(441, 187);
			this->textBox5->MaxLength = 3;
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(77, 27);
			this->textBox5->TabIndex = 5;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMyWallet::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::Color::DimGray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox4->Location = System::Drawing::Point(199, 187);
			this->textBox4->MaxLength = 2;
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(31, 27);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMyWallet::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::DimGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Location = System::Drawing::Point(199, 135);
			this->textBox3->MaxLength = 16;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox3->Size = System::Drawing::Size(319, 27);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormMyWallet::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMyWallet::textBox1_KeyPress);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Location = System::Drawing::Point(169, 118);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(535, 37);
			this->panel6->TabIndex = 3;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormMyWallet::panel4_Paint);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox2->BackColor = System::Drawing::Color::DimGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Location = System::Drawing::Point(166, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(366, 27);
			this->textBox2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(119, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"-3%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(5, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"TO ACCRUAL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(163, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 35);
			this->label2->TabIndex = 3;
			this->label2->Text = L"REPLENISHMENT";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(169, 57);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(535, 55);
			this->panel5->TabIndex = 0;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormMyWallet::panel4_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BackColor = System::Drawing::Color::DimGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Location = System::Drawing::Point(166, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(366, 27);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormMyWallet::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMyWallet::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(163, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ENTER THE REPLENISHMENT AMOUNT";
			// 
			// FormMyWallet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(1354, 620);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormMyWallet";
			this->Load += gcnew System::EventHandler(this, &FormMyWallet::FormMyWallet_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrWhiteSpace(textBox1->Text)) {
			try {
				textBox2->Text = Math::Round(
					((Convert::ToDouble(textBox1->Text) - Convert::ToDouble(textBox1->Text) / 100 * 3)), 2).ToString() + "$";
			}
			catch (...)
			{
				MessageBox::Show(this, "You entered to large number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Text = "";
				textBox2->Text = "";
			}
		}
		else {
			textBox1->Text = "";
			textBox2->Text = "";
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, ((Panel^)sender)->ClientRectangle, Color::FromArgb(42, 42, 42), ButtonBorderStyle::Solid);
	}
	private: System::Void FormMyWallet_Load(System::Object^ sender, System::EventArgs^ e) {
		lblBalance->Text += customer->getMoney() + "$";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE Accounts SET Money=@Money WHERE Id='" + customer->getId() + "'", con);
		float money = customer->getMoney() + ((float)Convert::ToDouble(textBox1->Text) - (float)Convert::ToDouble(textBox1->Text) / 100 * 3);
		cmd->Parameters->AddWithValue("@Money", Math::Round(money, 2));
		cmd->ExecuteNonQuery();
		con->Close();
		customer->setMoney(money);
		lblBalance->Text = "BALANCE: " + customer->getMoney() + "$";
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text->Length == 0)
		{
			if (pictureBox3->Image != nullptr)
				pictureBox3->Image = nullptr;
			return;
		}
		if (pictureBox3->Image == nullptr) {
			switch (Int32::Parse(textBox3->Text[0].ToString()))
			{
			case 3:
				pictureBox3->Image = pictureBox4->Image;
				break;
			case 4:
				pictureBox3->Image = pictureBox2->Image;
				break;
			case 5:
				pictureBox3->Image = pictureBox1->Image;
				break;
			}
		}
	}
	};
}