#pragma once

#include "FormClientMenu.h"
#include "FormAdminMenu.h"
#include "FormResetAccount.h"
#include "Client.h"
#include "Admin.h"

namespace MainApp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormLogIn
	/// </summary>
	public ref class FormLogIn : public System::Windows::Forms::Form
	{
	public:
		FormLogIn(void)
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
		~FormLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSignInAsClient;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Label^ lblEmail;

	private: System::Windows::Forms::Label^ lblPasswd;
	private: System::Windows::Forms::TextBox^ login_field;


	private: System::Windows::Forms::TextBox^ passwd_field;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ return_back;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSignInAsAdmin;

	private: System::Windows::Forms::Panel^ PanelActivateAdmin;
	private: System::Windows::Forms::Button^ btnSendActKey;
	private: System::Windows::Forms::TextBox^ txtActivationKey;

	private: System::Windows::Forms::Label^ lblTitleAdminActivate;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLogIn::typeid));
			this->btnSignInAsClient = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPasswd = (gcnew System::Windows::Forms::Label());
			this->login_field = (gcnew System::Windows::Forms::TextBox());
			this->passwd_field = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->return_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSignInAsAdmin = (gcnew System::Windows::Forms::Button());
			this->PanelActivateAdmin = (gcnew System::Windows::Forms::Panel());
			this->btnSendActKey = (gcnew System::Windows::Forms::Button());
			this->txtActivationKey = (gcnew System::Windows::Forms::TextBox());
			this->lblTitleAdminActivate = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelActivateAdmin->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnSignInAsClient
			// 
			this->btnSignInAsClient->FlatAppearance->BorderSize = 2;
			this->btnSignInAsClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignInAsClient->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignInAsClient->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSignInAsClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignInAsClient.Image")));
			this->btnSignInAsClient->Location = System::Drawing::Point(33, 304);
			this->btnSignInAsClient->Name = L"btnSignInAsClient";
			this->btnSignInAsClient->Size = System::Drawing::Size(180, 63);
			this->btnSignInAsClient->TabIndex = 0;
			this->btnSignInAsClient->Text = L"Sign in as client";
			this->btnSignInAsClient->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSignInAsClient->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSignInAsClient->UseVisualStyleBackColor = true;
			this->btnSignInAsClient->Click += gcnew System::EventHandler(this, &FormLogIn::btnSignInAsClient_Click);
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
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogIn::panel1_MouseDown);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(404, -1);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 25);
			this->btnExit->TabIndex = 6;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormLogIn::btnExit_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(385, 2);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 8;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormLogIn::btnMinimize_Click);
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblEmail->Location = System::Drawing::Point(30, 136);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(78, 25);
			this->lblEmail->TabIndex = 9;
			this->lblEmail->Text = L"Login:";
			// 
			// lblPasswd
			// 
			this->lblPasswd->AutoSize = true;
			this->lblPasswd->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblPasswd->Location = System::Drawing::Point(30, 214);
			this->lblPasswd->Name = L"lblPasswd";
			this->lblPasswd->Size = System::Drawing::Size(111, 25);
			this->lblPasswd->TabIndex = 11;
			this->lblPasswd->Text = L"Password:";
			// 
			// login_field
			// 
			this->login_field->BackColor = System::Drawing::Color::White;
			this->login_field->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_field->Location = System::Drawing::Point(33, 166);
			this->login_field->Name = L"login_field";
			this->login_field->Size = System::Drawing::Size(376, 30);
			this->login_field->TabIndex = 12;
			this->login_field->Enter += gcnew System::EventHandler(this, &FormLogIn::login_field_Enter);
			// 
			// passwd_field
			// 
			this->passwd_field->BackColor = System::Drawing::Color::White;
			this->passwd_field->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passwd_field->Location = System::Drawing::Point(33, 247);
			this->passwd_field->Name = L"passwd_field";
			this->passwd_field->Size = System::Drawing::Size(376, 30);
			this->passwd_field->TabIndex = 15;
			this->passwd_field->UseSystemPasswordChar = true;
			this->passwd_field->Enter += gcnew System::EventHandler(this, &FormLogIn::passwd_field_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 51);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
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
			this->return_back->TabIndex = 19;
			this->return_back->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->return_back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->return_back->UseVisualStyleBackColor = true;
			this->return_back->Click += gcnew System::EventHandler(this, &FormLogIn::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label1->Location = System::Drawing::Point(127, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Forgot password\?";
			this->label1->Click += gcnew System::EventHandler(this, &FormLogIn::label1_Click);
			// 
			// btnSignInAsAdmin
			// 
			this->btnSignInAsAdmin->FlatAppearance->BorderSize = 2;
			this->btnSignInAsAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignInAsAdmin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignInAsAdmin->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSignInAsAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignInAsAdmin.Image")));
			this->btnSignInAsAdmin->Location = System::Drawing::Point(229, 304);
			this->btnSignInAsAdmin->Name = L"btnSignInAsAdmin";
			this->btnSignInAsAdmin->Size = System::Drawing::Size(180, 63);
			this->btnSignInAsAdmin->TabIndex = 21;
			this->btnSignInAsAdmin->Text = L"Sign in as admin";
			this->btnSignInAsAdmin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSignInAsAdmin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSignInAsAdmin->UseVisualStyleBackColor = true;
			this->btnSignInAsAdmin->Click += gcnew System::EventHandler(this, &FormLogIn::btnSignInAsAdmin_Click);
			// 
			// PanelActivateAdmin
			// 
			this->PanelActivateAdmin->Controls->Add(this->btnSendActKey);
			this->PanelActivateAdmin->Controls->Add(this->txtActivationKey);
			this->PanelActivateAdmin->Controls->Add(this->lblTitleAdminActivate);
			this->PanelActivateAdmin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelActivateAdmin->Location = System::Drawing::Point(0, 77);
			this->PanelActivateAdmin->Name = L"PanelActivateAdmin";
			this->PanelActivateAdmin->Size = System::Drawing::Size(434, 334);
			this->PanelActivateAdmin->TabIndex = 22;
			this->PanelActivateAdmin->Visible = false;
			// 
			// btnSendActKey
			// 
			this->btnSendActKey->FlatAppearance->BorderSize = 2;
			this->btnSendActKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSendActKey->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSendActKey->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSendActKey->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSendActKey.Image")));
			this->btnSendActKey->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSendActKey->Location = System::Drawing::Point(127, 206);
			this->btnSendActKey->Name = L"btnSendActKey";
			this->btnSendActKey->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btnSendActKey->Size = System::Drawing::Size(187, 56);
			this->btnSendActKey->TabIndex = 2;
			this->btnSendActKey->Text = L"Verify key";
			this->btnSendActKey->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSendActKey->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSendActKey->UseVisualStyleBackColor = true;
			this->btnSendActKey->Click += gcnew System::EventHandler(this, &FormLogIn::btnSendActKey_Click);
			// 
			// txtActivationKey
			// 
			this->txtActivationKey->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtActivationKey->Location = System::Drawing::Point(65, 146);
			this->txtActivationKey->Name = L"txtActivationKey";
			this->txtActivationKey->Size = System::Drawing::Size(304, 32);
			this->txtActivationKey->TabIndex = 1;
			this->txtActivationKey->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblTitleAdminActivate
			// 
			this->lblTitleAdminActivate->AutoSize = true;
			this->lblTitleAdminActivate->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTitleAdminActivate->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblTitleAdminActivate->Location = System::Drawing::Point(3, 91);
			this->lblTitleAdminActivate->Name = L"lblTitleAdminActivate";
			this->lblTitleAdminActivate->Size = System::Drawing::Size(432, 28);
			this->lblTitleAdminActivate->TabIndex = 0;
			this->lblTitleAdminActivate->Text = L"Enter key from mail in your E-mail:";
			// 
			// FormLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(434, 411);
			this->ControlBox = false;
			this->Controls->Add(this->PanelActivateAdmin);
			this->Controls->Add(this->btnSignInAsAdmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->return_back);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->passwd_field);
			this->Controls->Add(this->login_field);
			this->Controls->Add(this->lblPasswd);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnSignInAsClient);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormLogIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormLogIn::FormLogIn_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormLogIn::FormLogIn_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogIn::FormLogIn_MouseDown);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelActivateAdmin->ResumeLayout(false);
			this->PanelActivateAdmin->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void setError(int code)
	{
		switch (code)
		{
		case 1:
			login_field->BackColor = Color::Red;
			login_field->ForeColor = Color::White;
			break;
		case 2:
			passwd_field->BackColor = Color::Red;
			passwd_field->ForeColor = Color::White;
			break;
		}
	}

		   // right value: 0 - client, 1 - admin
	private: System::Boolean compareInputData(int right)
	{
		bool isNotInvalidData = false;
		if (String::IsNullOrWhiteSpace(login_field->Text))
		{
			setError(1);
			isNotInvalidData = true;
		}
		if (String::IsNullOrWhiteSpace(passwd_field->Text))
		{
			setError(2);
			isNotInvalidData = true;
		}
		if (isNotInvalidData) return false;

		if (right == 0)
			if (DBQuery::isRightDataClient(login_field->Text, passwd_field->Text))
				return true;
			else {
				setError(1);
				setError(2);
				return false;
			}
		if (right == 1)
		{
			// code 0 - registered and activated admin root
			// code 1 - registered but not activated admin root
			// code 2 - account not found
			int result_code = DBQuery::isRightDataAdmin(login_field->Text, passwd_field->Text);
			if (result_code == 0)
				return true;
			else if (result_code == 1)
			{
				PanelActivateAdmin->Visible = true;
				return false;
			}
			else {
				setError(1);
				setError(2);
				return false;
			}
		}
		return false;
	}
	private: System::Void LoadForm(int mode)
	{
		this->Hide();
		System::Windows::Forms::DialogResult workResult;
		switch (mode)
		{
		case 0:
			workResult = (gcnew FormClientMenu(login_field->Text))->ShowDialog();
			break;
		case 1:
			workResult = (gcnew FormAdminMenu(login_field->Text))->ShowDialog();
			break;
		}
		login_field->Text = String::Empty;
		passwd_field->Text = String::Empty;
		if (workResult == System::Windows::Forms::DialogResult::OK)
		{
			this->Show();
		}
		else
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Ignore;
			Application::Exit();
		}
	}
	private: System::Void btnSignInAsClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!compareInputData(0)) return;
		this->LoadForm(0);
	}
	private: System::Void btnSignInAsAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!compareInputData(1)) return;
		this->LoadForm(1);
	}
	private: System::Void btnSendActKey_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DBQuery::VerifyKey(txtActivationKey->Text, login_field->Text))
		{
			DBQuery::UpdateRootStatus(login_field->Text, 1);
			this->LoadForm(1);
		}
		else {
			auto dr = MessageBox::Show(this, "Incorrect verifying key", "Error",
				MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
			if (dr == System::Windows::Forms::DialogResult::Cancel)
				PanelActivateAdmin->Visible = false;
		}
	}
	private: System::Void FormLogIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FormLogIn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void login_field_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (login_field->BackColor == Color::Red)
		{
			login_field->BackColor = Color::White;
			login_field->ForeColor = Color::Black;
		}
	}
	private: System::Void passwd_field_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (passwd_field->BackColor == Color::Red)
		{
			passwd_field->BackColor = Color::White;
			passwd_field->ForeColor = Color::Black;
		}
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Ignore;
		Application::Exit();
	}
	private: System::Void FormLogIn_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (PanelActivateAdmin->Visible)
		{
			this->PanelActivateAdmin->Visible = false;
		}
		else {
			this->DialogResult = System::Windows::Forms::DialogResult::Retry;
			this->Close();
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew FormResetAccount)->ShowDialog();
	}
	};
}
