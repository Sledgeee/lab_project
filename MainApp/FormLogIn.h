#pragma once

#include "FormClientMenu.h"
#include "FormAdminMenu.h"
#include "FormResetAccount.h"
#include "Customer.h"
#include "Admin.h"
#include "FormPrompt2FA.h"

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
	private: System::Windows::Forms::Button^ btnSignIn;
	protected:

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
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSignIn
			// 
			this->btnSignIn->FlatAppearance->BorderSize = 2;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignIn->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSignIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignIn.Image")));
			this->btnSignIn->Location = System::Drawing::Point(125, 299);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSignIn->Size = System::Drawing::Size(180, 63);
			this->btnSignIn->TabIndex = 0;
			this->btnSignIn->Text = L" Sign in";
			this->btnSignIn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSignIn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &FormLogIn::btnSignIn_Click);
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
			this->label1->Location = System::Drawing::Point(121, 375);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Forgot password\?";
			this->label1->Click += gcnew System::EventHandler(this, &FormLogIn::label1_Click);
			// 
			// FormLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(434, 411);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->return_back);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->passwd_field);
			this->Controls->Add(this->login_field);
			this->Controls->Add(this->lblPasswd);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnSignIn);
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

	private: Account^ getData()
	{
		bool isInvalidData = false;
		if (String::IsNullOrWhiteSpace(login_field->Text))
		{
			setError(1);
			isInvalidData = true;
		}
		if (String::IsNullOrWhiteSpace(passwd_field->Text))
		{
			setError(2);
			isInvalidData = true;
		}
		if (isInvalidData) return nullptr;

		Account^ result = DBQuery::isRightData(login_field->Text, passwd_field->Text);
		if (result == nullptr) {
			setError(1);
			setError(2);
			return nullptr;
		}
		return result;
	}
	private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
		Account^ acc = getData();
		if (acc == nullptr) return;
		if (acc->get2FA()) {
			auto dr = (gcnew FormPrompt2FA(acc->getEmail()))->ShowDialog();
			if (dr == System::Windows::Forms::DialogResult::Abort)
				return;
		}
		this->Hide();
		System::Windows::Forms::DialogResult workResult;
		if (acc->getRoot() == "Customer") {
			Customer^ customer = gcnew Customer(acc);
			workResult = (gcnew FormClientMenu(customer))->ShowDialog();
		}
		else
			workResult = (gcnew FormAdminMenu(login_field->Text))->ShowDialog();

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
		this->DialogResult = System::Windows::Forms::DialogResult::Retry;
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew FormResetAccount)->ShowDialog();
	}
	};
}
