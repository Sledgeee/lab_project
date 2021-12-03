#pragma once

#include "Client.h"
#include "DBQuery.h"
#include "Mailer.h"
#include "FormPrompt.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class FormProfile : public System::Windows::Forms::Form
	{
		Client^ client;
	private: System::Windows::Forms::NumericUpDown^ nudAge;
		   String^ login;
	public:
		FormProfile(String^ login)
		{
			InitializeComponent();
			this->login = login;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblRepeatPasswd;
	private: System::Windows::Forms::TextBox^ txtRepeatPasswd;
	private: System::Windows::Forms::Label^ lblPasswd;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtEditPasswd;

	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblAge;

	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::Label^ lblCountry;
	private: System::Windows::Forms::TextBox^ txtCountry;
	private: System::Windows::Forms::Button^ btnSavePersonal;
	private: System::Windows::Forms::Label^ lblSex;
	private: System::Windows::Forms::Label^ s_name;
	private: System::Windows::Forms::Label^ f_name;
	private: System::Windows::Forms::ComboBox^ cbSex;
	private: System::Windows::Forms::TextBox^ txtSName;
	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::Button^ btnEditPasswd;

	private: System::Windows::Forms::Button^ btnEditEmail;
	private: System::Windows::Forms::Button^ btnEditLogin;
	private: System::Windows::Forms::Button^ btnSaveEditLogin;
	private: System::Windows::Forms::Button^ btnSaveEditEmail;
	private: System::Windows::Forms::Button^ btnSaveEditPasswd;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnDeleteAccount;
	private: System::Windows::Forms::Button^ btnCancelEditPasswd;

	private: System::Windows::Forms::Button^ btnCancelEditEmail;

	private: System::Windows::Forms::Button^ btnCancelEditLogin;

	protected:




	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormProfile::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->btnCancelEditPasswd = (gcnew System::Windows::Forms::Button());
			this->btnCancelEditEmail = (gcnew System::Windows::Forms::Button());
			this->btnCancelEditLogin = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnDeleteAccount = (gcnew System::Windows::Forms::Button());
			this->btnEditPasswd = (gcnew System::Windows::Forms::Button());
			this->btnEditEmail = (gcnew System::Windows::Forms::Button());
			this->btnEditLogin = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblRepeatPasswd = (gcnew System::Windows::Forms::Label());
			this->txtRepeatPasswd = (gcnew System::Windows::Forms::TextBox());
			this->lblPasswd = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtEditPasswd = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSaveEditLogin = (gcnew System::Windows::Forms::Button());
			this->btnSaveEditEmail = (gcnew System::Windows::Forms::Button());
			this->btnSaveEditPasswd = (gcnew System::Windows::Forms::Button());
			this->nudAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->txtCountry = (gcnew System::Windows::Forms::TextBox());
			this->btnSavePersonal = (gcnew System::Windows::Forms::Button());
			this->lblSex = (gcnew System::Windows::Forms::Label());
			this->s_name = (gcnew System::Windows::Forms::Label());
			this->f_name = (gcnew System::Windows::Forms::Label());
			this->cbSex = (gcnew System::Windows::Forms::ComboBox());
			this->txtSName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAge))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->btnCancelEditPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->btnCancelEditEmail);
			this->splitContainer1->Panel1->Controls->Add(this->btnCancelEditLogin);
			this->splitContainer1->Panel1->Controls->Add(this->panel1);
			this->splitContainer1->Panel1->Controls->Add(this->btnEditPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->btnEditEmail);
			this->splitContainer1->Panel1->Controls->Add(this->btnEditLogin);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->lblRepeatPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->txtRepeatPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->lblPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->lblEmail);
			this->splitContainer1->Panel1->Controls->Add(this->lblLogin);
			this->splitContainer1->Panel1->Controls->Add(this->txtLogin);
			this->splitContainer1->Panel1->Controls->Add(this->txtEditPasswd);
			this->splitContainer1->Panel1->Controls->Add(this->txtEmail);
			this->splitContainer1->Panel1->Controls->Add(this->btnSaveEditLogin);
			this->splitContainer1->Panel1->Controls->Add(this->btnSaveEditEmail);
			this->splitContainer1->Panel1->Controls->Add(this->btnSaveEditPasswd);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->nudAge);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->lblAge);
			this->splitContainer1->Panel2->Controls->Add(this->lblCity);
			this->splitContainer1->Panel2->Controls->Add(this->txtCity);
			this->splitContainer1->Panel2->Controls->Add(this->lblCountry);
			this->splitContainer1->Panel2->Controls->Add(this->txtCountry);
			this->splitContainer1->Panel2->Controls->Add(this->btnSavePersonal);
			this->splitContainer1->Panel2->Controls->Add(this->lblSex);
			this->splitContainer1->Panel2->Controls->Add(this->s_name);
			this->splitContainer1->Panel2->Controls->Add(this->f_name);
			this->splitContainer1->Panel2->Controls->Add(this->cbSex);
			this->splitContainer1->Panel2->Controls->Add(this->txtSName);
			this->splitContainer1->Panel2->Controls->Add(this->txtFName);
			this->splitContainer1->Size = System::Drawing::Size(1347, 824);
			this->splitContainer1->SplitterDistance = 623;
			this->splitContainer1->TabIndex = 0;
			// 
			// btnCancelEditPasswd
			// 
			this->btnCancelEditPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancelEditPasswd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelEditPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancelEditPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnCancelEditPasswd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEditPasswd.Image")));
			this->btnCancelEditPasswd->Location = System::Drawing::Point(542, 444);
			this->btnCancelEditPasswd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelEditPasswd->Name = L"btnCancelEditPasswd";
			this->btnCancelEditPasswd->Size = System::Drawing::Size(47, 35);
			this->btnCancelEditPasswd->TabIndex = 69;
			this->btnCancelEditPasswd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCancelEditPasswd->UseVisualStyleBackColor = true;
			this->btnCancelEditPasswd->Visible = false;
			this->btnCancelEditPasswd->Click += gcnew System::EventHandler(this, &FormProfile::btnCancelEditPasswd_Click);
			// 
			// btnCancelEditEmail
			// 
			this->btnCancelEditEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancelEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancelEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnCancelEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEditEmail.Image")));
			this->btnCancelEditEmail->Location = System::Drawing::Point(542, 304);
			this->btnCancelEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelEditEmail->Name = L"btnCancelEditEmail";
			this->btnCancelEditEmail->Size = System::Drawing::Size(47, 35);
			this->btnCancelEditEmail->TabIndex = 68;
			this->btnCancelEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCancelEditEmail->UseVisualStyleBackColor = true;
			this->btnCancelEditEmail->Visible = false;
			this->btnCancelEditEmail->Click += gcnew System::EventHandler(this, &FormProfile::btnCancelEditEmail_Click);
			// 
			// btnCancelEditLogin
			// 
			this->btnCancelEditLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancelEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancelEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnCancelEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEditLogin.Image")));
			this->btnCancelEditLogin->Location = System::Drawing::Point(540, 162);
			this->btnCancelEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelEditLogin->Name = L"btnCancelEditLogin";
			this->btnCancelEditLogin->Size = System::Drawing::Size(47, 35);
			this->btnCancelEditLogin->TabIndex = 67;
			this->btnCancelEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCancelEditLogin->UseVisualStyleBackColor = true;
			this->btnCancelEditLogin->Visible = false;
			this->btnCancelEditLogin->Click += gcnew System::EventHandler(this, &FormProfile::btnCancelEditLogin_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->btnDeleteAccount);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 711);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(621, 111);
			this->panel1->TabIndex = 66;
			// 
			// btnDeleteAccount
			// 
			this->btnDeleteAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDeleteAccount->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnDeleteAccount->FlatAppearance->BorderSize = 2;
			this->btnDeleteAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteAccount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeleteAccount->ForeColor = System::Drawing::Color::Red;
			this->btnDeleteAccount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteAccount.Image")));
			this->btnDeleteAccount->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnDeleteAccount->Location = System::Drawing::Point(167, 18);
			this->btnDeleteAccount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDeleteAccount->Name = L"btnDeleteAccount";
			this->btnDeleteAccount->Size = System::Drawing::Size(301, 70);
			this->btnDeleteAccount->TabIndex = 60;
			this->btnDeleteAccount->Text = L" Delete account";
			this->btnDeleteAccount->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDeleteAccount->UseVisualStyleBackColor = true;
			this->btnDeleteAccount->Click += gcnew System::EventHandler(this, &FormProfile::btnDeleteAccount_Click);
			this->btnDeleteAccount->MouseLeave += gcnew System::EventHandler(this, &FormProfile::btnDeleteAccount_MouseLeave);
			this->btnDeleteAccount->MouseHover += gcnew System::EventHandler(this, &FormProfile::btnDeleteAccount_MouseHover);
			// 
			// btnEditPasswd
			// 
			this->btnEditPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEditPasswd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnEditPasswd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditPasswd.Image")));
			this->btnEditPasswd->Location = System::Drawing::Point(542, 484);
			this->btnEditPasswd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditPasswd->Name = L"btnEditPasswd";
			this->btnEditPasswd->Size = System::Drawing::Size(47, 35);
			this->btnEditPasswd->TabIndex = 62;
			this->btnEditPasswd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEditPasswd->UseVisualStyleBackColor = true;
			this->btnEditPasswd->Click += gcnew System::EventHandler(this, &FormProfile::btnEditPasswd_Click);
			// 
			// btnEditEmail
			// 
			this->btnEditEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditEmail.Image")));
			this->btnEditEmail->Location = System::Drawing::Point(542, 343);
			this->btnEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditEmail->Name = L"btnEditEmail";
			this->btnEditEmail->Size = System::Drawing::Size(47, 35);
			this->btnEditEmail->TabIndex = 61;
			this->btnEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEditEmail->UseVisualStyleBackColor = true;
			this->btnEditEmail->Click += gcnew System::EventHandler(this, &FormProfile::btnEditEmail_Click);
			// 
			// btnEditLogin
			// 
			this->btnEditLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditLogin.Image")));
			this->btnEditLogin->Location = System::Drawing::Point(540, 202);
			this->btnEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditLogin->Name = L"btnEditLogin";
			this->btnEditLogin->Size = System::Drawing::Size(47, 35);
			this->btnEditLogin->TabIndex = 60;
			this->btnEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEditLogin->UseVisualStyleBackColor = true;
			this->btnEditLogin->Click += gcnew System::EventHandler(this, &FormProfile::btnEditLogin_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(126, 67);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(363, 63);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Account data";
			// 
			// lblRepeatPasswd
			// 
			this->lblRepeatPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblRepeatPasswd->AutoSize = true;
			this->lblRepeatPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRepeatPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblRepeatPasswd->Location = System::Drawing::Point(43, 581);
			this->lblRepeatPasswd->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRepeatPasswd->Name = L"lblRepeatPasswd";
			this->lblRepeatPasswd->Size = System::Drawing::Size(294, 32);
			this->lblRepeatPasswd->TabIndex = 55;
			this->lblRepeatPasswd->Text = L"Repeat new password:";
			// 
			// txtRepeatPasswd
			// 
			this->txtRepeatPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtRepeatPasswd->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtRepeatPasswd->Enabled = false;
			this->txtRepeatPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtRepeatPasswd->Location = System::Drawing::Point(50, 625);
			this->txtRepeatPasswd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtRepeatPasswd->Name = L"txtRepeatPasswd";
			this->txtRepeatPasswd->Size = System::Drawing::Size(484, 35);
			this->txtRepeatPasswd->TabIndex = 54;
			this->txtRepeatPasswd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtRepeatPasswd->UseSystemPasswordChar = true;
			// 
			// lblPasswd
			// 
			this->lblPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblPasswd->AutoSize = true;
			this->lblPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblPasswd->Location = System::Drawing::Point(43, 440);
			this->lblPasswd->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPasswd->Name = L"lblPasswd";
			this->lblPasswd->Size = System::Drawing::Size(238, 32);
			this->lblPasswd->TabIndex = 53;
			this->lblPasswd->Text = L"Change password:";
			// 
			// lblEmail
			// 
			this->lblEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblEmail->Location = System::Drawing::Point(43, 299);
			this->lblEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(98, 32);
			this->lblEmail->TabIndex = 52;
			this->lblEmail->Text = L"Email:";
			// 
			// lblLogin
			// 
			this->lblLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblLogin->Location = System::Drawing::Point(43, 157);
			this->lblLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(98, 32);
			this->lblLogin->TabIndex = 51;
			this->lblLogin->Text = L"Login:";
			// 
			// txtLogin
			// 
			this->txtLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtLogin->Enabled = false;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLogin->Location = System::Drawing::Point(48, 202);
			this->txtLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(484, 35);
			this->txtLogin->TabIndex = 50;
			this->txtLogin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtEditPasswd
			// 
			this->txtEditPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEditPasswd->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEditPasswd->Enabled = false;
			this->txtEditPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtEditPasswd->Location = System::Drawing::Point(50, 484);
			this->txtEditPasswd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEditPasswd->Name = L"txtEditPasswd";
			this->txtEditPasswd->Size = System::Drawing::Size(484, 35);
			this->txtEditPasswd->TabIndex = 49;
			this->txtEditPasswd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtEditPasswd->UseSystemPasswordChar = true;
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmail->Enabled = false;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtEmail->Location = System::Drawing::Point(50, 343);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(484, 35);
			this->txtEmail->TabIndex = 48;
			this->txtEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnSaveEditLogin
			// 
			this->btnSaveEditLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSaveEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSaveEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSaveEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveEditLogin.Image")));
			this->btnSaveEditLogin->Location = System::Drawing::Point(540, 202);
			this->btnSaveEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSaveEditLogin->Name = L"btnSaveEditLogin";
			this->btnSaveEditLogin->Size = System::Drawing::Size(47, 35);
			this->btnSaveEditLogin->TabIndex = 63;
			this->btnSaveEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSaveEditLogin->UseVisualStyleBackColor = true;
			this->btnSaveEditLogin->Visible = false;
			this->btnSaveEditLogin->Click += gcnew System::EventHandler(this, &FormProfile::btnSaveEditLogin_Click);
			// 
			// btnSaveEditEmail
			// 
			this->btnSaveEditEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSaveEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSaveEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSaveEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveEditEmail.Image")));
			this->btnSaveEditEmail->Location = System::Drawing::Point(542, 343);
			this->btnSaveEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSaveEditEmail->Name = L"btnSaveEditEmail";
			this->btnSaveEditEmail->Size = System::Drawing::Size(47, 35);
			this->btnSaveEditEmail->TabIndex = 64;
			this->btnSaveEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSaveEditEmail->UseVisualStyleBackColor = true;
			this->btnSaveEditEmail->Visible = false;
			this->btnSaveEditEmail->Click += gcnew System::EventHandler(this, &FormProfile::btnSaveEditEmail_Click);
			// 
			// btnSaveEditPasswd
			// 
			this->btnSaveEditPasswd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSaveEditPasswd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveEditPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSaveEditPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSaveEditPasswd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveEditPasswd.Image")));
			this->btnSaveEditPasswd->Location = System::Drawing::Point(542, 484);
			this->btnSaveEditPasswd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSaveEditPasswd->Name = L"btnSaveEditPasswd";
			this->btnSaveEditPasswd->Size = System::Drawing::Size(47, 35);
			this->btnSaveEditPasswd->TabIndex = 65;
			this->btnSaveEditPasswd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSaveEditPasswd->UseVisualStyleBackColor = true;
			this->btnSaveEditPasswd->Visible = false;
			this->btnSaveEditPasswd->Click += gcnew System::EventHandler(this, &FormProfile::btnSaveEditPasswd_Click);
			// 
			// nudAge
			// 
			this->nudAge->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nudAge->Location = System::Drawing::Point(411, 343);
			this->nudAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudAge->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudAge->Name = L"nudAge";
			this->nudAge->Size = System::Drawing::Size(120, 35);
			this->nudAge->TabIndex = 60;
			this->nudAge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(176, 67);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 63);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Personal data";
			// 
			// lblAge
			// 
			this->lblAge->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblAge->AutoSize = true;
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAge->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblAge->Location = System::Drawing::Point(404, 299);
			this->lblAge->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(70, 32);
			this->lblAge->TabIndex = 58;
			this->lblAge->Text = L"Age:";
			// 
			// lblCity
			// 
			this->lblCity->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCity->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCity->Location = System::Drawing::Point(38, 581);
			this->lblCity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(84, 32);
			this->lblCity->TabIndex = 56;
			this->lblCity->Text = L"City:";
			// 
			// txtCity
			// 
			this->txtCity->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtCity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtCity->Location = System::Drawing::Point(45, 625);
			this->txtCity->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(299, 35);
			this->txtCity->TabIndex = 55;
			this->txtCity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblCountry
			// 
			this->lblCountry->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCountry->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCountry->Location = System::Drawing::Point(38, 440);
			this->lblCountry->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(126, 32);
			this->lblCountry->TabIndex = 54;
			this->lblCountry->Text = L"Country:";
			// 
			// txtCountry
			// 
			this->txtCountry->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtCountry->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtCountry->Location = System::Drawing::Point(45, 484);
			this->txtCountry->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCountry->Name = L"txtCountry";
			this->txtCountry->Size = System::Drawing::Size(299, 35);
			this->txtCountry->TabIndex = 53;
			this->txtCountry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnSavePersonal
			// 
			this->btnSavePersonal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSavePersonal->FlatAppearance->BorderSize = 2;
			this->btnSavePersonal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSavePersonal->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSavePersonal->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSavePersonal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSavePersonal.Image")));
			this->btnSavePersonal->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnSavePersonal->Location = System::Drawing::Point(304, 729);
			this->btnSavePersonal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSavePersonal->Name = L"btnSavePersonal";
			this->btnSavePersonal->Size = System::Drawing::Size(157, 70);
			this->btnSavePersonal->TabIndex = 52;
			this->btnSavePersonal->Text = L"Save";
			this->btnSavePersonal->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSavePersonal->UseVisualStyleBackColor = true;
			this->btnSavePersonal->Click += gcnew System::EventHandler(this, &FormProfile::btnSavePersonal_Click_1);
			// 
			// lblSex
			// 
			this->lblSex->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblSex->AutoSize = true;
			this->lblSex->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSex->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblSex->Location = System::Drawing::Point(405, 157);
			this->lblSex->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSex->Name = L"lblSex";
			this->lblSex->Size = System::Drawing::Size(70, 32);
			this->lblSex->TabIndex = 51;
			this->lblSex->Text = L"Sex:";
			// 
			// s_name
			// 
			this->s_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->s_name->AutoSize = true;
			this->s_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->s_name->ForeColor = System::Drawing::Color::Gainsboro;
			this->s_name->Location = System::Drawing::Point(38, 299);
			this->s_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->s_name->Name = L"s_name";
			this->s_name->Size = System::Drawing::Size(168, 32);
			this->s_name->TabIndex = 50;
			this->s_name->Text = L"Secondname:";
			// 
			// f_name
			// 
			this->f_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->f_name->AutoSize = true;
			this->f_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_name->ForeColor = System::Drawing::Color::Gainsboro;
			this->f_name->Location = System::Drawing::Point(41, 157);
			this->f_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->f_name->Name = L"f_name";
			this->f_name->Size = System::Drawing::Size(154, 32);
			this->f_name->TabIndex = 49;
			this->f_name->Text = L"Firstname:";
			// 
			// cbSex
			// 
			this->cbSex->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbSex->BackColor = System::Drawing::Color::Gainsboro;
			this->cbSex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSex->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbSex->FormattingEnabled = true;
			this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"None" });
			this->cbSex->Location = System::Drawing::Point(411, 202);
			this->cbSex->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cbSex->Name = L"cbSex";
			this->cbSex->Size = System::Drawing::Size(295, 40);
			this->cbSex->TabIndex = 48;
			// 
			// txtSName
			// 
			this->txtSName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtSName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtSName->Location = System::Drawing::Point(45, 343);
			this->txtSName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSName->Name = L"txtSName";
			this->txtSName->Size = System::Drawing::Size(299, 35);
			this->txtSName->TabIndex = 47;
			this->txtSName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtFName
			// 
			this->txtFName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtFName->Location = System::Drawing::Point(45, 202);
			this->txtFName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(300, 35);
			this->txtFName->TabIndex = 46;
			this->txtFName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// FormProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->splitContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormProfile";
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &FormProfile::FormProfile_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAge))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormProfile_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand("Select * From Clients Where Login=@Login", dbc);
		cmd->Parameters->AddWithValue("@Login", login);
		SqlDataReader^ sdr = cmd->ExecuteReader();
		if (sdr->HasRows)
		{
			sdr->Read();
			client = gcnew Client(
				Convert::ToInt32(sdr["Id"]),
				sdr["Login"]->ToString(),
				sdr["Passwd"]->ToString(),
				sdr["Email"]->ToString(),
				sdr["Fullname"]->ToString(),
				Convert::ToInt32(sdr["Age"]),
				sdr["Sex"]->ToString(),
				sdr["Country"]->ToString(),
				sdr["City"]->ToString(),
				(float)Convert::ToDouble(sdr["Money"])
			);
			dbc->Close();
		}
		else
		{
			dbc->Close();
			this->Close();
		}
		txtLogin->Text = client->getLogin();
		txtEmail->Text = client->getEmail();
		auto name = client->getName()->Split(' ');
		txtFName->Text = name[0];
		txtSName->Text = name[1];
		nudAge->Value = client->getAge();
		auto sex = client->getSex();
		if (String::Compare(sex, "Male") == 0)
			cbSex->SelectedIndex = 0;
		else if (String::Compare(sex, "Female") == 0)
			cbSex->SelectedIndex = 1;
		else cbSex->SelectedIndex = 2;
		txtCountry->Text = client->getCountry();
		txtCity->Text = client->getCity();
	}
	private: System::Void btnSavePersonal_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Clients Set Fullname=@Fullname, " +
			"Age=@Age, Sex=@Sex, Country=@Country, City=@City Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", client->getId());
		cmd->Parameters->AddWithValue("@Fullname", txtSName->Text + " " + txtFName->Text);
		cmd->Parameters->AddWithValue("@Age", nudAge->Value);
		cmd->Parameters->AddWithValue("@Sex", cbSex->SelectedItem->ToString());
		cmd->Parameters->AddWithValue("@Country", txtCountry->Text);
		cmd->Parameters->AddWithValue("@City", txtCity->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
	}
	private: System::Void btnEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtLogin->Enabled = true;
		btnEditLogin->Visible = false;
		btnSaveEditLogin->Visible = true;
		btnCancelEditLogin->Visible = true;
		txtLogin->Focus();
	}
	private: System::Void btnSaveEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Clients Set Login=@Login Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", client->getId());
		cmd->Parameters->AddWithValue("@Login", txtLogin->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		client->setLogin(txtLogin->Text);
		btnCancelEditLogin->PerformClick();
	}
	private: System::Void btnCancelEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtLogin->Text = client->getLogin();
		txtLogin->Enabled = false;
		btnEditLogin->Visible = true;
		btnSaveEditLogin->Visible = false;
		btnCancelEditLogin->Visible = false;
		label1->Focus();
	}
	private: System::Void btnEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtEmail->Enabled = true;
		btnEditEmail->Visible = false;
		btnSaveEditEmail->Visible = true;
		btnCancelEditEmail->Visible = true;
		txtEmail->Focus();
	}
	private: System::Void btnSaveEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MailAddress^ test = gcnew MailAddress(txtEmail->Text);
		}
		catch (...)
		{
			MessageBox::Show(this, "Email is invalid", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ charset = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnN1234567890";
		Random^ rand = gcnew Random();
		String^ key = "";
		for (int i = 0; i < 15; i++)
		{
			key += (Char)charset[rand->Next(0, charset->Length - 1)];
		}
		Mailer::SendMail(
			gcnew MailAddress(txtEmail->Text),
			"Change E-mail veryfing key",
			"<h2 style=""margin:0"">Key: " + key + "</h2><br></br>" +
			"<h2 style=""margin:0"">If you don't do it, just ignore this mail.</h2><br></br>" +
			"© Oleg Voloshyn, 2021. All rights reserved."
		);
		if ((gcnew FormPrompt(key))->ShowDialog() == Windows::Forms::DialogResult::Abort)
			return;
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Clients Set Email=@Email Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", client->getId());
		cmd->Parameters->AddWithValue("@Email", txtEmail->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		client->setEmail(txtEmail->Text);
		btnCancelEditEmail->PerformClick();
	}
	private: System::Void btnCancelEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtEmail->Text = client->getEmail();
		txtEmail->Enabled = false;
		btnEditEmail->Visible = true;
		btnSaveEditEmail->Visible = false;
		btnCancelEditEmail->Visible = false;
		label1->Focus();
	}
	private: System::Void btnEditPasswd_Click(System::Object^ sender, System::EventArgs^ e) {
		txtEditPasswd->Enabled = true;
		txtRepeatPasswd->Enabled = true;
		btnEditPasswd->Visible = false;
		btnSaveEditPasswd->Visible = true;
		btnCancelEditPasswd->Visible = true;
		txtEditPasswd->Focus();
	}
	private: System::Void btnSaveEditPasswd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtEditPasswd->Text == txtRepeatPasswd->Text)
		{
			MessageBox::Show(this, "Passwords not equal, please retype it", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Clients Set Login=@Passwd Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", client->getId());
		cmd->Parameters->AddWithValue("@Passwd", DBQuery::md5hash(txtEditPasswd->Text));
		cmd->ExecuteNonQuery();
		dbc->Close();
		client->setPasswd(txtEditPasswd->Text);
		btnCancelEditPasswd->PerformClick();
	}
	private: System::Void btnCancelEditPasswd_Click(System::Object^ sender, System::EventArgs^ e) {
		txtEditPasswd->Text = String::Empty;
		txtRepeatPasswd->Text = String::Empty;
		txtEditPasswd->Enabled = false;
		txtRepeatPasswd->Enabled = false;
		btnEditPasswd->Visible = true;
		btnSaveEditEmail->Visible = false;
		btnCancelEditPasswd->Visible = false;
		label1->Focus();
	}
	private: System::Void btnDeleteAccount_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		btnDeleteAccount->BackColor = Color::Red;
		btnDeleteAccount->ForeColor = Color::Gainsboro;
		btnDeleteAccount->FlatAppearance->BorderColor = Color::Gainsboro;
	}
	private: System::Void btnDeleteAccount_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		btnDeleteAccount->BackColor = Color::FromArgb(34, 33, 74);
		btnDeleteAccount->ForeColor = Color::Red;
		btnDeleteAccount->FlatAppearance->BorderColor = Color::Red;
	}
	private: System::Void btnDeleteAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dr = MessageBox::Show(this, "Your account will be removed permanently without possibility of recovery." +
			" Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (dr == Windows::Forms::DialogResult::Yes)
		{
			DBQuery::DeleteRow(client->getId(), "Clients");
			Application::Restart();
		}
	}
	private: System::Void btnSavePersonal_Click_1(System::Object^ sender, System::EventArgs^ e) {
		bool isGoodUpdate = true;

		if (!String::IsNullOrWhiteSpace(txtSName->Text) && !String::IsNullOrWhiteSpace(txtFName->Text)
			&& txtSName->Text + " " + txtFName->Text != client->getName())
			DBQuery::UpdateRow(client->getId(), "Clients", "Fullname", txtSName->Text + " " + txtFName->Text);
		else isGoodUpdate = false;

		if (nudAge->Value != client->getAge())
			DBQuery::UpdateRow(client->getId(), "Clients", "Age", nudAge->Value.ToString());
		else isGoodUpdate = false;

		if (!String::IsNullOrWhiteSpace(txtCountry->Text) && txtCountry->Text != client->getCountry())
			DBQuery::UpdateRow(client->getId(), "Clients", "Country", txtCountry->Text);
		else isGoodUpdate = false;

		if (!String::IsNullOrWhiteSpace(txtCity->Text) && txtCity->Text != client->getCity())
			DBQuery::UpdateRow(client->getId(), "Clients", "City", txtCity->Text);
		else isGoodUpdate = false;

		if (cbSex->SelectedIndex > -1 && cbSex->Items[cbSex->SelectedIndex]->ToString() != client->getSex())
			DBQuery::UpdateRow(client->getId(), "Clients", "Sex", cbSex->Items[cbSex->SelectedIndex]->ToString());
		else isGoodUpdate = false;

		if (!isGoodUpdate)
			MessageBox::Show(this, "Not all data was updated, you have empty fields or entered data is identical to old",
				"Work report", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
};
}