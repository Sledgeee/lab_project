#pragma once

#include "FormLogIn.h"
#include "FormLogUp.h"

namespace MainApp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormStartUp
	/// </summary>
	public ref class FormStartUp : public System::Windows::Forms::Form
	{
	public:
		FormStartUp(void)
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
		~FormStartUp()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnMinimize;







	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ copyright;
	private: System::Windows::Forms::Button^ Log_in;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblhello;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormStartUp::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->copyright = (gcnew System::Windows::Forms::Label());
			this->Log_in = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblhello = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnMinimize);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(434, 26);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormStartUp::panel1_MouseDown);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(404, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 25);
			this->button2->TabIndex = 11;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormStartUp::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Gainsboro;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(385, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(16, 16);
			this->button3->TabIndex = 12;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormStartUp::button3_Click);
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
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->Location = System::Drawing::Point(385, 2);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 8;
			this->btnMinimize->UseVisualStyleBackColor = true;
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
			// copyright
			// 
			this->copyright->AutoSize = true;
			this->copyright->ForeColor = System::Drawing::Color::Gainsboro;
			this->copyright->Location = System::Drawing::Point(22, 381);
			this->copyright->Name = L"copyright";
			this->copyright->Size = System::Drawing::Size(397, 21);
			this->copyright->TabIndex = 19;
			this->copyright->Text = L"© Oleg Voloshyn, 2021. All rights reserved.";
			// 
			// Log_in
			// 
			this->Log_in->FlatAppearance->BorderSize = 2;
			this->Log_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_in->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Log_in->ForeColor = System::Drawing::Color::Gainsboro;
			this->Log_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Log_in.Image")));
			this->Log_in->Location = System::Drawing::Point(33, 242);
			this->Log_in->Name = L"Log_in";
			this->Log_in->Size = System::Drawing::Size(142, 52);
			this->Log_in->TabIndex = 20;
			this->Log_in->Text = L"Sign in";
			this->Log_in->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Log_in->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Log_in->UseVisualStyleBackColor = true;
			this->Log_in->Click += gcnew System::EventHandler(this, &FormStartUp::Log_in_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(263, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 52);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Sign up";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStartUp::button1_Click);
			// 
			// lblhello
			// 
			this->lblhello->AutoSize = true;
			this->lblhello->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblhello->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblhello->Location = System::Drawing::Point(30, 151);
			this->lblhello->Name = L"lblhello";
			this->lblhello->Size = System::Drawing::Size(375, 50);
			this->lblhello->TabIndex = 22;
			this->lblhello->Text = L"Please, sign in or create account\r\n           to continue";
			this->lblhello->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FormStartUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(434, 411);
			this->ControlBox = false;
			this->Controls->Add(this->lblhello);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Log_in);
			this->Controls->Add(this->copyright);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormStartUp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void Log_in_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		auto workResult = (gcnew FormLogIn)->ShowDialog();
		if (workResult == System::Windows::Forms::DialogResult::Retry)
		{
			this->Show();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		auto workResult = (gcnew FormLogUp)->ShowDialog();
		if (workResult == System::Windows::Forms::DialogResult::OK)
		{
			workResult = (gcnew FormLogIn)->ShowDialog();
			if (workResult == System::Windows::Forms::DialogResult::Retry)
			{
				this->Show();
			}
		}
		else {
			this->Show();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}
	};
}

