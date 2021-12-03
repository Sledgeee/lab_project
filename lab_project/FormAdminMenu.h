#pragma once

#include "RGBColors.h"
#include "FormCart.h"
#include "FormShop.h"
#include "FormSettings.h"
#include "DBQuery.h"

namespace labproject {

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
		}
	private: System::Windows::Forms::ImageList^ imageList1;

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
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::Button^ Settings;
	private: System::Windows::Forms::Button^ Editions;
	private: System::Windows::Forms::Button^ Clients;
	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Label^ lblFormTitle;
	private: System::Windows::Forms::PictureBox^ IconCurrentForm;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ Logout;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Label^ lblCurrentTime;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAdminMenu::typeid));
			this->PanelMenu = (gcnew System::Windows::Forms::Panel());
			this->Logout = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Settings = (gcnew System::Windows::Forms::Button());
			this->Editions = (gcnew System::Windows::Forms::Button());
			this->Clients = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->imgHome = (gcnew System::Windows::Forms::PictureBox());
			this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->lblFormTitle = (gcnew System::Windows::Forms::Label());
			this->IconCurrentForm = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDesktop = (gcnew System::Windows::Forms::Panel());
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CurrentTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->PanelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->BeginInit();
			this->PanelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconCurrentForm))->BeginInit();
			this->PanelDesktop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PanelMenu
			// 
			this->PanelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->PanelMenu->Controls->Add(this->Logout);
			this->PanelMenu->Controls->Add(this->Settings);
			this->PanelMenu->Controls->Add(this->Editions);
			this->PanelMenu->Controls->Add(this->Clients);
			this->PanelMenu->Controls->Add(this->PanelLogo);
			this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelMenu->Location = System::Drawing::Point(0, 0);
			this->PanelMenu->Name = L"PanelMenu";
			this->PanelMenu->Size = System::Drawing::Size(220, 898);
			this->PanelMenu->TabIndex = 0;
			// 
			// Logout
			// 
			this->Logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logout->Dock = System::Windows::Forms::DockStyle::Top;
			this->Logout->FlatAppearance->BorderSize = 0;
			this->Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Logout->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Logout->ForeColor = System::Drawing::Color::Gainsboro;
			this->Logout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Logout->ImageIndex = 3;
			this->Logout->ImageList = this->imageList1;
			this->Logout->Location = System::Drawing::Point(0, 320);
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
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"cart.png");
			this->imageList1->Images->SetKeyName(1, L"config.png");
			this->imageList1->Images->SetKeyName(2, L"shop.png");
			this->imageList1->Images->SetKeyName(3, L"exit.png");
			this->imageList1->Images->SetKeyName(4, L"home.png");
			this->imageList1->Images->SetKeyName(5, L"window-close.png");
			this->imageList1->Images->SetKeyName(6, L"window-minimize.png");
			this->imageList1->Images->SetKeyName(7, L"window-restore.png");
			this->imageList1->Images->SetKeyName(8, L"clients.png");
			this->imageList1->Images->SetKeyName(9, L"login.png");
			this->imageList1->Images->SetKeyName(10, L"profile.png");
			// 
			// Settings
			// 
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->Dock = System::Windows::Forms::DockStyle::Top;
			this->Settings->FlatAppearance->BorderSize = 0;
			this->Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Settings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Settings->ForeColor = System::Drawing::Color::Gainsboro;
			this->Settings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->ImageIndex = 1;
			this->Settings->ImageList = this->imageList1;
			this->Settings->Location = System::Drawing::Point(0, 260);
			this->Settings->Name = L"Settings";
			this->Settings->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Settings->Size = System::Drawing::Size(220, 60);
			this->Settings->TabIndex = 4;
			this->Settings->Text = L" Settings";
			this->Settings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Settings->UseVisualStyleBackColor = true;
			this->Settings->Click += gcnew System::EventHandler(this, &FormAdminMenu::Settings_Click);
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
			this->Editions->ImageIndex = 2;
			this->Editions->ImageList = this->imageList1;
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
			// Clients
			// 
			this->Clients->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Clients->Dock = System::Windows::Forms::DockStyle::Top;
			this->Clients->FlatAppearance->BorderSize = 0;
			this->Clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clients->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clients->ForeColor = System::Drawing::Color::Gainsboro;
			this->Clients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Clients->ImageIndex = 8;
			this->Clients->ImageList = this->imageList1;
			this->Clients->Location = System::Drawing::Point(0, 140);
			this->Clients->Name = L"Clients";
			this->Clients->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Clients->Size = System::Drawing::Size(220, 60);
			this->Clients->TabIndex = 2;
			this->Clients->Text = L" Clients";
			this->Clients->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Clients->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Clients->UseVisualStyleBackColor = true;
			this->Clients->Click += gcnew System::EventHandler(this, &FormAdminMenu::Clients_Click);
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
			this->imgHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgHome.Image")));
			this->imgHome->Location = System::Drawing::Point(14, 12);
			this->imgHome->Name = L"imgHome";
			this->imgHome->Size = System::Drawing::Size(191, 115);
			this->imgHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgHome->TabIndex = 0;
			this->imgHome->TabStop = false;
			this->imgHome->Click += gcnew System::EventHandler(this, &FormAdminMenu::imgHome_Click);
			// 
			// PanelTitleBar
			// 
			this->PanelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->PanelTitleBar->Controls->Add(this->btnExit);
			this->PanelTitleBar->Controls->Add(this->btnMinimize);
			this->PanelTitleBar->Controls->Add(this->lblFormTitle);
			this->PanelTitleBar->Controls->Add(this->IconCurrentForm);
			this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelTitleBar->Location = System::Drawing::Point(220, 0);
			this->PanelTitleBar->Name = L"PanelTitleBar";
			this->PanelTitleBar->Size = System::Drawing::Size(1378, 75);
			this->PanelTitleBar->TabIndex = 1;
			this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormAdminMenu::PanelTitleBar_MouseDown);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
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
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(1319, 8);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 5;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormAdminMenu::btnMinimize_Click);
			// 
			// lblFormTitle
			// 
			this->lblFormTitle->AutoSize = true;
			this->lblFormTitle->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFormTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblFormTitle->Location = System::Drawing::Point(64, 24);
			this->lblFormTitle->Name = L"lblFormTitle";
			this->lblFormTitle->Size = System::Drawing::Size(56, 25);
			this->lblFormTitle->TabIndex = 1;
			this->lblFormTitle->Text = L"Home";
			// 
			// IconCurrentForm
			// 
			this->IconCurrentForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IconCurrentForm.Image")));
			this->IconCurrentForm->Location = System::Drawing::Point(27, 21);
			this->IconCurrentForm->Name = L"IconCurrentForm";
			this->IconCurrentForm->Size = System::Drawing::Size(32, 32);
			this->IconCurrentForm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->IconCurrentForm->TabIndex = 0;
			this->IconCurrentForm->TabStop = false;
			// 
			// PanelDesktop
			// 
			this->PanelDesktop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->PanelDesktop->Controls->Add(this->lblCurrentTime);
			this->PanelDesktop->Controls->Add(this->pictureBox1);
			this->PanelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDesktop->ForeColor = System::Drawing::Color::Transparent;
			this->PanelDesktop->Location = System::Drawing::Point(220, 75);
			this->PanelDesktop->Name = L"PanelDesktop";
			this->PanelDesktop->Size = System::Drawing::Size(1378, 823);
			this->PanelDesktop->TabIndex = 2;
			// 
			// lblCurrentTime
			// 
			this->lblCurrentTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblCurrentTime->AutoSize = true;
			this->lblCurrentTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblCurrentTime->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCurrentTime->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->lblCurrentTime->Location = System::Drawing::Point(457, 398);
			this->lblCurrentTime->Name = L"lblCurrentTime";
			this->lblCurrentTime->Size = System::Drawing::Size(502, 127);
			this->lblCurrentTime->TabIndex = 3;
			this->lblCurrentTime->Text = L"00:00:00";
			this->lblCurrentTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(467, 203);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(465, 195);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// CurrentTime
			// 
			this->CurrentTime->Interval = 1000;
			this->CurrentTime->Tick += gcnew System::EventHandler(this, &FormAdminMenu::CurrentTime_Tick);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconCurrentForm))->EndInit();
			this->PanelDesktop->ResumeLayout(false);
			this->PanelDesktop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

			this->IconCurrentForm->Image = currentBtn->Image;
		}
	}
	private: System::Void DisableButton()
	{
		if (currentBtn != nullptr)
		{
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
		lblFormTitle->Text = childForm->Text;
	}

	private: System::Void Clients_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color2);
		OpenChildForm(gcnew FormShop);
	}
	private: System::Void Editions_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color3);
		OpenChildForm(gcnew FormCart);
	}
	private: System::Void Settings_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color4);
		OpenChildForm(gcnew FormSettings);
	}
	private: System::Void Logout_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dialogResult = MessageBox::Show(this, "Are you sure you want to log out?", "Log out", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}
	private: System::Void imgHome_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		Reset();
	}

	private: System::Void Reset()
	{
		DisableButton();
		leftBorderBtn->Visible = false;
		IconCurrentForm->Image = this->imageList1->Images[4];
		lblFormTitle->Text = "Home";
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
	private: System::Void FormAdminMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		CurrentTime->Start();
	}
	private: System::Void FormAdminMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void CurrentTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblCurrentTime->Text = DateTime::Now.ToString("hh:mm:ss tt");
	}
};
}