#pragma once

#include "FormClientMenu.h"
#include "Mailer.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormResetAccount
	/// </summary>
	public ref class FormResetAccount : public System::Windows::Forms::Form
	{
	public:
		String^ key;
		FormResetAccount(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormResetAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ lblemail;


	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::Button^ ThrowEmail;
	private: System::Windows::Forms::Panel^ Step2;
	private: System::Windows::Forms::TextBox^ code;
	private: System::Windows::Forms::Label^ lblcode;


	private: System::Windows::Forms::Button^ ThrowCode;
	private: System::Windows::Forms::Panel^ Step3;
	private: System::Windows::Forms::TextBox^ repeatNewPasswd;
	private: System::Windows::Forms::Label^ lblRepeatPasswd;
	private: System::Windows::Forms::Button^ btnSetPasswd;
	private: System::Windows::Forms::TextBox^ newPasswd;
	private: System::Windows::Forms::Label^ lblNewPasswd;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormResetAccount::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblemail = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->ThrowEmail = (gcnew System::Windows::Forms::Button());
			this->Step2 = (gcnew System::Windows::Forms::Panel());
			this->ThrowCode = (gcnew System::Windows::Forms::Button());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->lblcode = (gcnew System::Windows::Forms::Label());
			this->lblNewPasswd = (gcnew System::Windows::Forms::Label());
			this->newPasswd = (gcnew System::Windows::Forms::TextBox());
			this->btnSetPasswd = (gcnew System::Windows::Forms::Button());
			this->lblRepeatPasswd = (gcnew System::Windows::Forms::Label());
			this->repeatNewPasswd = (gcnew System::Windows::Forms::TextBox());
			this->Step3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->Step2->SuspendLayout();
			this->Step3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(463, 26);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormResetAccount::panel1_MouseDown);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(433, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 25);
			this->button2->TabIndex = 11;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormResetAccount::button2_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(433, -1);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 25);
			this->btnExit->TabIndex = 6;
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// lblemail
			// 
			this->lblemail->AutoSize = true;
			this->lblemail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblemail->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblemail->Location = System::Drawing::Point(18, 57);
			this->lblemail->Name = L"lblemail";
			this->lblemail->Size = System::Drawing::Size(430, 25);
			this->lblemail->TabIndex = 23;
			this->lblemail->Text = L"Enter your email for reñovery account:";
			this->lblemail->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(23, 120);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(418, 30);
			this->email->TabIndex = 24;
			// 
			// ThrowEmail
			// 
			this->ThrowEmail->FlatAppearance->BorderSize = 2;
			this->ThrowEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ThrowEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ThrowEmail->ForeColor = System::Drawing::Color::Gainsboro;
			this->ThrowEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ThrowEmail.Image")));
			this->ThrowEmail->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ThrowEmail->Location = System::Drawing::Point(179, 182);
			this->ThrowEmail->Name = L"ThrowEmail";
			this->ThrowEmail->Size = System::Drawing::Size(118, 52);
			this->ThrowEmail->TabIndex = 25;
			this->ThrowEmail->Text = L"Reset";
			this->ThrowEmail->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ThrowEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ThrowEmail->UseVisualStyleBackColor = true;
			this->ThrowEmail->Click += gcnew System::EventHandler(this, &FormResetAccount::ThrowEmail_Click);
			// 
			// Step2
			// 
			this->Step2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->Step2->Controls->Add(this->ThrowCode);
			this->Step2->Controls->Add(this->code);
			this->Step2->Controls->Add(this->lblcode);
			this->Step2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Step2->Location = System::Drawing::Point(0, 26);
			this->Step2->Name = L"Step2";
			this->Step2->Size = System::Drawing::Size(463, 235);
			this->Step2->TabIndex = 26;
			// 
			// ThrowCode
			// 
			this->ThrowCode->FlatAppearance->BorderSize = 2;
			this->ThrowCode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ThrowCode->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ThrowCode->ForeColor = System::Drawing::Color::Gainsboro;
			this->ThrowCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ThrowCode.Image")));
			this->ThrowCode->Location = System::Drawing::Point(90, 198);
			this->ThrowCode->Name = L"ThrowCode";
			this->ThrowCode->Size = System::Drawing::Size(121, 52);
			this->ThrowCode->TabIndex = 21;
			this->ThrowCode->Text = L"Reset";
			this->ThrowCode->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ThrowCode->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ThrowCode->UseVisualStyleBackColor = true;
			this->ThrowCode->Click += gcnew System::EventHandler(this, &FormResetAccount::ThrowCode_Click);
			// 
			// code
			// 
			this->code->Location = System::Drawing::Point(62, 120);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(174, 30);
			this->code->TabIndex = 1;
			// 
			// lblcode
			// 
			this->lblcode->AutoSize = true;
			this->lblcode->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblcode->Location = System::Drawing::Point(18, 53);
			this->lblcode->Name = L"lblcode";
			this->lblcode->Size = System::Drawing::Size(265, 25);
			this->lblcode->TabIndex = 0;
			this->lblcode->Text = L"Enter code from e-mail:";
			// 
			// lblNewPasswd
			// 
			this->lblNewPasswd->AutoSize = true;
			this->lblNewPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblNewPasswd->Location = System::Drawing::Point(24, 26);
			this->lblNewPasswd->Name = L"lblNewPasswd";
			this->lblNewPasswd->Size = System::Drawing::Size(254, 25);
			this->lblNewPasswd->TabIndex = 0;
			this->lblNewPasswd->Text = L"Choose a new password:";
			// 
			// newPasswd
			// 
			this->newPasswd->Location = System::Drawing::Point(29, 56);
			this->newPasswd->Name = L"newPasswd";
			this->newPasswd->Size = System::Drawing::Size(401, 30);
			this->newPasswd->TabIndex = 1;
			this->newPasswd->UseSystemPasswordChar = true;
			this->newPasswd->Enter += gcnew System::EventHandler(this, &FormResetAccount::newPasswd_Enter);
			// 
			// btnSetPasswd
			// 
			this->btnSetPasswd->FlatAppearance->BorderSize = 2;
			this->btnSetPasswd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSetPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSetPasswd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSetPasswd.Image")));
			this->btnSetPasswd->Location = System::Drawing::Point(135, 171);
			this->btnSetPasswd->Name = L"btnSetPasswd";
			this->btnSetPasswd->Size = System::Drawing::Size(200, 52);
			this->btnSetPasswd->TabIndex = 2;
			this->btnSetPasswd->Text = L"Set password";
			this->btnSetPasswd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSetPasswd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSetPasswd->UseVisualStyleBackColor = true;
			this->btnSetPasswd->Click += gcnew System::EventHandler(this, &FormResetAccount::btnSetPasswd_Click);
			// 
			// lblRepeatPasswd
			// 
			this->lblRepeatPasswd->AutoSize = true;
			this->lblRepeatPasswd->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblRepeatPasswd->Location = System::Drawing::Point(24, 92);
			this->lblRepeatPasswd->Name = L"lblRepeatPasswd";
			this->lblRepeatPasswd->Size = System::Drawing::Size(188, 25);
			this->lblRepeatPasswd->TabIndex = 3;
			this->lblRepeatPasswd->Text = L"Repeat password:";
			// 
			// repeatNewPasswd
			// 
			this->repeatNewPasswd->Location = System::Drawing::Point(29, 120);
			this->repeatNewPasswd->Name = L"repeatNewPasswd";
			this->repeatNewPasswd->Size = System::Drawing::Size(401, 30);
			this->repeatNewPasswd->TabIndex = 4;
			this->repeatNewPasswd->UseSystemPasswordChar = true;
			this->repeatNewPasswd->Enter += gcnew System::EventHandler(this, &FormResetAccount::repeatNewPasswd_Enter);
			// 
			// Step3
			// 
			this->Step3->Controls->Add(this->repeatNewPasswd);
			this->Step3->Controls->Add(this->lblRepeatPasswd);
			this->Step3->Controls->Add(this->btnSetPasswd);
			this->Step3->Controls->Add(this->newPasswd);
			this->Step3->Controls->Add(this->lblNewPasswd);
			this->Step3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Step3->Location = System::Drawing::Point(0, 0);
			this->Step3->Name = L"Step3";
			this->Step3->Size = System::Drawing::Size(463, 261);
			this->Step3->TabIndex = 22;
			// 
			// FormResetAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(463, 261);
			this->ControlBox = false;
			this->Controls->Add(this->Step2);
			this->Controls->Add(this->ThrowEmail);
			this->Controls->Add(this->email);
			this->Controls->Add(this->lblemail);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Step3);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"FormResetAccount";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &FormResetAccount::FormResetAccount_Load);
			this->panel1->ResumeLayout(false);
			this->Step2->ResumeLayout(false);
			this->Step2->PerformLayout();
			this->Step3->ResumeLayout(false);
			this->Step3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormResetAccount_Load(System::Object^ sender, System::EventArgs^ e) {
		Step2->Visible = false;
		Step3->Visible = false;
	}
	private: String^ generateKey()
	{
		String^ key_chars = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890";
		Int32 chars_length = key_chars->Length;
		String^ randKey = "";
		Random^ rand = gcnew Random();
		for (int i = 0; i < 8; ++i)
		{
			Char^ randChar = key_chars[rand->Next(0, chars_length - 1)];
			randKey += randChar;
		}
		return randKey;
	}

	public: Void Handler(Object^ obj)
	{
		array<Object^>^ params = (array<Object^>^)obj;
		Mailer::SendMail(gcnew MailAddress((String^)params[0]), (String^)params[1], (String^)params[2]);
	}

	private: System::Void ThrowEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!DBQuery::isExistingEmail(this, email->Text))
		{
			MessageBox::Show(this, "Account with specified email not found", "Warning",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		key = generateKey();
		String^ recoveryMessage =
			"<h2 style=""margin:0"">Code: " + key + "</h2><br></br>" +
			"<h2 style=""margin:0"">If it's was not you just ignore this mail!</h2><br></br>" +
			"© Oleg Voloshyn, 2021. All rights reserved.";
		ParameterizedThreadStart^ pts = gcnew ParameterizedThreadStart(this, &FormResetAccount::Handler);
		Thread^ thread = gcnew Thread(pts);
		array<Object^>^ params = gcnew array<Object^> { email->Text, Mailer::recoverySubject, recoveryMessage };
		thread->Start(params);
		Step2->Visible = true;
		this->Size = System::Drawing::Size(300, 300);
		//Mailer::SendMail(gcnew MailAddress(email->Text), Mailer::recoverySubject, recoveryMessage);
	}
	private: System::Void ThrowCode_Click(System::Object^ sender, System::EventArgs^ e) {
		if (code->Text == key)
		{
			Step2->Visible = false;
			this->Size = System::Drawing::Size(465, 263);
			Step3->Visible = true;
			Step3->BringToFront();
		}
		else
		{
			auto res = MessageBox::Show(this, "Code isn't right", "Warning", MessageBoxButtons::RetryCancel, MessageBoxIcon::Warning);
			if (res == System::Windows::Forms::DialogResult::Cancel)
			{
				this->DialogResult = res;
				this->Close();
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void btnSetPasswd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrWhiteSpace(newPasswd->Text) && !String::IsNullOrWhiteSpace(repeatNewPasswd->Text))
		{
			if (String::Compare(newPasswd->Text, repeatNewPasswd->Text) == 0)
			{
				DBQuery::UpdatePasswd(newPasswd->Text, email->Text);
				MessageBox::Show(this, "Password was successfully changed", "Information",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else {
				repeatNewPasswd->BackColor = Color::Red;
				repeatNewPasswd->ForeColor = Color::White;
			}
		}
		else {
			if (String::IsNullOrWhiteSpace(newPasswd->Text))
			{
				newPasswd->BackColor = Color::Red;
				newPasswd->ForeColor = Color::White;
			}
			else {
				repeatNewPasswd->BackColor = Color::Red;
				repeatNewPasswd->ForeColor = Color::White;
			}
		}
	}
	private: System::Void newPasswd_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (newPasswd->BackColor == Color::Red)
		{
			newPasswd->BackColor = Color::White;
			newPasswd->ForeColor = Color::Black;
		}
	}
	private: System::Void repeatNewPasswd_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (repeatNewPasswd->BackColor == Color::Red)
		{
			repeatNewPasswd->BackColor = Color::White;
			repeatNewPasswd->ForeColor = Color::Black;
		}
	}
	};
}
