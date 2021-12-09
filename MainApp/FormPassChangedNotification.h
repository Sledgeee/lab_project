#pragma once

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPassChangedNotification
	/// </summary>
	public ref class FormPassChangedNotification : public System::Windows::Forms::Form
	{
	public:
		FormPassChangedNotification(bool status)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->status = status;
		}
		bool status;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPassChangedNotification()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPassChangedNotification::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(477, 248);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(477, 248);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gainsboro;
			this->panel4->Controls->Add(this->button3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 147);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(477, 101);
			this->panel4->TabIndex = 3;
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
			this->button3->Location = System::Drawing::Point(150, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 51);
			this->button3->TabIndex = 5;
			this->button3->Text = L"DONE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormPassChangedNotification::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(199, 35);
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
			this->label5->Location = System::Drawing::Point(69, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(342, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Password successfully updated!";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(477, 248);
			this->panel2->TabIndex = 4;
			this->panel2->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(477, 248);
			this->panel5->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->button1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 147);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(477, 101);
			this->panel6->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(151, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"RETRY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormPassChangedNotification::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(199, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 51);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(3, 89);
			this->label1->MaximumSize = System::Drawing::Size(480, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(474, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"You enter incorrect current password or new password not equal to retyped passwor"
				L"d";
			// 
			// FormPassChangedNotification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 248);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormPassChangedNotification";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormPassChangedNotification";
			this->Load += gcnew System::EventHandler(this, &FormPassChangedNotification::FormPassChangedNotification_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormPassChangedNotification_Load(System::Object^ sender, System::EventArgs^ e) {
		if (status)
			panel1->Visible = true;
		else
			panel2->Visible = true;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
