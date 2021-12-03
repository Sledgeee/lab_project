#pragma once

#include "RGBColors.h"
#include "FormAdmins.h"
#include "FormEditions.h"
#include "FormRequestsAR.h"

namespace AppForOwner {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO::Ports;
	using namespace System::Threading;

	[DllImport("user32.dll")]
	extern System::Void ReleaseCapture();

	[DllImport("user32.dll")]
	extern System::Void SendMessage(System::IntPtr hWnd, int wMsg, int wParam, int lParam);

	/// <summary>
	/// Summary for FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			leftBorderBtn = gcnew Panel();
			leftBorderBtn->Size = System::Drawing::Size(7, 60);
			PanelMenu->Controls->Add(leftBorderBtn);
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ btnFAQ;
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::Button^ Editions;
	private: System::Windows::Forms::Button^ Admins;
	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ RequestsAR;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Timer^ CurrentTime;
	private: Form^ currentChildForm;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->PanelMenu = (gcnew System::Windows::Forms::Panel());
			this->RequestsAR = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Editions = (gcnew System::Windows::Forms::Button());
			this->Admins = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->imgHome = (gcnew System::Windows::Forms::PictureBox());
			this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->btnFAQ = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->PanelDesktop = (gcnew System::Windows::Forms::Panel());
			this->CurrentTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->PanelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->BeginInit();
			this->PanelTitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelMenu
			// 
			this->PanelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->PanelMenu->Controls->Add(this->RequestsAR);
			this->PanelMenu->Controls->Add(this->Editions);
			this->PanelMenu->Controls->Add(this->Admins);
			this->PanelMenu->Controls->Add(this->PanelLogo);
			this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelMenu->Location = System::Drawing::Point(0, 0);
			this->PanelMenu->Name = L"PanelMenu";
			this->PanelMenu->Size = System::Drawing::Size(251, 898);
			this->PanelMenu->TabIndex = 0;
			// 
			// RequestsAR
			// 
			this->RequestsAR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RequestsAR->Dock = System::Windows::Forms::DockStyle::Top;
			this->RequestsAR->FlatAppearance->BorderSize = 0;
			this->RequestsAR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RequestsAR->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RequestsAR->ForeColor = System::Drawing::Color::Gainsboro;
			this->RequestsAR->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RequestsAR->ImageKey = L"logup.png";
			this->RequestsAR->ImageList = this->imageList1;
			this->RequestsAR->Location = System::Drawing::Point(0, 260);
			this->RequestsAR->Name = L"RequestsAR";
			this->RequestsAR->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->RequestsAR->Size = System::Drawing::Size(251, 60);
			this->RequestsAR->TabIndex = 5;
			this->RequestsAR->Text = L" Show requests \r\n for admin root";
			this->RequestsAR->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RequestsAR->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->RequestsAR->UseVisualStyleBackColor = true;
			this->RequestsAR->Click += gcnew System::EventHandler(this, &FormMain::RequestsAR_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"clients.png");
			this->imageList1->Images->SetKeyName(1, L"book.png");
			this->imageList1->Images->SetKeyName(2, L"logup.png");
			this->imageList1->Images->SetKeyName(3, L"FAQ.png");
			// 
			// Editions
			// 
			this->Editions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Editions->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editions->FlatAppearance->BorderSize = 0;
			this->Editions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Editions->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Editions->ForeColor = System::Drawing::Color::Gainsboro;
			this->Editions->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Editions->ImageKey = L"book.png";
			this->Editions->ImageList = this->imageList1;
			this->Editions->Location = System::Drawing::Point(0, 200);
			this->Editions->Name = L"Editions";
			this->Editions->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Editions->Size = System::Drawing::Size(251, 60);
			this->Editions->TabIndex = 4;
			this->Editions->Text = L" Show editions";
			this->Editions->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Editions->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Editions->UseVisualStyleBackColor = true;
			this->Editions->Click += gcnew System::EventHandler(this, &FormMain::Editions_Click);
			// 
			// Admins
			// 
			this->Admins->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Admins->Dock = System::Windows::Forms::DockStyle::Top;
			this->Admins->FlatAppearance->BorderSize = 0;
			this->Admins->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Admins->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Admins->ForeColor = System::Drawing::Color::Gainsboro;
			this->Admins->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Admins->ImageKey = L"clients.png";
			this->Admins->ImageList = this->imageList1;
			this->Admins->Location = System::Drawing::Point(0, 140);
			this->Admins->Name = L"Admins";
			this->Admins->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Admins->Size = System::Drawing::Size(251, 60);
			this->Admins->TabIndex = 3;
			this->Admins->Text = L" Show admins";
			this->Admins->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Admins->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Admins->UseVisualStyleBackColor = true;
			this->Admins->Click += gcnew System::EventHandler(this, &FormMain::Admins_Click);
			// 
			// PanelLogo
			// 
			this->PanelLogo->Controls->Add(this->imgHome);
			this->PanelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelLogo->Location = System::Drawing::Point(0, 0);
			this->PanelLogo->Name = L"PanelLogo";
			this->PanelLogo->Size = System::Drawing::Size(251, 140);
			this->PanelLogo->TabIndex = 0;
			// 
			// imgHome
			// 
			this->imgHome->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->imgHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgHome.Image")));
			this->imgHome->Location = System::Drawing::Point(14, 12);
			this->imgHome->Name = L"imgHome";
			this->imgHome->Size = System::Drawing::Size(225, 115);
			this->imgHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgHome->TabIndex = 0;
			this->imgHome->TabStop = false;
			// 
			// PanelTitleBar
			// 
			this->PanelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->PanelTitleBar->Controls->Add(this->btnFAQ);
			this->PanelTitleBar->Controls->Add(this->btnExit);
			this->PanelTitleBar->Controls->Add(this->btnMinimize);
			this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelTitleBar->Location = System::Drawing::Point(251, 0);
			this->PanelTitleBar->Name = L"PanelTitleBar";
			this->PanelTitleBar->Size = System::Drawing::Size(1347, 44);
			this->PanelTitleBar->TabIndex = 1;
			this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMain::PanelTitleBar_MouseDown);
			// 
			// btnFAQ
			// 
			this->btnFAQ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnFAQ->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFAQ->FlatAppearance->BorderSize = 0;
			this->btnFAQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFAQ->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFAQ->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnFAQ->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFAQ->ImageIndex = 3;
			this->btnFAQ->ImageList = this->imageList1;
			this->btnFAQ->Location = System::Drawing::Point(1177, 1);
			this->btnFAQ->Name = L"btnFAQ";
			this->btnFAQ->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->btnFAQ->Size = System::Drawing::Size(101, 40);
			this->btnFAQ->TabIndex = 6;
			this->btnFAQ->Text = L"FAQ";
			this->btnFAQ->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFAQ->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnFAQ->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(1312, 9);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 28);
			this->btnExit->TabIndex = 3;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormMain::btnExit_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(1290, 14);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 5;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormMain::btnMinimize_Click);
			// 
			// PanelDesktop
			// 
			this->PanelDesktop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->PanelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDesktop->ForeColor = System::Drawing::Color::Transparent;
			this->PanelDesktop->Location = System::Drawing::Point(251, 44);
			this->PanelDesktop->Name = L"PanelDesktop";
			this->PanelDesktop->Size = System::Drawing::Size(1347, 854);
			this->PanelDesktop->TabIndex = 2;
			// 
			// CurrentTime
			// 
			this->CurrentTime->Interval = 1000;
			this->CurrentTime->Tick += gcnew System::EventHandler(this, &FormMain::CurrentTime_Tick);
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1598, 898);
			this->ControlBox = false;
			this->Controls->Add(this->PanelDesktop);
			this->Controls->Add(this->PanelTitleBar);
			this->Controls->Add(this->PanelMenu);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1000, 550);
			this->Name = L"FormMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormMain::FormMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->PanelMenu->ResumeLayout(false);
			this->PanelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->EndInit();
			this->PanelTitleBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ActivateButton(Object^ senderBtn, Color customColor)
	{
		if (senderBtn != nullptr)
		{
			DisableButton();
			this->currentBtn = static_cast<Button^>(senderBtn);
			this->currentBtn->BackColor = Color::FromArgb(37, 36, 81);
			this->currentBtn->ForeColor = customColor;
			this->currentBtn->TextAlign = ContentAlignment::MiddleCenter;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleRight;
			this->currentBtn->TextImageRelation = TextImageRelation::TextBeforeImage;

			this->leftBorderBtn->BackColor = customColor;
			this->leftBorderBtn->Location = System::Drawing::Point(0, currentBtn->Location.Y);
			this->leftBorderBtn->Visible = true;
			this->leftBorderBtn->BringToFront();
			this->currentBtn->Enabled = false;
		}
	}
	private: System::Void DisableButton()
	{
		if (currentBtn != nullptr)
		{
			this->currentBtn->Enabled = true;
			this->currentBtn->BackColor = Color::FromArgb(31, 30, 68);
			this->currentBtn->ForeColor = Color::Gainsboro;
			this->currentBtn->TextAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->TextImageRelation = TextImageRelation::ImageBeforeText;
		}
	}


	private: System::Void OpenChildForm(Form^ childForm)
	{
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		currentChildForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = DockStyle::Fill;
		PanelDesktop->Controls->Add(childForm);
		PanelDesktop->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
	}
		   

	private: System::Void Admins_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color1);
		OpenChildForm(gcnew FormAdmins);
	}
	private: System::Void Editions_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color2);
		OpenChildForm(gcnew FormEditions);
	}
	private: System::Void RequestsAR_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color3);
		OpenChildForm(gcnew FormRequestsAR);
	}

	private: System::Void PanelTitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WindowState == FormWindowState::Normal)
			WindowState = FormWindowState::Maximized;
		else
			WindowState = FormWindowState::Normal;
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}
	private: System::Void FormMain_Load(System::Object^ sender, System::EventArgs^ e) {
		CurrentTime->Start();
	}
	private: System::Void FormMain_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void CurrentTime_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}