#pragma once

#include "RGBColors.h"
#include "FormProfile.h"
#include "FormCart.h"
#include "FormShop.h"
#include "FormSettings.h"
#include "DBQuery.h"

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
		String^ login;
		FormClientMenu(String^ login)
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
		~FormClientMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Button^ Profile;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ Settings;
	private: System::Windows::Forms::Button^ Cart;
	private: System::Windows::Forms::Button^ Shop;
	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Label^ lblFormTitle;
	private: System::Windows::Forms::PictureBox^ IconCurrentForm;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Label^ lblCurrentTime;

	private: System::Windows::Forms::Timer^ CurrentTime;
	private: System::Windows::Forms::Panel^ panelControls;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormClientMenu::typeid));
			this->PanelMenu = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Settings = (gcnew System::Windows::Forms::Button());
			this->Cart = (gcnew System::Windows::Forms::Button());
			this->Shop = (gcnew System::Windows::Forms::Button());
			this->Profile = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->imgHome = (gcnew System::Windows::Forms::PictureBox());
			this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
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
			this->PanelMenu->Controls->Add(this->Exit);
			this->PanelMenu->Controls->Add(this->Settings);
			this->PanelMenu->Controls->Add(this->Cart);
			this->PanelMenu->Controls->Add(this->Shop);
			this->PanelMenu->Controls->Add(this->Profile);
			this->PanelMenu->Controls->Add(this->PanelLogo);
			this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelMenu->Location = System::Drawing::Point(0, 25);
			this->PanelMenu->Name = L"PanelMenu";
			this->PanelMenu->Size = System::Drawing::Size(220, 873);
			this->PanelMenu->TabIndex = 0;
			// 
			// Exit
			// 
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->ForeColor = System::Drawing::Color::Gainsboro;
			this->Exit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->ImageIndex = 3;
			this->Exit->ImageList = this->imageList1;
			this->Exit->Location = System::Drawing::Point(0, 813);
			this->Exit->Name = L"Exit";
			this->Exit->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Exit->Size = System::Drawing::Size(220, 60);
			this->Exit->TabIndex = 5;
			this->Exit->Text = L" Log out";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &FormClientMenu::Exit_Click);
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
			// Settings
			// 
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->Dock = System::Windows::Forms::DockStyle::Top;
			this->Settings->FlatAppearance->BorderSize = 0;
			this->Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Settings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Settings->ForeColor = System::Drawing::Color::Gainsboro;
			this->Settings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->ImageIndex = 1;
			this->Settings->ImageList = this->imageList1;
			this->Settings->Location = System::Drawing::Point(0, 320);
			this->Settings->Name = L"Settings";
			this->Settings->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Settings->Size = System::Drawing::Size(220, 60);
			this->Settings->TabIndex = 4;
			this->Settings->Text = L" Settings";
			this->Settings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Settings->UseVisualStyleBackColor = true;
			this->Settings->Click += gcnew System::EventHandler(this, &FormClientMenu::Settings_Click);
			// 
			// Cart
			// 
			this->Cart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cart->Dock = System::Windows::Forms::DockStyle::Top;
			this->Cart->FlatAppearance->BorderSize = 0;
			this->Cart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cart->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cart->ForeColor = System::Drawing::Color::Gainsboro;
			this->Cart->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Cart->ImageIndex = 0;
			this->Cart->ImageList = this->imageList1;
			this->Cart->Location = System::Drawing::Point(0, 260);
			this->Cart->Name = L"Cart";
			this->Cart->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Cart->Size = System::Drawing::Size(220, 60);
			this->Cart->TabIndex = 3;
			this->Cart->Text = L" Cart";
			this->Cart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Cart->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Cart->UseVisualStyleBackColor = true;
			this->Cart->Click += gcnew System::EventHandler(this, &FormClientMenu::Cart_Click);
			// 
			// Shop
			// 
			this->Shop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Shop->Dock = System::Windows::Forms::DockStyle::Top;
			this->Shop->FlatAppearance->BorderSize = 0;
			this->Shop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Shop->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Shop->ForeColor = System::Drawing::Color::Gainsboro;
			this->Shop->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Shop->ImageIndex = 2;
			this->Shop->ImageList = this->imageList1;
			this->Shop->Location = System::Drawing::Point(0, 200);
			this->Shop->Name = L"Shop";
			this->Shop->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Shop->Size = System::Drawing::Size(220, 60);
			this->Shop->TabIndex = 2;
			this->Shop->Text = L" Shop";
			this->Shop->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Shop->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Shop->UseVisualStyleBackColor = true;
			this->Shop->Click += gcnew System::EventHandler(this, &FormClientMenu::Shop_Click);
			// 
			// Profile
			// 
			this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Profile->Dock = System::Windows::Forms::DockStyle::Top;
			this->Profile->FlatAppearance->BorderSize = 0;
			this->Profile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Profile->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Profile->ForeColor = System::Drawing::Color::Gainsboro;
			this->Profile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Profile->ImageIndex = 5;
			this->Profile->ImageList = this->imageList1;
			this->Profile->Location = System::Drawing::Point(0, 140);
			this->Profile->Name = L"Profile";
			this->Profile->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Profile->Size = System::Drawing::Size(220, 60);
			this->Profile->TabIndex = 1;
			this->Profile->Text = L" Profile";
			this->Profile->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Profile->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Profile->UseVisualStyleBackColor = true;
			this->Profile->Click += gcnew System::EventHandler(this, &FormClientMenu::Profile_Click);
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
			this->PanelTitleBar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelTitleBar->Controls->Add(this->lblFormTitle);
			this->PanelTitleBar->Controls->Add(this->IconCurrentForm);
			this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelTitleBar->Location = System::Drawing::Point(220, 25);
			this->PanelTitleBar->Name = L"PanelTitleBar";
			this->PanelTitleBar->Size = System::Drawing::Size(1378, 55);
			this->PanelTitleBar->TabIndex = 1;
			this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormClientMenu::PanelTitleBar_MouseDown);
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
			this->PanelDesktop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelDesktop->Controls->Add(this->lblCurrentTime);
			this->PanelDesktop->Controls->Add(this->pictureBox1);
			this->PanelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDesktop->ForeColor = System::Drawing::Color::Transparent;
			this->PanelDesktop->Location = System::Drawing::Point(220, 80);
			this->PanelDesktop->Name = L"PanelDesktop";
			this->PanelDesktop->Size = System::Drawing::Size(1378, 818);
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
			this->lblCurrentTime->Location = System::Drawing::Point(456, 395);
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
			this->pictureBox1->Location = System::Drawing::Point(466, 200);
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
			this->panelControls->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelControls->Controls->Add(this->btnMinimize);
			this->panelControls->Controls->Add(this->btnExit);
			this->panelControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControls->Location = System::Drawing::Point(0, 0);
			this->panelControls->Name = L"panelControls";
			this->panelControls->Size = System::Drawing::Size(1598, 25);
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
			this->btnMinimize->Location = System::Drawing::Point(1534, 4);
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
			this->btnExit->Location = System::Drawing::Point(1562, -2);
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

	private: System::Void Profile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ActivateButton(sender, RGBColors::color1);
		OpenChildForm(gcnew FormProfile(login));
	}
	private: System::Void Shop_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color2);
		OpenChildForm(gcnew FormShop);
	}
	private: System::Void Cart_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color3);
		OpenChildForm(gcnew FormCart);
	}
	private: System::Void Settings_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color4);
		OpenChildForm(gcnew FormSettings);
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
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
		CurrentTime->Start();
		//Client^ client = DBQuery::LoadClientData(login);
	}
	private: System::Void FormClientMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void CurrentTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblCurrentTime->Text = DateTime::Now.ToString("hh:mm:ss tt");
	}
	private: System::Void panelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}

	};
}