#pragma once

#include "RGBColors.h"
#include "FormProfile.h"
#include "FormShop.h"
#include "FormSettings.h"
#include "Shop.h"

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
	/// Summary for FormClientMenu
	/// </summary>

	public ref class FormClientMenu : public System::Windows::Forms::Form
	{
	public:
		FormClientMenu(void)
		{
			InitializeComponent();
		}
		FormClientMenu(String^ login)
		{
			InitializeComponent();
			this->login = login;
			leftBorderBtn = gcnew Panel();
			leftBorderBtn->Size = System::Drawing::Size(7, 60);
			PanelMenu->Controls->Add(leftBorderBtn);
		}
		String^ login;
		Shop^ shop;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormClientMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Button^ btnProfile;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Button^ btnShop;
	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Label^ lblFormTitle;
	private: System::Windows::Forms::PictureBox^ IconCurrentForm;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblCurrentTime;
	private: System::Windows::Forms::Timer^ CurrentTime;
	private: System::Windows::Forms::Panel^ panelControls;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Panel^ PanelCart;
	private: System::Windows::Forms::Button^ btnCart;
	public: static System::Windows::Forms::Label^ lblCounterProducts;
	private: System::Windows::Forms::Form^ currentChildForm;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormClientMenu::typeid));
			this->PanelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnShop = (gcnew System::Windows::Forms::Button());
			this->btnProfile = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->imgHome = (gcnew System::Windows::Forms::PictureBox());
			this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->PanelCart = (gcnew System::Windows::Forms::Panel());
			this->btnCart = (gcnew System::Windows::Forms::Button());
			this->lblCounterProducts = (gcnew System::Windows::Forms::Label());
			this->lblFormTitle = (gcnew System::Windows::Forms::Label());
			this->IconCurrentForm = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDesktop = (gcnew System::Windows::Forms::Panel());
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CurrentTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelControls = (gcnew System::Windows::Forms::Panel());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->PanelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->BeginInit();
			this->PanelTitleBar->SuspendLayout();
			this->PanelCart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconCurrentForm))->BeginInit();
			this->PanelDesktop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelControls->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelMenu
			// 
			this->PanelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->PanelMenu->Controls->Add(this->btnLogOut);
			this->PanelMenu->Controls->Add(this->btnSettings);
			this->PanelMenu->Controls->Add(this->btnShop);
			this->PanelMenu->Controls->Add(this->btnProfile);
			this->PanelMenu->Controls->Add(this->PanelLogo);
			this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelMenu->Location = System::Drawing::Point(0, 31);
			this->PanelMenu->Name = L"PanelMenu";
			this->PanelMenu->Size = System::Drawing::Size(220, 867);
			this->PanelMenu->TabIndex = 0;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogOut->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLogOut->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnLogOut->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogOut->ImageIndex = 3;
			this->btnLogOut->ImageList = this->imageList1;
			this->btnLogOut->Location = System::Drawing::Point(0, 807);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLogOut->Size = System::Drawing::Size(220, 60);
			this->btnLogOut->TabIndex = 5;
			this->btnLogOut->Text = L" Log out";
			this->btnLogOut->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogOut->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &FormClientMenu::btnLogOut_Click);
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
			this->imageList1->Images->SetKeyName(5, L"profile.png");
			// 
			// btnSettings
			// 
			this->btnSettings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSettings->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->ImageIndex = 1;
			this->btnSettings->ImageList = this->imageList1;
			this->btnSettings->Location = System::Drawing::Point(0, 260);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSettings->Size = System::Drawing::Size(220, 60);
			this->btnSettings->TabIndex = 4;
			this->btnSettings->Text = L" Settings";
			this->btnSettings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &FormClientMenu::btnSettings_Click);
			// 
			// btnShop
			// 
			this->btnShop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShop->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnShop->FlatAppearance->BorderSize = 0;
			this->btnShop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShop->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShop->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnShop->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnShop->ImageIndex = 2;
			this->btnShop->ImageList = this->imageList1;
			this->btnShop->Location = System::Drawing::Point(0, 200);
			this->btnShop->Name = L"btnShop";
			this->btnShop->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnShop->Size = System::Drawing::Size(220, 60);
			this->btnShop->TabIndex = 2;
			this->btnShop->Text = L" Shop";
			this->btnShop->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnShop->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnShop->UseVisualStyleBackColor = true;
			this->btnShop->Click += gcnew System::EventHandler(this, &FormClientMenu::btnShop_Click);
			// 
			// btnProfile
			// 
			this->btnProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProfile->FlatAppearance->BorderSize = 0;
			this->btnProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProfile->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnProfile->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnProfile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProfile->ImageIndex = 5;
			this->btnProfile->ImageList = this->imageList1;
			this->btnProfile->Location = System::Drawing::Point(0, 140);
			this->btnProfile->Name = L"btnProfile";
			this->btnProfile->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnProfile->Size = System::Drawing::Size(220, 60);
			this->btnProfile->TabIndex = 1;
			this->btnProfile->Text = L" Profile";
			this->btnProfile->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProfile->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProfile->UseVisualStyleBackColor = true;
			this->btnProfile->Click += gcnew System::EventHandler(this, &FormClientMenu::btnProfile_Click);
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
			this->imgHome->Click += gcnew System::EventHandler(this, &FormClientMenu::imgHome_Click);
			// 
			// PanelTitleBar
			// 
			this->PanelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->PanelTitleBar->Controls->Add(this->PanelCart);
			this->PanelTitleBar->Controls->Add(this->lblFormTitle);
			this->PanelTitleBar->Controls->Add(this->IconCurrentForm);
			this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelTitleBar->Location = System::Drawing::Point(220, 31);
			this->PanelTitleBar->Name = L"PanelTitleBar";
			this->PanelTitleBar->Size = System::Drawing::Size(1378, 55);
			this->PanelTitleBar->TabIndex = 1;
			this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormClientMenu::PanelTitleBar_MouseDown);
			// 
			// PanelCart
			// 
			this->PanelCart->Controls->Add(this->btnCart);
			this->PanelCart->Controls->Add(this->lblCounterProducts);
			this->PanelCart->Dock = System::Windows::Forms::DockStyle::Right;
			this->PanelCart->Location = System::Drawing::Point(1235, 0);
			this->PanelCart->Name = L"PanelCart";
			this->PanelCart->Size = System::Drawing::Size(143, 55);
			this->PanelCart->TabIndex = 6;
			// 
			// btnCart
			// 
			this->btnCart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->btnCart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCart->FlatAppearance->BorderSize = 0;
			this->btnCart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCart->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCart->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnCart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCart.Image")));
			this->btnCart->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnCart->Location = System::Drawing::Point(14, 3);
			this->btnCart->Name = L"btnCart";
			this->btnCart->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnCart->Size = System::Drawing::Size(37, 45);
			this->btnCart->TabIndex = 6;
			this->btnCart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCart->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCart->UseVisualStyleBackColor = false;
			this->btnCart->Click += gcnew System::EventHandler(this, &FormClientMenu::btnCart_Click);
			// 
			// lblCounterProducts
			// 
			this->lblCounterProducts->AutoSize = true;
			this->lblCounterProducts->BackColor = System::Drawing::Color::Transparent;
			this->lblCounterProducts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblCounterProducts->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCounterProducts->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblCounterProducts->Location = System::Drawing::Point(45, -3);
			this->lblCounterProducts->Name = L"lblCounterProducts";
			this->lblCounterProducts->Size = System::Drawing::Size(0, 28);
			this->lblCounterProducts->TabIndex = 7;
			// 
			// lblFormTitle
			// 
			this->lblFormTitle->AutoSize = true;
			this->lblFormTitle->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFormTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblFormTitle->Location = System::Drawing::Point(56, 11);
			this->lblFormTitle->Name = L"lblFormTitle";
			this->lblFormTitle->Size = System::Drawing::Size(60, 28);
			this->lblFormTitle->TabIndex = 1;
			this->lblFormTitle->Text = L"Home";
			// 
			// IconCurrentForm
			// 
			this->IconCurrentForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IconCurrentForm.Image")));
			this->IconCurrentForm->Location = System::Drawing::Point(18, 11);
			this->IconCurrentForm->Name = L"IconCurrentForm";
			this->IconCurrentForm->Size = System::Drawing::Size(32, 32);
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
			this->PanelDesktop->Location = System::Drawing::Point(220, 86);
			this->PanelDesktop->Name = L"PanelDesktop";
			this->PanelDesktop->Size = System::Drawing::Size(1378, 812);
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
			this->lblCurrentTime->Location = System::Drawing::Point(457, 393);
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
			this->pictureBox1->Location = System::Drawing::Point(467, 198);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(465, 195);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// CurrentTime
			// 
			this->CurrentTime->Interval = 1000;
			this->CurrentTime->Tick += gcnew System::EventHandler(this, &FormClientMenu::CurrentTime_Tick);
			// 
			// panelControls
			// 
			this->panelControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelControls->Controls->Add(this->btnMinimize);
			this->panelControls->Controls->Add(this->btnExit);
			this->panelControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControls->Location = System::Drawing::Point(0, 0);
			this->panelControls->Name = L"panelControls";
			this->panelControls->Size = System::Drawing::Size(1598, 31);
			this->panelControls->TabIndex = 4;
			this->panelControls->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormClientMenu::panelControls_MouseDown);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(1536, 6);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->TabIndex = 7;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &FormClientMenu::btnMinimize_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(1565, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(32, 28);
			this->btnExit->TabIndex = 6;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormClientMenu::btnExit_Click);
			// 
			// FormClientMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1598, 898);
			this->ControlBox = false;
			this->Controls->Add(this->PanelDesktop);
			this->Controls->Add(this->PanelTitleBar);
			this->Controls->Add(this->PanelMenu);
			this->Controls->Add(this->panelControls);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1000, 550);
			this->Name = L"FormClientMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormClientMenu::FormClientMenu_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormClientMenu::FormClientMenu_Load);
			this->PanelMenu->ResumeLayout(false);
			this->PanelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->EndInit();
			this->PanelTitleBar->ResumeLayout(false);
			this->PanelTitleBar->PerformLayout();
			this->PanelCart->ResumeLayout(false);
			this->PanelCart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconCurrentForm))->EndInit();
			this->PanelDesktop->ResumeLayout(false);
			this->PanelDesktop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelControls->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ActivateButton(Object^ senderBtn, Color customColor)
	{
		if (senderBtn != nullptr)
		{
			DisableButton();
			this->currentBtn = static_cast<Button^>(senderBtn);
			this->currentBtn->TextAlign = ContentAlignment::MiddleCenter;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleRight;
			this->currentBtn->TextImageRelation = TextImageRelation::TextBeforeImage;
			this->currentBtn->Enabled = false;
			this->currentBtn->BackColor = Color::FromArgb(37, 36, 81);
			this->currentBtn->ForeColor = customColor;
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
			this->currentBtn->TextAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->TextImageRelation = TextImageRelation::ImageBeforeText;
			this->currentBtn->Enabled = true;
			this->currentBtn->BackColor = Color::FromArgb(31, 30, 68);
			this->currentBtn->ForeColor = Color::Gainsboro;
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

	private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ActivateButton(sender, RGBColors::color1);
		OpenChildForm(gcnew FormProfile(login));
	}
	private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color2);
		OpenChildForm(gcnew FormShop);
	}

	private: System::Void btnCart_Click(System::Object^ sender, System::EventArgs^ e) {
		Shop::OpenCart();
	}
	private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color4);
		OpenChildForm(gcnew FormSettings);
	}
	private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void FormClientMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		this->shop = gcnew Shop(this, this->lblCounterProducts);
		CurrentTime->Start();
		lblCurrentTime->Text = DateTime::Now.ToString("T");
		lblCounterProducts->Text = "0";

		/*Book^ book = gcnew Book(
			1,
			"The Witcher 3",
			9.99F,
			5,
			"C:\\Users\\infab\\Desktop\\witcher.png"
		);

		Newspaper^ newspaper = gcnew Newspaper(
			2,
			"Newspaper",
			5.F,
			20,
			""
		);

		shop->addProduct(book, 1);
		shop->addProduct(book, 1);
		shop->addProduct(book, 1);
		shop->addProduct(book, 1);
		shop->addProduct(newspaper, 5);
		lblCounterProducts->Text = shop->CountProducts.ToString();*/
	}

	private: System::Void FormClientMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void CurrentTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblCurrentTime->Text = DateTime::Now.ToString("T");
	}
	private: System::Void panelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}

	};
}