#pragma once

#include "RGBColors.h"
#include "FormEditions.h"
#include "FormClients.h"
#include "DBQuery.h"
#include "FormOrders.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	[DllImport("user32.dll")]
	extern System::Void ReleaseCapture();

	[DllImport("user32.dll")]
	extern System::Void SendMessage(System::IntPtr hWnd, int wMsg, int wParam, int lParam);

	/// <summary>
	/// Summary for FormAdminMenu
	/// </summary>
	public ref class FormAdminMenu : public System::Windows::Forms::Form
	{
	public:
		String^ login;
		FormAdminMenu(String^ login)
		{
			InitializeComponent();
			this->login = login;
			leftBorderBtn = gcnew Panel();
			leftBorderBtn->Size = System::Drawing::Size(7, 60);
			PanelMenu->Controls->Add(leftBorderBtn);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Controls
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::Button^ Editions;
	private: System::Windows::Forms::Button^ Users;


	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ Logout;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;



	private: System::Windows::Forms::Panel^ PanelControls;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;




	private: Form^ currentChildForm;
#pragma endregion
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAdminMenu::typeid));
			this->PanelMenu = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Logout = (gcnew System::Windows::Forms::Button());
			this->Editions = (gcnew System::Windows::Forms::Button());
			this->Users = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->imgHome = (gcnew System::Windows::Forms::PictureBox());
			this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->PanelDesktop = (gcnew System::Windows::Forms::Panel());
			this->PanelControls = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PanelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->BeginInit();
			this->PanelTitleBar->SuspendLayout();
			this->PanelControls->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelMenu
			// 
			this->PanelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->PanelMenu->Controls->Add(this->button3);
			this->PanelMenu->Controls->Add(this->Logout);
			this->PanelMenu->Controls->Add(this->Editions);
			this->PanelMenu->Controls->Add(this->Users);
			this->PanelMenu->Controls->Add(this->PanelLogo);
			this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelMenu->Location = System::Drawing::Point(0, 31);
			this->PanelMenu->Name = L"PanelMenu";
			this->PanelMenu->Size = System::Drawing::Size(220, 867);
			this->PanelMenu->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Gainsboro;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->ImageIndex = 1;
			this->button3->ImageList = this->imageList1;
			this->button3->Location = System::Drawing::Point(0, 260);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(220, 60);
			this->button3->TabIndex = 6;
			this->button3->Text = L" Orders";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormAdminMenu::button3_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"home.png");
			this->imageList1->Images->SetKeyName(1, L"orders.png");
			// 
			// Logout
			// 
			this->Logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logout->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Logout->FlatAppearance->BorderSize = 0;
			this->Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Logout->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Logout->ForeColor = System::Drawing::Color::Gainsboro;
			this->Logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logout.Image")));
			this->Logout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Logout->Location = System::Drawing::Point(0, 807);
			this->Logout->Name = L"Logout";
			this->Logout->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Logout->Size = System::Drawing::Size(220, 60);
			this->Logout->TabIndex = 5;
			this->Logout->Text = L" Log out";
			this->Logout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Logout->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Logout->UseVisualStyleBackColor = true;
			this->Logout->Click += gcnew System::EventHandler(this, &FormAdminMenu::Logout_Click);
			// 
			// Editions
			// 
			this->Editions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Editions->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editions->FlatAppearance->BorderSize = 0;
			this->Editions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Editions->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Editions->ForeColor = System::Drawing::Color::Gainsboro;
			this->Editions->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Editions.Image")));
			this->Editions->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Editions->Location = System::Drawing::Point(0, 200);
			this->Editions->Name = L"Editions";
			this->Editions->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Editions->Size = System::Drawing::Size(220, 60);
			this->Editions->TabIndex = 3;
			this->Editions->Text = L" Editions";
			this->Editions->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Editions->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Editions->UseVisualStyleBackColor = true;
			this->Editions->Click += gcnew System::EventHandler(this, &FormAdminMenu::Editions_Click);
			// 
			// Users
			// 
			this->Users->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Users->Dock = System::Windows::Forms::DockStyle::Top;
			this->Users->FlatAppearance->BorderSize = 0;
			this->Users->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Users->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Users->ForeColor = System::Drawing::Color::Gainsboro;
			this->Users->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Users.Image")));
			this->Users->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Users->Location = System::Drawing::Point(0, 140);
			this->Users->Name = L"Users";
			this->Users->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Users->Size = System::Drawing::Size(220, 60);
			this->Users->TabIndex = 2;
			this->Users->Text = L" Users";
			this->Users->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Users->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Users->UseVisualStyleBackColor = true;
			this->Users->Click += gcnew System::EventHandler(this, &FormAdminMenu::Users_Click);
			// 
			// PanelLogo
			// 
			this->PanelLogo->Controls->Add(this->imgHome);
			this->PanelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelLogo->Location = System::Drawing::Point(0, 0);
			this->PanelLogo->Name = L"PanelLogo";
			this->PanelLogo->Size = System::Drawing::Size(220, 140);
			this->PanelLogo->TabIndex = 0;
			// 
			// imgHome
			// 
			this->imgHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->imgHome->Dock = System::Windows::Forms::DockStyle::Fill;
			this->imgHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgHome.Image")));
			this->imgHome->Location = System::Drawing::Point(0, 0);
			this->imgHome->Name = L"imgHome";
			this->imgHome->Size = System::Drawing::Size(220, 140);
			this->imgHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgHome->TabIndex = 0;
			this->imgHome->TabStop = false;
			// 
			// PanelTitleBar
			// 
			this->PanelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->PanelTitleBar->Controls->Add(this->label1);
			this->PanelTitleBar->Controls->Add(this->btnExit);
			this->PanelTitleBar->Controls->Add(this->btnMinimize);
			this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelTitleBar->Location = System::Drawing::Point(220, 31);
			this->PanelTitleBar->Name = L"PanelTitleBar";
			this->PanelTitleBar->Size = System::Drawing::Size(1378, 55);
			this->PanelTitleBar->TabIndex = 1;
			this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormAdminMenu::PanelTitleBar_MouseDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(22, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 35);
			this->label1->TabIndex = 6;
			this->label1->Visible = false;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->ImageKey = L"window-close.png";
			this->btnExit->Location = System::Drawing::Point(1343, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 28);
			this->btnExit->TabIndex = 3;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormAdminMenu::btnExit_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->ImageKey = L"window-minimize.png";
			this->btnMinimize->Location = System::Drawing::Point(1319, 8);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 5;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormAdminMenu::btnMinimize_Click);
			// 
			// PanelDesktop
			// 
			this->PanelDesktop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->PanelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDesktop->ForeColor = System::Drawing::Color::Transparent;
			this->PanelDesktop->Location = System::Drawing::Point(220, 86);
			this->PanelDesktop->Name = L"PanelDesktop";
			this->PanelDesktop->Size = System::Drawing::Size(1378, 812);
			this->PanelDesktop->TabIndex = 2;
			// 
			// PanelControls
			// 
			this->PanelControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->PanelControls->Controls->Add(this->button1);
			this->PanelControls->Controls->Add(this->button2);
			this->PanelControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelControls->Location = System::Drawing::Point(0, 0);
			this->PanelControls->Name = L"PanelControls";
			this->PanelControls->Size = System::Drawing::Size(1598, 31);
			this->PanelControls->TabIndex = 1;
			this->PanelControls->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormAdminMenu::PanelControls_MouseDown);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1536, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(16, 16);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormAdminMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(1565, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 28);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormAdminMenu::button2_Click);
			// 
			// FormAdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1598, 898);
			this->ControlBox = false;
			this->Controls->Add(this->PanelDesktop);
			this->Controls->Add(this->PanelTitleBar);
			this->Controls->Add(this->PanelMenu);
			this->Controls->Add(this->PanelControls);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1000, 550);
			this->Name = L"FormAdminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormAdminMenu::FormAdminMenu_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormAdminMenu::FormAdminMenu_Load);
			this->PanelMenu->ResumeLayout(false);
			this->PanelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->EndInit();
			this->PanelTitleBar->ResumeLayout(false);
			this->PanelTitleBar->PerformLayout();
			this->PanelControls->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormAdminMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ActivateButton(Object^ senderBtn, Color customColor)
	{
		if (senderBtn != nullptr)
		{
			DisableButton();
			this->currentBtn = static_cast<Button^>(senderBtn);
			this->currentBtn->BackColor = Color::FromArgb(60,60,60);
			this->currentBtn->ForeColor = customColor;
			this->currentBtn->TextAlign = ContentAlignment::MiddleCenter;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleRight;
			this->currentBtn->TextImageRelation = TextImageRelation::TextBeforeImage;

			this->leftBorderBtn->BackColor = customColor;
			this->leftBorderBtn->Location = System::Drawing::Point(0, currentBtn->Location.Y);
			this->leftBorderBtn->Visible = true;
			this->leftBorderBtn->BringToFront();
		}
	}
	private: System::Void DisableButton()
	{
		if (currentBtn != nullptr)
		{
			this->currentBtn->BackColor = Color::FromArgb(44,44,44);
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

	private: System::Void Users_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, Color::WhiteSmoke);
		OpenChildForm(gcnew FormClients);
	}
	private: System::Void Editions_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, Color::WhiteSmoke);
		OpenChildForm(gcnew FormEditions);
	}

	private: System::Void Logout_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dialogResult = MessageBox::Show(this, "Are you sure you want to log out?", "Log out", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}

	private: System::Void PanelTitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}

	private: System::Void FormAdminMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void PanelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = Windows::Forms::FormWindowState::Minimized;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, Color::WhiteSmoke);
		label1->Visible = true;
		OpenChildForm(gcnew FormOrders(label1));
	}
};
}