#pragma once

#include "FormClientMenu.h"
#include "Mailer.h"
#include "Account.h"
#include "Admin.h"
#include "Client.h"
#include <stddef.h>
#using <System.dll>

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Sql;
	using namespace SqlClient;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for FormLogUp
	/// </summary>

	public ref class FormLogUp : public System::Windows::Forms::Form
	{
	public:
		bool succes = false;
		FormLogUp(void)
		{
			InitializeComponent();
			this->Text = String::Empty;
			this->ControlBox = false;
			this->DoubleBuffered = true;
			this->MaximizedBounds = Screen::PrimaryScreen->WorkingArea;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormLogUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnNextStep;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblPasswd;
	private: System::Windows::Forms::Label^ lblRepeatPasswd;
	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::TextBox^ Login;
	private: System::Windows::Forms::TextBox^ Passwd;
	private: System::Windows::Forms::TextBox^ Passwd_repeat;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ return_back;
	private: System::Windows::Forms::CheckBox^ cbAdminRoot;


	private: System::Windows::Forms::Button^ btnFAQ;
	private: System::Windows::Forms::Label^ lblFName;
	private: System::Windows::Forms::Label^ lblSName;
	private: System::Windows::Forms::Label^ lblCountry;
	private: System::Windows::Forms::TextBox^ FName;
	private: System::Windows::Forms::TextBox^ SName;
	private: System::Windows::Forms::TextBox^ Country;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::TextBox^ City;
	private: System::Windows::Forms::Button^ btnSignUp;
	private: System::Windows::Forms::Panel^ PanelStep2;






























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLogUp::typeid));
			this->btnNextStep = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblPasswd = (gcnew System::Windows::Forms::Label());
			this->lblRepeatPasswd = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->Login = (gcnew System::Windows::Forms::TextBox());
			this->Passwd = (gcnew System::Windows::Forms::TextBox());
			this->Passwd_repeat = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->return_back = (gcnew System::Windows::Forms::Button());
			this->cbAdminRoot = (gcnew System::Windows::Forms::CheckBox());
			this->btnFAQ = (gcnew System::Windows::Forms::Button());
			this->lblFName = (gcnew System::Windows::Forms::Label());
			this->lblSName = (gcnew System::Windows::Forms::Label());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->FName = (gcnew System::Windows::Forms::TextBox());
			this->SName = (gcnew System::Windows::Forms::TextBox());
			this->Country = (gcnew System::Windows::Forms::TextBox());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->City = (gcnew System::Windows::Forms::TextBox());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->PanelStep2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelStep2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnNextStep
			// 
			this->btnNextStep->FlatAppearance->BorderSize = 2;
			this->btnNextStep->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNextStep->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnNextStep->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextStep.Image")));
			this->btnNextStep->Location = System::Drawing::Point(148, 418);
			this->btnNextStep->Name = L"btnNextStep";
			this->btnNextStep->Size = System::Drawing::Size(137, 50);
			this->btnNextStep->TabIndex = 0;
			this->btnNextStep->Text = L"Next step";
			this->btnNextStep->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNextStep->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnNextStep->UseVisualStyleBackColor = true;
			this->btnNextStep->Click += gcnew System::EventHandler(this, &FormLogUp::btnNextStep_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnMinimize);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(434, 26);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogUp::panel1_MouseDown);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(405, -1);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 25);
			this->btnExit->TabIndex = 9;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormLogUp::btnExit_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(386, 2);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 10;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormLogUp::btnMinimize_Click);
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblEmail->Location = System::Drawing::Point(21, 100);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(89, 25);
			this->lblEmail->TabIndex = 9;
			this->lblEmail->Text = L"E-mail:";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblLogin->Location = System::Drawing::Point(22, 167);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(78, 25);
			this->lblLogin->TabIndex = 10;
			this->lblLogin->Text = L"Login:";
			// 
			// lblPasswd
			// 
			this->lblPasswd->AutoSize = true;
			this->lblPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblPasswd->Location = System::Drawing::Point(22, 231);
			this->lblPasswd->Name = L"lblPasswd";
			this->lblPasswd->Size = System::Drawing::Size(111, 25);
			this->lblPasswd->TabIndex = 11;
			this->lblPasswd->Text = L"Password:";
			// 
			// lblRepeatPasswd
			// 
			this->lblRepeatPasswd->AutoSize = true;
			this->lblRepeatPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRepeatPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblRepeatPasswd->Location = System::Drawing::Point(21, 298);
			this->lblRepeatPasswd->Name = L"lblRepeatPasswd";
			this->lblRepeatPasswd->Size = System::Drawing::Size(188, 25);
			this->lblRepeatPasswd->TabIndex = 12;
			this->lblRepeatPasswd->Text = L"Repeat password:";
			// 
			// Email
			// 
			this->Email->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email->Location = System::Drawing::Point(23, 127);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(397, 30);
			this->Email->TabIndex = 13;
			this->Email->Enter += gcnew System::EventHandler(this, &FormLogUp::Email_Enter);
			// 
			// Login
			// 
			this->Login->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login->Location = System::Drawing::Point(23, 195);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(397, 30);
			this->Login->TabIndex = 14;
			this->Login->Enter += gcnew System::EventHandler(this, &FormLogUp::Login_Enter);
			// 
			// Passwd
			// 
			this->Passwd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Passwd->Location = System::Drawing::Point(23, 259);
			this->Passwd->Name = L"Passwd";
			this->Passwd->Size = System::Drawing::Size(397, 30);
			this->Passwd->TabIndex = 15;
			this->Passwd->UseSystemPasswordChar = true;
			this->Passwd->Enter += gcnew System::EventHandler(this, &FormLogUp::Passwd_Enter);
			// 
			// Passwd_repeat
			// 
			this->Passwd_repeat->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Passwd_repeat->Location = System::Drawing::Point(23, 326);
			this->Passwd_repeat->Name = L"Passwd_repeat";
			this->Passwd_repeat->Size = System::Drawing::Size(397, 30);
			this->Passwd_repeat->TabIndex = 16;
			this->Passwd_repeat->UseSystemPasswordChar = true;
			this->Passwd_repeat->Enter += gcnew System::EventHandler(this, &FormLogUp::Passwd_repeat_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 51);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// return_back
			// 
			this->return_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->return_back->FlatAppearance->BorderSize = 0;
			this->return_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->return_back->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->return_back->ForeColor = System::Drawing::Color::Gainsboro;
			this->return_back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"return_back.Image")));
			this->return_back->Location = System::Drawing::Point(3, 31);
			this->return_back->Name = L"return_back";
			this->return_back->Size = System::Drawing::Size(55, 41);
			this->return_back->TabIndex = 20;
			this->return_back->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->return_back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->return_back->UseVisualStyleBackColor = true;
			this->return_back->Click += gcnew System::EventHandler(this, &FormLogUp::return_back_Click);
			// 
			// cbAdminRoot
			// 
			this->cbAdminRoot->AutoSize = true;
			this->cbAdminRoot->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAdminRoot->ForeColor = System::Drawing::Color::Gainsboro;
			this->cbAdminRoot->Location = System::Drawing::Point(23, 369);
			this->cbAdminRoot->Name = L"cbAdminRoot";
			this->cbAdminRoot->Size = System::Drawing::Size(284, 29);
			this->cbAdminRoot->TabIndex = 21;
			this->cbAdminRoot->Text = L"Sign up with admin root";
			this->cbAdminRoot->UseVisualStyleBackColor = true;
			// 
			// btnFAQ
			// 
			this->btnFAQ->FlatAppearance->BorderSize = 0;
			this->btnFAQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFAQ->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFAQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFAQ.Image")));
			this->btnFAQ->Location = System::Drawing::Point(309, 364);
			this->btnFAQ->Name = L"btnFAQ";
			this->btnFAQ->Size = System::Drawing::Size(39, 39);
			this->btnFAQ->TabIndex = 22;
			this->btnFAQ->UseVisualStyleBackColor = true;
			this->btnFAQ->Click += gcnew System::EventHandler(this, &FormLogUp::btnFAQ_Click);
			// 
			// lblFName
			// 
			this->lblFName->AutoSize = true;
			this->lblFName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFName->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblFName->Location = System::Drawing::Point(20, 9);
			this->lblFName->Name = L"lblFName";
			this->lblFName->Size = System::Drawing::Size(133, 25);
			this->lblFName->TabIndex = 17;
			this->lblFName->Text = L"First name:";
			// 
			// lblSName
			// 
			this->lblSName->AutoSize = true;
			this->lblSName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSName->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblSName->Location = System::Drawing::Point(21, 76);
			this->lblSName->Name = L"lblSName";
			this->lblSName->Size = System::Drawing::Size(144, 25);
			this->lblSName->TabIndex = 18;
			this->lblSName->Text = L"Second name:";
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCountry->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCountry->Location = System::Drawing::Point(20, 151);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(100, 25);
			this->lblCountry->TabIndex = 20;
			this->lblCountry->Text = L"Country:";
			// 
			// FName
			// 
			this->FName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FName->Location = System::Drawing::Point(22, 36);
			this->FName->Name = L"FName";
			this->FName->Size = System::Drawing::Size(397, 30);
			this->FName->TabIndex = 21;
			this->FName->Enter += gcnew System::EventHandler(this, &FormLogUp::FName_Enter);
			// 
			// SName
			// 
			this->SName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SName->Location = System::Drawing::Point(22, 104);
			this->SName->Name = L"SName";
			this->SName->Size = System::Drawing::Size(397, 30);
			this->SName->TabIndex = 22;
			this->SName->Enter += gcnew System::EventHandler(this, &FormLogUp::SName_Enter);
			// 
			// Country
			// 
			this->Country->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Country->Location = System::Drawing::Point(22, 179);
			this->Country->Name = L"Country";
			this->Country->Size = System::Drawing::Size(397, 30);
			this->Country->TabIndex = 24;
			this->Country->Enter += gcnew System::EventHandler(this, &FormLogUp::Country_Enter);
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCity->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCity->Location = System::Drawing::Point(20, 221);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(67, 25);
			this->lblCity->TabIndex = 25;
			this->lblCity->Text = L"City:";
			// 
			// City
			// 
			this->City->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->City->Location = System::Drawing::Point(22, 249);
			this->City->Name = L"City";
			this->City->Size = System::Drawing::Size(397, 30);
			this->City->TabIndex = 26;
			this->City->Enter += gcnew System::EventHandler(this, &FormLogUp::City_Enter);
			// 
			// btnSignUp
			// 
			this->btnSignUp->FlatAppearance->BorderSize = 2;
			this->btnSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignUp->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignUp->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSignUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignUp.Image")));
			this->btnSignUp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSignUp->Location = System::Drawing::Point(128, 327);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btnSignUp->Size = System::Drawing::Size(157, 52);
			this->btnSignUp->TabIndex = 29;
			this->btnSignUp->Text = L" Sign up";
			this->btnSignUp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSignUp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &FormLogUp::btnSignUp_Click);
			// 
			// PanelStep2
			// 
			this->PanelStep2->Controls->Add(this->btnSignUp);
			this->PanelStep2->Controls->Add(this->City);
			this->PanelStep2->Controls->Add(this->lblCity);
			this->PanelStep2->Controls->Add(this->Country);
			this->PanelStep2->Controls->Add(this->SName);
			this->PanelStep2->Controls->Add(this->FName);
			this->PanelStep2->Controls->Add(this->lblCountry);
			this->PanelStep2->Controls->Add(this->lblSName);
			this->PanelStep2->Controls->Add(this->lblFName);
			this->PanelStep2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelStep2->Location = System::Drawing::Point(0, 77);
			this->PanelStep2->Name = L"PanelStep2";
			this->PanelStep2->Size = System::Drawing::Size(434, 523);
			this->PanelStep2->TabIndex = 23;
			this->PanelStep2->Visible = false;
			// 
			// FormLogUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(434, 600);
			this->ControlBox = false;
			this->Controls->Add(this->PanelStep2);
			this->Controls->Add(this->btnFAQ);
			this->Controls->Add(this->cbAdminRoot);
			this->Controls->Add(this->return_back);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Passwd_repeat);
			this->Controls->Add(this->Passwd);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->lblRepeatPasswd);
			this->Controls->Add(this->lblPasswd);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnNextStep);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormLogUp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormLogUp::FormLogUp_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormLogUp::FormLogIn_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogUp::FormLogIn_MouseDown);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelStep2->ResumeLayout(false);
			this->PanelStep2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void setError(int key)
	{
		switch (key)
		{
		case 1:
			Login->BackColor = Color::Red;
			Login->ForeColor = Color::White;
			break;
		case 2:
			Email->BackColor = Color::Red;
			Email->ForeColor = Color::White;
			break;
		case 3:
			Passwd->BackColor = Color::Red;
			Passwd->ForeColor = Color::White;
			break;
		case 4:
			Passwd_repeat->BackColor = Color::Red;
			Passwd_repeat->ForeColor = Color::White;
			break;
		case 5:
			FName->BackColor = Color::Red;
			FName->ForeColor = Color::White;
			break;
		case 6:
			SName->BackColor = Color::Red;
			SName->ForeColor = Color::White;
			break;
			break;
		case 7:
			Country->BackColor = Color::Red;
			Country->ForeColor = Color::White;
			break;
		case 8:
			City->BackColor = Color::Red;
			City->ForeColor = Color::White;
			break;
			break;
		}
	}
	private: System::Boolean isValidEmail(String^ email)
	{
		try {
			auto result = gcnew System::Net::Mail::MailAddress(email);
			return true;
		}
		catch (...)
		{
			return false;
		}
	}
	private: System::Boolean isValidRegData()
	{
		bool flag = true;
		if (String::IsNullOrWhiteSpace(Login->Text))
		{
			setError(1);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(Email->Text) || !isValidEmail(Email->Text))
		{
			setError(2);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(Passwd->Text))
		{
			setError(3);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(Passwd_repeat->Text))
		{
			setError(4);
			flag = false;
		}

		if (flag == false) return false;

		if (String::Compare(Passwd->Text, Passwd_repeat->Text) == 0)
		{
			if (DBQuery::isNewRegisterData(this, Login->Text, Email->Text))
				return true;
		}
		else {
			setError(4);
			return false;
		}
		return false;
	}
	private: System::Boolean isValidPersonData()
	{
		bool flag = true;
		if (String::IsNullOrWhiteSpace(FName->Text))
		{
			setError(5);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(SName->Text))
		{
			setError(6);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(Country->Text))
		{
			setError(7);
			flag = false;
		}
		if (String::IsNullOrWhiteSpace(City->Text))
		{
			setError(8);
			flag = false;
		}

		if (flag == false) return false;

		if (String::Compare(Passwd->Text, Passwd_repeat->Text) == 0)
		{
			if (DBQuery::isNewRegisterData(this, Login->Text, Email->Text))
				return true;
		}
		else {
			setError(4);
			return false;
		}
		return false;
	}

	private: System::Void FormLogIn_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Size = System::Drawing::Size(436, 479);
		// 436; 602 - next step
	}

	private: System::Void btnNextStep_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isValidRegData()) return;
		this->Size = System::Drawing::Size(436, 602);
		PanelStep2->Visible = true;
	}

	private: System::Void btnFAQ_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isValidPersonData()) return;
		Account^ account = gcnew Account(
			NULL,
			Login->Text,
			Passwd->Text,
			Email->Text,
			(FName->Text + " " + SName->Text),
			Country->Text,
			City->Text,
			0.f,
			"",
			false
		);
		if (!cbAdminRoot->Checked)
		{
			account->setRoot("Client");
			Client^ client = gcnew Client(account);
			client->CreateAccount();
			Mailer::SendMail(gcnew MailAddress(Email->Text), Mailer::welcomeSubject, Mailer::welcomeMessage);
		}
		else {
			account->setRoot("Admin");
			Admin^ admin = gcnew Admin(account);
			admin->CreateAccount();
			Mailer::SendMail(gcnew MailAddress(Email->Text), Mailer::welcomeSubject, Mailer::welcomeMessageAdmin);
		}
		succes = true;
		this->Close();
	}

	private: System::Void FormLogIn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void FormLogUp_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (succes) this->DialogResult = System::Windows::Forms::DialogResult::OK;
		else this->DialogResult = System::Windows::Forms::DialogResult::Abort;
	}
	private: System::Void Email_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Email->BackColor == Color::Red)
		{
			Email->BackColor = Color::White;
			Email->ForeColor = Color::Black;
		}
	}
	private: System::Void Login_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Login->BackColor == Color::Red)
		{
			Login->BackColor = Color::White;
			Login->ForeColor = Color::Black;
		}
	}
	private: System::Void Passwd_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Passwd->BackColor == Color::Red)
		{
			Passwd->BackColor = Color::White;
			Passwd->ForeColor = Color::Black;
		}
	}
	private: System::Void Passwd_repeat_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Passwd_repeat->BackColor == Color::Red)
		{
			Passwd_repeat->BackColor = Color::White;
			Passwd_repeat->ForeColor = Color::Black;
		}
	}
	private: System::Void return_back_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!PanelStep2->Visible) {
			this->DialogResult = System::Windows::Forms::DialogResult::Retry;
			this->Close();
		}
		else {
			PanelStep2->Visible = false;
			this->Size = System::Drawing::Size(436, 479);
		}
	}
	private: System::Void FName_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (FName->BackColor == Color::Red)
		{
			FName->BackColor = Color::White;
			FName->ForeColor = Color::Black;
		}
	}
	private: System::Void SName_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (SName->BackColor == Color::Red)
		{
			SName->BackColor = Color::White;
			SName->ForeColor = Color::Black;
		}
	}
	private: System::Void Country_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Country->BackColor == Color::Red)
		{
			Country->BackColor = Color::White;
			Country->ForeColor = Color::Black;
		}
	}
	private: System::Void City_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (City->BackColor == Color::Red)
		{
			City->BackColor = Color::White;
			City->ForeColor = Color::Black;
		}
	}
	};
}
