#pragma once

#include "DBQuery.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2FA
	/// </summary>
	public ref class Form2FA : public System::Windows::Forms::Form
	{
	public:
		Form2FA(int AccountID, String^ email, bool turn)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->AccountID = AccountID;
			this->turn = turn;
			this->email = email;
		}
		bool turn;
		String^ email;
	private: System::Windows::Forms::Panel^ enable2FA;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	public:
		int AccountID;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2FA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ disable2FA;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2FA::typeid));
			this->disable2FA = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->enable2FA = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->disable2FA->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->enable2FA->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// disable2FA
			// 
			this->disable2FA->Controls->Add(this->panel1);
			this->disable2FA->Controls->Add(this->panel2);
			this->disable2FA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->disable2FA->Location = System::Drawing::Point(0, 0);
			this->disable2FA->Name = L"disable2FA";
			this->disable2FA->Size = System::Drawing::Size(591, 364);
			this->disable2FA->TabIndex = 0;
			this->disable2FA->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(591, 159);
			this->panel1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(135, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Disable Email Authentication";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(259, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 51);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 159);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(591, 205);
			this->panel2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(310, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 51);
			this->button2->TabIndex = 5;
			this->button2->Text = L"PROCEED";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2FA::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(111, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 51);
			this->button1->TabIndex = 4;
			this->button1->Text = L"CANCEL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2FA::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(424, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"less secure. Are you sure you want to proceed\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(88, 36);
			this->label3->MaximumSize = System::Drawing::Size(500, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(487, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Disabling Email Authentication will make your account";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Warning:";
			// 
			// enable2FA
			// 
			this->enable2FA->Controls->Add(this->panel4);
			this->enable2FA->Controls->Add(this->panel3);
			this->enable2FA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->enable2FA->Location = System::Drawing::Point(0, 0);
			this->enable2FA->Name = L"enable2FA";
			this->enable2FA->Size = System::Drawing::Size(591, 364);
			this->enable2FA->TabIndex = 6;
			this->enable2FA->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gainsboro;
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 159);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(591, 205);
			this->panel4->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(212, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 51);
			this->button3->TabIndex = 5;
			this->button3->Text = L"DONE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2FA::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(13, 40);
			this->label7->MaximumSize = System::Drawing::Size(575, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(544, 34);
			this->label7->TabIndex = 4;
			this->label7->Text = L"When you try to enter the program, you will be prompted to enter a security code,"
				L" which will be sent to your email address: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"What\'s Next:";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(591, 364);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(259, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 51);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(135, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(320, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Email Authentication Enabled";
			// 
			// Form2FA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 364);
			this->ControlBox = false;
			this->Controls->Add(this->enable2FA);
			this->Controls->Add(this->disable2FA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2FA";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Form2FA::Form2FA_Load);
			this->disable2FA->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->enable2FA->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = Windows::Forms::DialogResult::Abort;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		DBQuery::UpdateRow(AccountID, "Accounts", "TwoFactor", "0");
		this->DialogResult = Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Form2FA_Load(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			DBQuery::UpdateRow(AccountID, "Accounts", "TwoFactor", "1");
			enable2FA->Visible = true;
			label7->Text += email;
		}
		else
			disable2FA->Visible = true;
	}
	};
}
