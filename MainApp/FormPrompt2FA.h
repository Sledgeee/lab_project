#pragma once

#include "Mailer.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Threading;

	/// <summary>
	/// Summary for FormPrompt2FA
	/// </summary>
	public ref class FormPrompt2FA : public System::Windows::Forms::Form
	{
	public:
		FormPrompt2FA(String^ email)
		{
			InitializeComponent();
			this->email = email;
			this->thread = gcnew Thread(gcnew ThreadStart(this, &FormPrompt2FA::Thread_Start));
			thread->Start();
		}
		String^ email;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPrompt2FA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(35, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(384, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ENTER SECURITY CODE TO CONTINUE";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(245, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 51);
			this->button1->TabIndex = 7;
			this->button1->Text = L"CONTINUE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormPrompt2FA::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(40, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 51);
			this->button2->TabIndex = 8;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormPrompt2FA::button2_Click);
			// 
			// FormPrompt2FA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(450, 300);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormPrompt2FA";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &FormPrompt2FA::FormPrompt2FA_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
		else {
			int id = Int32::Parse(((TextBox^)sender)->Name->Substring(7));
			if(txt_list[id]->BackColor == Color::Red)
				for (int i = 0; i < 6; i++)
				{
					txt_list[i]->BackColor = Color::White;
					txt_list[i]->ForeColor = Color::Black;
				}
			if (String::IsNullOrWhiteSpace(((TextBox^)sender)->Text) && Char::IsControl(e->KeyChar) && id > 0)
				txt_list[id - 1]->Focus();

			else if (String::IsNullOrWhiteSpace(((TextBox^)sender)->Text) && Char::IsControl(e->KeyChar) && id == 0)
				txt_list[id]->Focus();

			else if (String::IsNullOrWhiteSpace(((TextBox^)sender)->Text) && Char::IsDigit(e->KeyChar) && id < 5)
				txt_list[id + 1]->Focus();

			else
				txt_list[id]->Focus();
		}

	}
		   List<TextBox^>^ txt_list;
		   String^ security_code = "";
		   Thread^ thread;
		   Void Thread_Start()
		   {
			   Random^ rand = gcnew Random();
			   for (int i = 1; i <= 6; i++)
				   security_code += rand->Next(0, 9);

			   Mailer::SendMail(gcnew MailAddress(email), "Two-Factor Authentication",
				   "<h2>Security code</h2><br></br>" +
				   "<h2>" + security_code + "</h2><br></br>" +
				   "© Oleg Voloshyn, 2021. All rights reserved.");
		   }
		   Void Load_txts()
		   {
			   txt_list = gcnew List<TextBox^>();
			   for (int i = 0, step_x = 0; i < 6; i++, step_x += 50)
			   {
				   TextBox^ txt = gcnew TextBox;
				   txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
				   txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					   static_cast<System::Byte>(204)));
				   txt->Location = System::Drawing::Point(82 + step_x, 122);
				   txt->Name = L"textBox" + i.ToString();
				   txt->MaxLength = 1;
				   txt->AutoSize = false;
				   txt->Size = System::Drawing::Size(35, 45);
				   txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				   txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormPrompt2FA::textBox_KeyPress);
				   txt_list->Add(txt);
				   this->Controls->Add(txt);
			   }
		   }
	private: System::Void FormPrompt2FA_Load(System::Object^ sender, System::EventArgs^ e) {
		Load_txts();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ code = "";
		for (int i = 0; i < 6; i++)
			code += txt_list[i]->Text;

		if (code == security_code)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			thread->Abort();
			this->Close();
		}
		else {
			for (int i = 0; i < 6; i++) {
				txt_list[i]->BackColor = Color::Red;
				txt_list[i]->ForeColor = Color::WhiteSmoke;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Abort;
		thread->Abort();
		this->Close();
	}
};
}
