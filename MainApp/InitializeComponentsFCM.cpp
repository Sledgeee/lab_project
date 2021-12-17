#include "FormClientMenu.h"

namespace MainApp {
	void FormClientMenu::InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormClientMenu::typeid));
		this->PanelMenu = (gcnew System::Windows::Forms::Panel());
		this->btnMyWallet = (gcnew System::Windows::Forms::Button());
		this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->btnMyOrders = (gcnew System::Windows::Forms::Button());
		this->btnLogOut = (gcnew System::Windows::Forms::Button());
		this->btnShop = (gcnew System::Windows::Forms::Button());
		this->btnProfile = (gcnew System::Windows::Forms::Button());
		this->PanelLogo = (gcnew System::Windows::Forms::Panel());
		this->imgHome = (gcnew System::Windows::Forms::PictureBox());
		this->PanelTitleBar = (gcnew System::Windows::Forms::Panel());
		this->PanelSearchControls = (gcnew System::Windows::Forms::Panel());
		this->btnHideSearchRow = (gcnew System::Windows::Forms::Button());
		this->btnShowSearchRow = (gcnew System::Windows::Forms::Button());
		this->pictureFurfur = (gcnew System::Windows::Forms::PictureBox());
		this->btnClearText = (gcnew System::Windows::Forms::Button());
		this->txtSearch = (gcnew System::Windows::Forms::TextBox());
		this->minipanelCart = (gcnew System::Windows::Forms::Panel());
		this->btnCart = (gcnew System::Windows::Forms::Button());
		this->lblCounterProducts = (gcnew System::Windows::Forms::Label());
		this->PanelDesktop = (gcnew System::Windows::Forms::Panel());
		this->PanelProfile = (gcnew System::Windows::Forms::Panel());
		this->panelPasswordSecurity = (gcnew System::Windows::Forms::Panel());
		this->lblDeleteAccountDescription = (gcnew System::Windows::Forms::Label());
		this->btnDeleteAccount = (gcnew System::Windows::Forms::Button());
		this->lblDeleteAccount = (gcnew System::Windows::Forms::Label());
		this->lblSeparator2 = (gcnew System::Windows::Forms::Label());
		this->lblSeparator1 = (gcnew System::Windows::Forms::Label());
		this->btnDiscardPasswordSecurityChanges = (gcnew System::Windows::Forms::Button());
		this->btnSavePasswordSecurityChanges = (gcnew System::Windows::Forms::Button());
		this->lblPasswordSecurity = (gcnew System::Windows::Forms::Label());
		this->lblEmail2FAStatus = (gcnew System::Windows::Forms::Label());
		this->toggleEmail2FA = (gcnew System::Windows::Forms::CheckBox());
		this->lblEmail2FAdescription = (gcnew System::Windows::Forms::Label());
		this->lblAvailableAuthMethods = (gcnew System::Windows::Forms::Label());
		this->lbl2FAdescription = (gcnew System::Windows::Forms::Label());
		this->lbl2FAAuthentication = (gcnew System::Windows::Forms::Label());
		this->lblEmail2FA = (gcnew System::Windows::Forms::Label());
		this->panelCurrentPassword = (gcnew System::Windows::Forms::Panel());
		this->txtCurrentPassword = (gcnew System::Windows::Forms::MaskedTextBox());
		this->lblCurrentPasswordPlaceholder = (gcnew System::Windows::Forms::Label());
		this->panelNewPassword = (gcnew System::Windows::Forms::Panel());
		this->txtNewPassword = (gcnew System::Windows::Forms::MaskedTextBox());
		this->lblNewPasswordPlaceholder = (gcnew System::Windows::Forms::Label());
		this->panelRetypePassword = (gcnew System::Windows::Forms::Panel());
		this->txtRetypePassword = (gcnew System::Windows::Forms::MaskedTextBox());
		this->lblRetypePasswordPlaceholder = (gcnew System::Windows::Forms::Label());
		this->panelGeneralSettings = (gcnew System::Windows::Forms::Panel());
		this->lblErrCity = (gcnew System::Windows::Forms::Label());
		this->lblErrCountry = (gcnew System::Windows::Forms::Label());
		this->lblErrLN = (gcnew System::Windows::Forms::Label());
		this->lblErrFN = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->btnDiscardGeneralSettings = (gcnew System::Windows::Forms::Button());
		this->btnSaveGeneralSettings = (gcnew System::Windows::Forms::Button());
		this->panelCity = (gcnew System::Windows::Forms::Panel());
		this->txtCity = (gcnew System::Windows::Forms::TextBox());
		this->lblCityPlaceholder = (gcnew System::Windows::Forms::Label());
		this->panelCountry = (gcnew System::Windows::Forms::Panel());
		this->txtCountry = (gcnew System::Windows::Forms::TextBox());
		this->lblCountryPlaceholder = (gcnew System::Windows::Forms::Label());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->panelLastName = (gcnew System::Windows::Forms::Panel());
		this->lblLastNamePlaceholder = (gcnew System::Windows::Forms::Label());
		this->txtLastName = (gcnew System::Windows::Forms::TextBox());
		this->panelFirstName = (gcnew System::Windows::Forms::Panel());
		this->lblFirstNamePlaceholder = (gcnew System::Windows::Forms::Label());
		this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
		this->lblPDdescription = (gcnew System::Windows::Forms::Label());
		this->lblPersonalDetails = (gcnew System::Windows::Forms::Label());
		this->btnCancelEditEmail = (gcnew System::Windows::Forms::Button());
		this->btnEditEmail = (gcnew System::Windows::Forms::Button());
		this->panelEmailEdit = (gcnew System::Windows::Forms::Panel());
		this->txtCurrentUserEmail = (gcnew System::Windows::Forms::TextBox());
		this->lblEmailAddressPlaceholder = (gcnew System::Windows::Forms::Label());
		this->btnSaveEditEmail = (gcnew System::Windows::Forms::Button());
		this->btnCancelEditLogin = (gcnew System::Windows::Forms::Button());
		this->btnEditLogin = (gcnew System::Windows::Forms::Button());
		this->panelLoginEdit = (gcnew System::Windows::Forms::Panel());
		this->txtCurrentUserLogin = (gcnew System::Windows::Forms::TextBox());
		this->lblLoginPlaceholder = (gcnew System::Windows::Forms::Label());
		this->lblCurrentUserID = (gcnew System::Windows::Forms::Label());
		this->lblID = (gcnew System::Windows::Forms::Label());
		this->lblAccountInfo = (gcnew System::Windows::Forms::Label());
		this->lblGSdescription = (gcnew System::Windows::Forms::Label());
		this->lblGeneralSettings = (gcnew System::Windows::Forms::Label());
		this->btnSaveEditLogin = (gcnew System::Windows::Forms::Button());
		this->PanelCart = (gcnew System::Windows::Forms::Panel());
		this->PanelCartDesk = (gcnew System::Windows::Forms::Panel());
		this->flowCart = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->PanelButtons = (gcnew System::Windows::Forms::Panel());
		this->PanelCheckout = (gcnew System::Windows::Forms::Panel());
		this->lblTotalPrice = (gcnew System::Windows::Forms::Label());
		this->btnCheckout = (gcnew System::Windows::Forms::Button());
		this->btnContinueShopping = (gcnew System::Windows::Forms::Button());
		this->pictureBigCheck = (gcnew System::Windows::Forms::PictureBox());
		this->pictureBigCart = (gcnew System::Windows::Forms::PictureBox());
		this->lblNeverFixIt = (gcnew System::Windows::Forms::Label());
		this->lblCartIsEmpty = (gcnew System::Windows::Forms::Label());
		this->lblOrderCreated = (gcnew System::Windows::Forms::Label());
		this->flowShop = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->flowSearchingResults = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->panelControls = (gcnew System::Windows::Forms::Panel());
		this->btnMinimize = (gcnew System::Windows::Forms::Button());
		this->btnExit = (gcnew System::Windows::Forms::Button());
		this->lblUserNameTitle = (gcnew System::Windows::Forms::Label());
		this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->imageList5 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->PanelMenu->SuspendLayout();
		this->PanelLogo->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->BeginInit();
		this->PanelTitleBar->SuspendLayout();
		this->PanelSearchControls->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFurfur))->BeginInit();
		this->minipanelCart->SuspendLayout();
		this->PanelDesktop->SuspendLayout();
		this->PanelProfile->SuspendLayout();
		this->panelPasswordSecurity->SuspendLayout();
		this->panelCurrentPassword->SuspendLayout();
		this->panelNewPassword->SuspendLayout();
		this->panelRetypePassword->SuspendLayout();
		this->panelGeneralSettings->SuspendLayout();
		this->panelCity->SuspendLayout();
		this->panelCountry->SuspendLayout();
		this->panelLastName->SuspendLayout();
		this->panelFirstName->SuspendLayout();
		this->panelEmailEdit->SuspendLayout();
		this->panelLoginEdit->SuspendLayout();
		this->PanelCart->SuspendLayout();
		this->PanelCartDesk->SuspendLayout();
		this->PanelButtons->SuspendLayout();
		this->PanelCheckout->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBigCheck))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBigCart))->BeginInit();
		this->panelControls->SuspendLayout();
		this->SuspendLayout();
		// 
		// PanelMenu
		// 
		this->PanelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
			static_cast<System::Int32>(static_cast<System::Byte>(44)));
		this->PanelMenu->Controls->Add(this->btnMyWallet);
		this->PanelMenu->Controls->Add(this->btnMyOrders);
		this->PanelMenu->Controls->Add(this->btnLogOut);
		this->PanelMenu->Controls->Add(this->btnShop);
		this->PanelMenu->Controls->Add(this->btnProfile);
		this->PanelMenu->Controls->Add(this->PanelLogo);
		this->PanelMenu->Dock = System::Windows::Forms::DockStyle::Left;
		this->PanelMenu->Location = System::Drawing::Point(0, 31);
		this->PanelMenu->Name = L"PanelMenu";
		this->PanelMenu->Size = System::Drawing::Size(220, 867);
		this->PanelMenu->TabIndex = 0;
		// 
		// btnMyWallet
		// 
		this->btnMyWallet->Cursor = System::Windows::Forms::Cursors::Hand;
		this->btnMyWallet->Dock = System::Windows::Forms::DockStyle::Top;
		this->btnMyWallet->FlatAppearance->BorderSize = 0;
		this->btnMyWallet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMyWallet->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnMyWallet->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnMyWallet->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnMyWallet->ImageIndex = 10;
		this->btnMyWallet->ImageList = this->imageList1;
		this->btnMyWallet->Location = System::Drawing::Point(0, 320);
		this->btnMyWallet->Name = L"btnMyWallet";
		this->btnMyWallet->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
		this->btnMyWallet->Size = System::Drawing::Size(220, 60);
		this->btnMyWallet->TabIndex = 7;
		this->btnMyWallet->Text = L" My wallet";
		this->btnMyWallet->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnMyWallet->UseVisualStyleBackColor = true;
		this->btnMyWallet->Click += gcnew System::EventHandler(this, &FormClientMenu::btnMyWallet_Click);
		this->btnMyWallet->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::btnMyWallet_Paint);
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
		this->imageList1->Images->SetKeyName(6, L"search.png");
		this->imageList1->Images->SetKeyName(7, L"show_search_row.png");
		this->imageList1->Images->SetKeyName(8, L"hide_search_row.png");
		this->imageList1->Images->SetKeyName(9, L"orders.png");
		this->imageList1->Images->SetKeyName(10, L"wallet.png");
		// 
		// btnMyOrders
		// 
		this->btnMyOrders->Cursor = System::Windows::Forms::Cursors::Hand;
		this->btnMyOrders->Dock = System::Windows::Forms::DockStyle::Top;
		this->btnMyOrders->FlatAppearance->BorderSize = 0;
		this->btnMyOrders->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMyOrders->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnMyOrders->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnMyOrders->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnMyOrders->ImageIndex = 9;
		this->btnMyOrders->ImageList = this->imageList1;
		this->btnMyOrders->Location = System::Drawing::Point(0, 260);
		this->btnMyOrders->Name = L"btnMyOrders";
		this->btnMyOrders->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
		this->btnMyOrders->Size = System::Drawing::Size(220, 60);
		this->btnMyOrders->TabIndex = 6;
		this->btnMyOrders->Text = L" My orders";
		this->btnMyOrders->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnMyOrders->UseVisualStyleBackColor = true;
		this->btnMyOrders->Click += gcnew System::EventHandler(this, &FormClientMenu::btnMyOrders_Click);
		this->btnMyOrders->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::btnMyOrders_Paint);
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
		this->btnShop->Text = L" Shop ";
		this->btnShop->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnShop->UseVisualStyleBackColor = true;
		this->btnShop->Click += gcnew System::EventHandler(this, &FormClientMenu::btnShop_Click);
		this->btnShop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::btnShop_Paint);
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
		this->btnProfile->Text = L" My cabinet";
		this->btnProfile->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnProfile->UseVisualStyleBackColor = true;
		this->btnProfile->Click += gcnew System::EventHandler(this, &FormClientMenu::btnProfile_Click);
		this->btnProfile->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::btnProfile_Paint);
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
		this->PanelTitleBar->Controls->Add(this->PanelSearchControls);
		this->PanelTitleBar->Controls->Add(this->minipanelCart);
		this->PanelTitleBar->Cursor = System::Windows::Forms::Cursors::Arrow;
		this->PanelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
		this->PanelTitleBar->Location = System::Drawing::Point(220, 31);
		this->PanelTitleBar->Name = L"PanelTitleBar";
		this->PanelTitleBar->Size = System::Drawing::Size(1398, 55);
		this->PanelTitleBar->TabIndex = 1;
		this->PanelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormClientMenu::PanelTitleBar_MouseDown);
		// 
		// PanelSearchControls
		// 
		this->PanelSearchControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->PanelSearchControls->Controls->Add(this->btnHideSearchRow);
		this->PanelSearchControls->Controls->Add(this->btnShowSearchRow);
		this->PanelSearchControls->Controls->Add(this->pictureFurfur);
		this->PanelSearchControls->Controls->Add(this->btnClearText);
		this->PanelSearchControls->Controls->Add(this->txtSearch);
		this->PanelSearchControls->Dock = System::Windows::Forms::DockStyle::Left;
		this->PanelSearchControls->Location = System::Drawing::Point(0, 0);
		this->PanelSearchControls->Name = L"PanelSearchControls";
		this->PanelSearchControls->Size = System::Drawing::Size(713, 55);
		this->PanelSearchControls->TabIndex = 12;
		// 
		// btnHideSearchRow
		// 
		this->btnHideSearchRow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->btnHideSearchRow->Cursor = System::Windows::Forms::Cursors::Hand;
		this->btnHideSearchRow->FlatAppearance->BorderSize = 0;
		this->btnHideSearchRow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnHideSearchRow->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnHideSearchRow->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnHideSearchRow->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnHideSearchRow->ImageKey = L"hide_search_row.png";
		this->btnHideSearchRow->ImageList = this->imageList1;
		this->btnHideSearchRow->Location = System::Drawing::Point(660, 4);
		this->btnHideSearchRow->Name = L"btnHideSearchRow";
		this->btnHideSearchRow->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
		this->btnHideSearchRow->Size = System::Drawing::Size(40, 44);
		this->btnHideSearchRow->TabIndex = 12;
		this->btnHideSearchRow->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnHideSearchRow->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnHideSearchRow->UseVisualStyleBackColor = false;
		this->btnHideSearchRow->Visible = false;
		this->btnHideSearchRow->Click += gcnew System::EventHandler(this, &FormClientMenu::btnHideSearchRow_Click);
		// 
		// btnShowSearchRow
		// 
		this->btnShowSearchRow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->btnShowSearchRow->Cursor = System::Windows::Forms::Cursors::Hand;
		this->btnShowSearchRow->FlatAppearance->BorderSize = 0;
		this->btnShowSearchRow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnShowSearchRow->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnShowSearchRow->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnShowSearchRow->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnShowSearchRow->ImageKey = L"show_search_row.png";
		this->btnShowSearchRow->ImageList = this->imageList1;
		this->btnShowSearchRow->Location = System::Drawing::Point(4, 5);
		this->btnShowSearchRow->Name = L"btnShowSearchRow";
		this->btnShowSearchRow->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
		this->btnShowSearchRow->Size = System::Drawing::Size(40, 44);
		this->btnShowSearchRow->TabIndex = 10;
		this->btnShowSearchRow->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnShowSearchRow->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnShowSearchRow->UseVisualStyleBackColor = false;
		this->btnShowSearchRow->Click += gcnew System::EventHandler(this, &FormClientMenu::btnShowSearchRow_Click);
		// 
		// pictureFurfur
		// 
		this->pictureFurfur->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureFurfur.Image")));
		this->pictureFurfur->Location = System::Drawing::Point(7, 12);
		this->pictureFurfur->Name = L"pictureFurfur";
		this->pictureFurfur->Size = System::Drawing::Size(32, 32);
		this->pictureFurfur->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureFurfur->TabIndex = 11;
		this->pictureFurfur->TabStop = false;
		this->pictureFurfur->Visible = false;
		// 
		// btnClearText
		// 
		this->btnClearText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->btnClearText->Cursor = System::Windows::Forms::Cursors::Hand;
		this->btnClearText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnClearText->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnClearText->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnClearText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClearText.Image")));
		this->btnClearText->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnClearText->Location = System::Drawing::Point(608, 13);
		this->btnClearText->Name = L"btnClearText";
		this->btnClearText->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
		this->btnClearText->Size = System::Drawing::Size(48, 28);
		this->btnClearText->TabIndex = 9;
		this->btnClearText->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnClearText->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnClearText->UseVisualStyleBackColor = false;
		this->btnClearText->Visible = false;
		this->btnClearText->Click += gcnew System::EventHandler(this, &FormClientMenu::btnClearText_Click);
		// 
		// txtSearch
		// 
		this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtSearch->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtSearch->Location = System::Drawing::Point(51, 12);
		this->txtSearch->Name = L"txtSearch";
		this->txtSearch->Size = System::Drawing::Size(0, 30);
		this->txtSearch->TabIndex = 7;
		this->txtSearch->TextChanged += gcnew System::EventHandler(this, &FormClientMenu::txtSearch_TextChanged);
		// 
		// minipanelCart
		// 
		this->minipanelCart->Controls->Add(this->btnCart);
		this->minipanelCart->Controls->Add(this->lblCounterProducts);
		this->minipanelCart->Dock = System::Windows::Forms::DockStyle::Right;
		this->minipanelCart->Location = System::Drawing::Point(1255, 0);
		this->minipanelCart->Name = L"minipanelCart";
		this->minipanelCart->Size = System::Drawing::Size(143, 55);
		this->minipanelCart->TabIndex = 6;
		// 
		// btnCart
		// 
		this->btnCart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
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
		// PanelDesktop
		// 
		this->PanelDesktop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
			static_cast<System::Int32>(static_cast<System::Byte>(55)));
		this->PanelDesktop->Controls->Add(this->PanelProfile);
		this->PanelDesktop->Controls->Add(this->PanelCart);
		this->PanelDesktop->Controls->Add(this->flowShop);
		this->PanelDesktop->Controls->Add(this->flowSearchingResults);
		this->PanelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PanelDesktop->ForeColor = System::Drawing::Color::Transparent;
		this->PanelDesktop->Location = System::Drawing::Point(220, 86);
		this->PanelDesktop->Name = L"PanelDesktop";
		this->PanelDesktop->Size = System::Drawing::Size(1398, 812);
		this->PanelDesktop->TabIndex = 2;
		// 
		// PanelProfile
		// 
		this->PanelProfile->AutoScroll = true;
		this->PanelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
			static_cast<System::Int32>(static_cast<System::Byte>(55)));
		this->PanelProfile->Controls->Add(this->panelPasswordSecurity);
		this->PanelProfile->Controls->Add(this->panelGeneralSettings);
		this->PanelProfile->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PanelProfile->Location = System::Drawing::Point(0, 0);
		this->PanelProfile->Name = L"PanelProfile";
		this->PanelProfile->Size = System::Drawing::Size(1398, 812);
		this->PanelProfile->TabIndex = 1;
		this->PanelProfile->Visible = false;
		// 
		// panelPasswordSecurity
		// 
		this->panelPasswordSecurity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
			static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
		this->panelPasswordSecurity->Controls->Add(this->lblDeleteAccountDescription);
		this->panelPasswordSecurity->Controls->Add(this->btnDeleteAccount);
		this->panelPasswordSecurity->Controls->Add(this->lblDeleteAccount);
		this->panelPasswordSecurity->Controls->Add(this->lblSeparator2);
		this->panelPasswordSecurity->Controls->Add(this->lblSeparator1);
		this->panelPasswordSecurity->Controls->Add(this->btnDiscardPasswordSecurityChanges);
		this->panelPasswordSecurity->Controls->Add(this->btnSavePasswordSecurityChanges);
		this->panelPasswordSecurity->Controls->Add(this->lblPasswordSecurity);
		this->panelPasswordSecurity->Controls->Add(this->lblEmail2FAStatus);
		this->panelPasswordSecurity->Controls->Add(this->toggleEmail2FA);
		this->panelPasswordSecurity->Controls->Add(this->lblEmail2FAdescription);
		this->panelPasswordSecurity->Controls->Add(this->lblAvailableAuthMethods);
		this->panelPasswordSecurity->Controls->Add(this->lbl2FAdescription);
		this->panelPasswordSecurity->Controls->Add(this->lbl2FAAuthentication);
		this->panelPasswordSecurity->Controls->Add(this->lblEmail2FA);
		this->panelPasswordSecurity->Controls->Add(this->panelCurrentPassword);
		this->panelPasswordSecurity->Controls->Add(this->panelNewPassword);
		this->panelPasswordSecurity->Controls->Add(this->panelRetypePassword);
		this->panelPasswordSecurity->Location = System::Drawing::Point(0, 647);
		this->panelPasswordSecurity->Name = L"panelPasswordSecurity";
		this->panelPasswordSecurity->Size = System::Drawing::Size(1379, 791);
		this->panelPasswordSecurity->TabIndex = 1;
		// 
		// lblDeleteAccountDescription
		// 
		this->lblDeleteAccountDescription->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblDeleteAccountDescription->AutoSize = true;
		this->lblDeleteAccountDescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblDeleteAccountDescription->ForeColor = System::Drawing::Color::DarkGray;
		this->lblDeleteAccountDescription->Location = System::Drawing::Point(26, 729);
		this->lblDeleteAccountDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblDeleteAccountDescription->MaximumSize = System::Drawing::Size(800, 0);
		this->lblDeleteAccountDescription->Name = L"lblDeleteAccountDescription";
		this->lblDeleteAccountDescription->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->lblDeleteAccountDescription->Size = System::Drawing::Size(793, 42);
		this->lblDeleteAccountDescription->TabIndex = 133;
		this->lblDeleteAccountDescription->Text = L"Click REQUEST ACCOUNT DELETE to start the process of permanently deleting your OV"
			L" STORE account including all personal information and purchases.";
		// 
		// btnDeleteAccount
		// 
		this->btnDeleteAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->btnDeleteAccount->FlatAppearance->BorderColor = System::Drawing::Color::Red;
		this->btnDeleteAccount->FlatAppearance->BorderSize = 2;
		this->btnDeleteAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnDeleteAccount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnDeleteAccount->ForeColor = System::Drawing::Color::Red;
		this->btnDeleteAccount->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnDeleteAccount->Location = System::Drawing::Point(967, 709);
		this->btnDeleteAccount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnDeleteAccount->Name = L"btnDeleteAccount";
		this->btnDeleteAccount->Size = System::Drawing::Size(328, 62);
		this->btnDeleteAccount->TabIndex = 132;
		this->btnDeleteAccount->Text = L"REQUEST ACCOUNT DELETE";
		this->btnDeleteAccount->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnDeleteAccount->UseVisualStyleBackColor = true;
		this->btnDeleteAccount->Click += gcnew System::EventHandler(this, &FormClientMenu::btnDeleteAccount_Click);
		// 
		// lblDeleteAccount
		// 
		this->lblDeleteAccount->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblDeleteAccount->AutoSize = true;
		this->lblDeleteAccount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblDeleteAccount->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblDeleteAccount->Location = System::Drawing::Point(22, 686);
		this->lblDeleteAccount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblDeleteAccount->Name = L"lblDeleteAccount";
		this->lblDeleteAccount->Size = System::Drawing::Size(255, 39);
		this->lblDeleteAccount->TabIndex = 131;
		this->lblDeleteAccount->Text = L"DELETE ACCOUNT";
		// 
		// lblSeparator2
		// 
		this->lblSeparator2->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblSeparator2->AutoSize = true;
		this->lblSeparator2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblSeparator2->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblSeparator2->Location = System::Drawing::Point(18, 651);
		this->lblSeparator2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblSeparator2->Name = L"lblSeparator2";
		this->lblSeparator2->Size = System::Drawing::Size(1354, 25);
		this->lblSeparator2->TabIndex = 130;
		this->lblSeparator2->Text = L"_________________________________________________________________________________"
			L"_________________________________________";
		// 
		// lblSeparator1
		// 
		this->lblSeparator1->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblSeparator1->AutoSize = true;
		this->lblSeparator1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblSeparator1->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblSeparator1->Location = System::Drawing::Point(16, -14);
		this->lblSeparator1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblSeparator1->Name = L"lblSeparator1";
		this->lblSeparator1->Size = System::Drawing::Size(1354, 25);
		this->lblSeparator1->TabIndex = 128;
		this->lblSeparator1->Text = L"_________________________________________________________________________________"
			L"_________________________________________";
		// 
		// btnDiscardPasswordSecurityChanges
		// 
		this->btnDiscardPasswordSecurityChanges->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnDiscardPasswordSecurityChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)),
			static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
		this->btnDiscardPasswordSecurityChanges->FlatAppearance->BorderSize = 2;
		this->btnDiscardPasswordSecurityChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnDiscardPasswordSecurityChanges->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->btnDiscardPasswordSecurityChanges->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnDiscardPasswordSecurityChanges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDiscardPasswordSecurityChanges.Image")));
		this->btnDiscardPasswordSecurityChanges->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnDiscardPasswordSecurityChanges->Location = System::Drawing::Point(29, 268);
		this->btnDiscardPasswordSecurityChanges->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnDiscardPasswordSecurityChanges->Name = L"btnDiscardPasswordSecurityChanges";
		this->btnDiscardPasswordSecurityChanges->Size = System::Drawing::Size(235, 55);
		this->btnDiscardPasswordSecurityChanges->TabIndex = 119;
		this->btnDiscardPasswordSecurityChanges->Text = L"DISCARD CHANGES";
		this->btnDiscardPasswordSecurityChanges->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnDiscardPasswordSecurityChanges->UseVisualStyleBackColor = false;
		this->btnDiscardPasswordSecurityChanges->Click += gcnew System::EventHandler(this, &FormClientMenu::btnDiscardPasswordSecurityChanges_Click);
		// 
		// btnSavePasswordSecurityChanges
		// 
		this->btnSavePasswordSecurityChanges->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnSavePasswordSecurityChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->btnSavePasswordSecurityChanges->FlatAppearance->BorderSize = 2;
		this->btnSavePasswordSecurityChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSavePasswordSecurityChanges->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->btnSavePasswordSecurityChanges->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnSavePasswordSecurityChanges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSavePasswordSecurityChanges.Image")));
		this->btnSavePasswordSecurityChanges->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnSavePasswordSecurityChanges->Location = System::Drawing::Point(291, 268);
		this->btnSavePasswordSecurityChanges->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnSavePasswordSecurityChanges->Name = L"btnSavePasswordSecurityChanges";
		this->btnSavePasswordSecurityChanges->Size = System::Drawing::Size(235, 55);
		this->btnSavePasswordSecurityChanges->TabIndex = 118;
		this->btnSavePasswordSecurityChanges->Text = L"SAVE CHANGES";
		this->btnSavePasswordSecurityChanges->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnSavePasswordSecurityChanges->UseVisualStyleBackColor = false;
		this->btnSavePasswordSecurityChanges->Click += gcnew System::EventHandler(this, &FormClientMenu::btnSavePasswordSecurityChanges_Click);
		// 
		// lblPasswordSecurity
		// 
		this->lblPasswordSecurity->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblPasswordSecurity->AutoSize = true;
		this->lblPasswordSecurity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblPasswordSecurity->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblPasswordSecurity->Location = System::Drawing::Point(15, 25);
		this->lblPasswordSecurity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblPasswordSecurity->Name = L"lblPasswordSecurity";
		this->lblPasswordSecurity->Size = System::Drawing::Size(380, 43);
		this->lblPasswordSecurity->TabIndex = 124;
		this->lblPasswordSecurity->Text = L"PASSWORD / SECURITY";
		// 
		// lblEmail2FAStatus
		// 
		this->lblEmail2FAStatus->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblEmail2FAStatus->AutoSize = true;
		this->lblEmail2FAStatus->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblEmail2FAStatus->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblEmail2FAStatus->Location = System::Drawing::Point(1241, 579);
		this->lblEmail2FAStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblEmail2FAStatus->Name = L"lblEmail2FAStatus";
		this->lblEmail2FAStatus->Size = System::Drawing::Size(48, 28);
		this->lblEmail2FAStatus->TabIndex = 123;
		this->lblEmail2FAStatus->Text = L"Off";
		// 
		// toggleEmail2FA
		// 
		this->toggleEmail2FA->AutoCheck = false;
		this->toggleEmail2FA->AutoSize = true;
		this->toggleEmail2FA->Location = System::Drawing::Point(1142, 581);
		this->toggleEmail2FA->MinimumSize = System::Drawing::Size(60, 30);
		this->toggleEmail2FA->Name = L"toggleEmail2FA";
		this->toggleEmail2FA->Size = System::Drawing::Size(60, 30);
		this->toggleEmail2FA->TabIndex = 122;
		this->toggleEmail2FA->UseVisualStyleBackColor = true;
		this->toggleEmail2FA->Click += gcnew System::EventHandler(this, &FormClientMenu::toggleEmail2FA_Click);
		this->toggleEmail2FA->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::toggleEmail2FA_Paint);
		// 
		// lblEmail2FAdescription
		// 
		this->lblEmail2FAdescription->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblEmail2FAdescription->AutoSize = true;
		this->lblEmail2FAdescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblEmail2FAdescription->ForeColor = System::Drawing::Color::DarkGray;
		this->lblEmail2FAdescription->Location = System::Drawing::Point(22, 576);
		this->lblEmail2FAdescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblEmail2FAdescription->MaximumSize = System::Drawing::Size(1000, 0);
		this->lblEmail2FAdescription->Name = L"lblEmail2FAdescription";
		this->lblEmail2FAdescription->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->lblEmail2FAdescription->Size = System::Drawing::Size(1000, 42);
		this->lblEmail2FAdescription->TabIndex = 121;
		this->lblEmail2FAdescription->Text = resources->GetString(L"lblEmail2FAdescription.Text");
		// 
		// lblAvailableAuthMethods
		// 
		this->lblAvailableAuthMethods->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblAvailableAuthMethods->AutoSize = true;
		this->lblAvailableAuthMethods->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblAvailableAuthMethods->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblAvailableAuthMethods->Location = System::Drawing::Point(19, 456);
		this->lblAvailableAuthMethods->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblAvailableAuthMethods->Name = L"lblAvailableAuthMethods";
		this->lblAvailableAuthMethods->Size = System::Drawing::Size(375, 25);
		this->lblAvailableAuthMethods->TabIndex = 120;
		this->lblAvailableAuthMethods->Text = L"Available authentication methods:";
		// 
		// lbl2FAdescription
		// 
		this->lbl2FAdescription->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lbl2FAdescription->AutoSize = true;
		this->lbl2FAdescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lbl2FAdescription->ForeColor = System::Drawing::Color::DarkGray;
		this->lbl2FAdescription->Location = System::Drawing::Point(25, 391);
		this->lbl2FAdescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lbl2FAdescription->MaximumSize = System::Drawing::Size(1300, 0);
		this->lbl2FAdescription->Name = L"lbl2FAdescription";
		this->lbl2FAdescription->Size = System::Drawing::Size(1270, 42);
		this->lbl2FAdescription->TabIndex = 118;
		this->lbl2FAdescription->Text = L"Two-Factor Authentication (2FA) can be used to help protect your account from una"
			L"uthorized access by requiring you to enter a security code when you sign in.";
		// 
		// lbl2FAAuthentication
		// 
		this->lbl2FAAuthentication->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lbl2FAAuthentication->AutoSize = true;
		this->lbl2FAAuthentication->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lbl2FAAuthentication->ForeColor = System::Drawing::Color::Gainsboro;
		this->lbl2FAAuthentication->Location = System::Drawing::Point(16, 338);
		this->lbl2FAAuthentication->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lbl2FAAuthentication->Name = L"lbl2FAAuthentication";
		this->lbl2FAAuthentication->Size = System::Drawing::Size(442, 39);
		this->lbl2FAAuthentication->TabIndex = 119;
		this->lbl2FAAuthentication->Text = L"TWO-FACTOR AUTHENTICATION";
		// 
		// lblEmail2FA
		// 
		this->lblEmail2FA->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblEmail2FA->AutoSize = true;
		this->lblEmail2FA->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblEmail2FA->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblEmail2FA->Location = System::Drawing::Point(17, 519);
		this->lblEmail2FA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblEmail2FA->Name = L"lblEmail2FA";
		this->lblEmail2FA->Size = System::Drawing::Size(335, 35);
		this->lblEmail2FA->TabIndex = 118;
		this->lblEmail2FA->Text = L"EMAIL AUTHENTICATION";
		// 
		// panelCurrentPassword
		// 
		this->panelCurrentPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelCurrentPassword->BackColor = System::Drawing::Color::White;
		this->panelCurrentPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelCurrentPassword->Controls->Add(this->txtCurrentPassword);
		this->panelCurrentPassword->Controls->Add(this->lblCurrentPasswordPlaceholder);
		this->panelCurrentPassword->Location = System::Drawing::Point(29, 97);
		this->panelCurrentPassword->Name = L"panelCurrentPassword";
		this->panelCurrentPassword->Size = System::Drawing::Size(322, 45);
		this->panelCurrentPassword->TabIndex = 125;
		// 
		// txtCurrentPassword
		// 
		this->txtCurrentPassword->BackColor = System::Drawing::Color::Gainsboro;
		this->txtCurrentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtCurrentPassword->Culture = (gcnew System::Globalization::CultureInfo(L"en-US"));
		this->txtCurrentPassword->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtCurrentPassword->Location = System::Drawing::Point(4, 18);
		this->txtCurrentPassword->Name = L"txtCurrentPassword";
		this->txtCurrentPassword->Size = System::Drawing::Size(312, 23);
		this->txtCurrentPassword->TabIndex = 134;
		this->txtCurrentPassword->UseSystemPasswordChar = true;
		// 
		// lblCurrentPasswordPlaceholder
		// 
		this->lblCurrentPasswordPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblCurrentPasswordPlaceholder->AutoSize = true;
		this->lblCurrentPasswordPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblCurrentPasswordPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblCurrentPasswordPlaceholder->Location = System::Drawing::Point(0, 0);
		this->lblCurrentPasswordPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblCurrentPasswordPlaceholder->Name = L"lblCurrentPasswordPlaceholder";
		this->lblCurrentPasswordPlaceholder->Size = System::Drawing::Size(144, 17);
		this->lblCurrentPasswordPlaceholder->TabIndex = 66;
		this->lblCurrentPasswordPlaceholder->Text = L"CURRENT PASSWORD*";
		// 
		// panelNewPassword
		// 
		this->panelNewPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelNewPassword->BackColor = System::Drawing::Color::White;
		this->panelNewPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelNewPassword->Controls->Add(this->txtNewPassword);
		this->panelNewPassword->Controls->Add(this->lblNewPasswordPlaceholder);
		this->panelNewPassword->Location = System::Drawing::Point(481, 98);
		this->panelNewPassword->Name = L"panelNewPassword";
		this->panelNewPassword->Size = System::Drawing::Size(322, 45);
		this->panelNewPassword->TabIndex = 126;
		// 
		// txtNewPassword
		// 
		this->txtNewPassword->BackColor = System::Drawing::Color::Gainsboro;
		this->txtNewPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtNewPassword->Culture = (gcnew System::Globalization::CultureInfo(L"en-US"));
		this->txtNewPassword->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtNewPassword->Location = System::Drawing::Point(3, 18);
		this->txtNewPassword->Name = L"txtNewPassword";
		this->txtNewPassword->Size = System::Drawing::Size(314, 23);
		this->txtNewPassword->TabIndex = 135;
		this->txtNewPassword->UseSystemPasswordChar = true;
		// 
		// lblNewPasswordPlaceholder
		// 
		this->lblNewPasswordPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblNewPasswordPlaceholder->AutoSize = true;
		this->lblNewPasswordPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblNewPasswordPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblNewPasswordPlaceholder->Location = System::Drawing::Point(0, 0);
		this->lblNewPasswordPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblNewPasswordPlaceholder->Name = L"lblNewPasswordPlaceholder";
		this->lblNewPasswordPlaceholder->Size = System::Drawing::Size(112, 17);
		this->lblNewPasswordPlaceholder->TabIndex = 66;
		this->lblNewPasswordPlaceholder->Text = L"NEW PASSWORD*";
		// 
		// panelRetypePassword
		// 
		this->panelRetypePassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelRetypePassword->BackColor = System::Drawing::Color::White;
		this->panelRetypePassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelRetypePassword->Controls->Add(this->txtRetypePassword);
		this->panelRetypePassword->Controls->Add(this->lblRetypePasswordPlaceholder);
		this->panelRetypePassword->Location = System::Drawing::Point(481, 187);
		this->panelRetypePassword->Name = L"panelRetypePassword";
		this->panelRetypePassword->Size = System::Drawing::Size(322, 45);
		this->panelRetypePassword->TabIndex = 127;
		// 
		// txtRetypePassword
		// 
		this->txtRetypePassword->BackColor = System::Drawing::Color::Gainsboro;
		this->txtRetypePassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtRetypePassword->Culture = (gcnew System::Globalization::CultureInfo(L"en-US"));
		this->txtRetypePassword->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtRetypePassword->Location = System::Drawing::Point(3, 18);
		this->txtRetypePassword->Name = L"txtRetypePassword";
		this->txtRetypePassword->Size = System::Drawing::Size(314, 23);
		this->txtRetypePassword->TabIndex = 135;
		this->txtRetypePassword->UseSystemPasswordChar = true;
		// 
		// lblRetypePasswordPlaceholder
		// 
		this->lblRetypePasswordPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblRetypePasswordPlaceholder->AutoSize = true;
		this->lblRetypePasswordPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblRetypePasswordPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblRetypePasswordPlaceholder->Location = System::Drawing::Point(0, 0);
		this->lblRetypePasswordPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblRetypePasswordPlaceholder->Name = L"lblRetypePasswordPlaceholder";
		this->lblRetypePasswordPlaceholder->Size = System::Drawing::Size(136, 17);
		this->lblRetypePasswordPlaceholder->TabIndex = 66;
		this->lblRetypePasswordPlaceholder->Text = L"RETYPE PASSWORD*";
		// 
		// panelGeneralSettings
		// 
		this->panelGeneralSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
			static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
		this->panelGeneralSettings->Controls->Add(this->lblErrCity);
		this->panelGeneralSettings->Controls->Add(this->lblErrCountry);
		this->panelGeneralSettings->Controls->Add(this->lblErrLN);
		this->panelGeneralSettings->Controls->Add(this->lblErrFN);
		this->panelGeneralSettings->Controls->Add(this->label2);
		this->panelGeneralSettings->Controls->Add(this->label1);
		this->panelGeneralSettings->Controls->Add(this->btnDiscardGeneralSettings);
		this->panelGeneralSettings->Controls->Add(this->btnSaveGeneralSettings);
		this->panelGeneralSettings->Controls->Add(this->panelCity);
		this->panelGeneralSettings->Controls->Add(this->panelCountry);
		this->panelGeneralSettings->Controls->Add(this->label14);
		this->panelGeneralSettings->Controls->Add(this->panelLastName);
		this->panelGeneralSettings->Controls->Add(this->panelFirstName);
		this->panelGeneralSettings->Controls->Add(this->lblPDdescription);
		this->panelGeneralSettings->Controls->Add(this->lblPersonalDetails);
		this->panelGeneralSettings->Controls->Add(this->btnCancelEditEmail);
		this->panelGeneralSettings->Controls->Add(this->btnEditEmail);
		this->panelGeneralSettings->Controls->Add(this->panelEmailEdit);
		this->panelGeneralSettings->Controls->Add(this->btnSaveEditEmail);
		this->panelGeneralSettings->Controls->Add(this->btnCancelEditLogin);
		this->panelGeneralSettings->Controls->Add(this->btnEditLogin);
		this->panelGeneralSettings->Controls->Add(this->panelLoginEdit);
		this->panelGeneralSettings->Controls->Add(this->lblCurrentUserID);
		this->panelGeneralSettings->Controls->Add(this->lblID);
		this->panelGeneralSettings->Controls->Add(this->lblAccountInfo);
		this->panelGeneralSettings->Controls->Add(this->lblGSdescription);
		this->panelGeneralSettings->Controls->Add(this->lblGeneralSettings);
		this->panelGeneralSettings->Controls->Add(this->btnSaveEditLogin);
		this->panelGeneralSettings->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelGeneralSettings->Location = System::Drawing::Point(0, 0);
		this->panelGeneralSettings->Name = L"panelGeneralSettings";
		this->panelGeneralSettings->Size = System::Drawing::Size(1381, 1438);
		this->panelGeneralSettings->TabIndex = 0;
		// 
		// lblErrCity
		// 
		this->lblErrCity->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblErrCity->AutoSize = true;
		this->lblErrCity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblErrCity->ForeColor = System::Drawing::Color::Red;
		this->lblErrCity->Location = System::Drawing::Point(530, 519);
		this->lblErrCity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblErrCity->Name = L"lblErrCity";
		this->lblErrCity->Size = System::Drawing::Size(235, 21);
		this->lblErrCity->TabIndex = 134;
		this->lblErrCity->Text = L"This field can\'t be empty";
		this->lblErrCity->Visible = false;
		// 
		// lblErrCountry
		// 
		this->lblErrCountry->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblErrCountry->AutoSize = true;
		this->lblErrCountry->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblErrCountry->ForeColor = System::Drawing::Color::Red;
		this->lblErrCountry->Location = System::Drawing::Point(87, 519);
		this->lblErrCountry->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblErrCountry->Name = L"lblErrCountry";
		this->lblErrCountry->Size = System::Drawing::Size(235, 21);
		this->lblErrCountry->TabIndex = 133;
		this->lblErrCountry->Text = L"This field can\'t be empty";
		this->lblErrCountry->Visible = false;
		// 
		// lblErrLN
		// 
		this->lblErrLN->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblErrLN->AutoSize = true;
		this->lblErrLN->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblErrLN->ForeColor = System::Drawing::Color::Red;
		this->lblErrLN->Location = System::Drawing::Point(530, 394);
		this->lblErrLN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblErrLN->Name = L"lblErrLN";
		this->lblErrLN->Size = System::Drawing::Size(235, 21);
		this->lblErrLN->TabIndex = 132;
		this->lblErrLN->Text = L"This field can\'t be empty";
		this->lblErrLN->Visible = false;
		// 
		// lblErrFN
		// 
		this->lblErrFN->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblErrFN->AutoSize = true;
		this->lblErrFN->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblErrFN->ForeColor = System::Drawing::Color::Red;
		this->lblErrFN->Location = System::Drawing::Point(70, 392);
		this->lblErrFN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblErrFN->Name = L"lblErrFN";
		this->lblErrFN->Size = System::Drawing::Size(235, 21);
		this->lblErrFN->TabIndex = 131;
		this->lblErrFN->Text = L"This field can\'t be empty";
		this->lblErrFN->Visible = false;
		// 
		// label2
		// 
		this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label2->ForeColor = System::Drawing::Color::DarkGray;
		this->label2->Location = System::Drawing::Point(20, 103);
		this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(829, 21);
		this->label2->TabIndex = 130;
		this->label2->Text = L"Login and E-mail address are updated in the database automatically when you accep"
			L"t the edit";
		// 
		// label1
		// 
		this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label1->ForeColor = System::Drawing::Color::Gainsboro;
		this->label1->Location = System::Drawing::Point(16, 210);
		this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(1354, 25);
		this->label1->TabIndex = 129;
		this->label1->Text = L"_________________________________________________________________________________"
			L"_________________________________________";
		// 
		// btnDiscardGeneralSettings
		// 
		this->btnDiscardGeneralSettings->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnDiscardGeneralSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)),
			static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
		this->btnDiscardGeneralSettings->FlatAppearance->BorderSize = 2;
		this->btnDiscardGeneralSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnDiscardGeneralSettings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->btnDiscardGeneralSettings->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnDiscardGeneralSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDiscardGeneralSettings.Image")));
		this->btnDiscardGeneralSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnDiscardGeneralSettings->Location = System::Drawing::Point(31, 573);
		this->btnDiscardGeneralSettings->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnDiscardGeneralSettings->Name = L"btnDiscardGeneralSettings";
		this->btnDiscardGeneralSettings->Size = System::Drawing::Size(235, 55);
		this->btnDiscardGeneralSettings->TabIndex = 117;
		this->btnDiscardGeneralSettings->Text = L"DISCARD CHANGES";
		this->btnDiscardGeneralSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnDiscardGeneralSettings->UseVisualStyleBackColor = false;
		this->btnDiscardGeneralSettings->Click += gcnew System::EventHandler(this, &FormClientMenu::btnDiscardGeneralSettings_Click);
		// 
		// btnSaveGeneralSettings
		// 
		this->btnSaveGeneralSettings->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnSaveGeneralSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->btnSaveGeneralSettings->FlatAppearance->BorderSize = 2;
		this->btnSaveGeneralSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSaveGeneralSettings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->btnSaveGeneralSettings->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnSaveGeneralSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveGeneralSettings.Image")));
		this->btnSaveGeneralSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->btnSaveGeneralSettings->Location = System::Drawing::Point(293, 573);
		this->btnSaveGeneralSettings->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnSaveGeneralSettings->Name = L"btnSaveGeneralSettings";
		this->btnSaveGeneralSettings->Size = System::Drawing::Size(235, 55);
		this->btnSaveGeneralSettings->TabIndex = 116;
		this->btnSaveGeneralSettings->Text = L"SAVE CHANGES";
		this->btnSaveGeneralSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnSaveGeneralSettings->UseVisualStyleBackColor = false;
		this->btnSaveGeneralSettings->Click += gcnew System::EventHandler(this, &FormClientMenu::btnSavePersonal_Click);
		// 
		// panelCity
		// 
		this->panelCity->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelCity->BackColor = System::Drawing::Color::White;
		this->panelCity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelCity->Controls->Add(this->txtCity);
		this->panelCity->Controls->Add(this->lblCityPlaceholder);
		this->panelCity->Location = System::Drawing::Point(458, 468);
		this->panelCity->Name = L"panelCity";
		this->panelCity->Size = System::Drawing::Size(361, 47);
		this->panelCity->TabIndex = 97;
		// 
		// txtCity
		// 
		this->txtCity->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtCity->BackColor = System::Drawing::Color::White;
		this->txtCity->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtCity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtCity->ForeColor = System::Drawing::Color::Black;
		this->txtCity->Location = System::Drawing::Point(11, 19);
		this->txtCity->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtCity->Multiline = true;
		this->txtCity->Name = L"txtCity";
		this->txtCity->Size = System::Drawing::Size(348, 27);
		this->txtCity->TabIndex = 78;
		this->txtCity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormClientMenu::txtProfile_KeyPress);
		// 
		// lblCityPlaceholder
		// 
		this->lblCityPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblCityPlaceholder->AutoSize = true;
		this->lblCityPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblCityPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblCityPlaceholder->Location = System::Drawing::Point(9, -1);
		this->lblCityPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblCityPlaceholder->Name = L"lblCityPlaceholder";
		this->lblCityPlaceholder->Size = System::Drawing::Size(48, 17);
		this->lblCityPlaceholder->TabIndex = 64;
		this->lblCityPlaceholder->Text = L"CITY*";
		// 
		// panelCountry
		// 
		this->panelCountry->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelCountry->BackColor = System::Drawing::Color::White;
		this->panelCountry->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelCountry->Controls->Add(this->txtCountry);
		this->panelCountry->Controls->Add(this->lblCountryPlaceholder);
		this->panelCountry->Location = System::Drawing::Point(30, 468);
		this->panelCountry->Name = L"panelCountry";
		this->panelCountry->Size = System::Drawing::Size(361, 47);
		this->panelCountry->TabIndex = 96;
		// 
		// txtCountry
		// 
		this->txtCountry->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtCountry->BackColor = System::Drawing::Color::White;
		this->txtCountry->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtCountry->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtCountry->ForeColor = System::Drawing::Color::Black;
		this->txtCountry->Location = System::Drawing::Point(11, 19);
		this->txtCountry->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtCountry->Multiline = true;
		this->txtCountry->Name = L"txtCountry";
		this->txtCountry->Size = System::Drawing::Size(348, 27);
		this->txtCountry->TabIndex = 77;
		this->txtCountry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormClientMenu::txtProfile_KeyPress);
		// 
		// lblCountryPlaceholder
		// 
		this->lblCountryPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblCountryPlaceholder->AutoSize = true;
		this->lblCountryPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblCountryPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblCountryPlaceholder->Location = System::Drawing::Point(9, -1);
		this->lblCountryPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblCountryPlaceholder->Name = L"lblCountryPlaceholder";
		this->lblCountryPlaceholder->Size = System::Drawing::Size(72, 17);
		this->lblCountryPlaceholder->TabIndex = 64;
		this->lblCountryPlaceholder->Text = L"COUNTRY*";
		// 
		// label14
		// 
		this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->label14->AutoSize = true;
		this->label14->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label14->ForeColor = System::Drawing::Color::Gainsboro;
		this->label14->Location = System::Drawing::Point(23, 423);
		this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(255, 39);
		this->label14->TabIndex = 109;
		this->label14->Text = L"COUNTRY / CITY";
		// 
		// panelLastName
		// 
		this->panelLastName->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelLastName->BackColor = System::Drawing::Color::White;
		this->panelLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelLastName->Controls->Add(this->lblLastNamePlaceholder);
		this->panelLastName->Controls->Add(this->txtLastName);
		this->panelLastName->Location = System::Drawing::Point(458, 346);
		this->panelLastName->Name = L"panelLastName";
		this->panelLastName->Size = System::Drawing::Size(362, 45);
		this->panelLastName->TabIndex = 107;
		// 
		// lblLastNamePlaceholder
		// 
		this->lblLastNamePlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblLastNamePlaceholder->AutoSize = true;
		this->lblLastNamePlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblLastNamePlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblLastNamePlaceholder->Location = System::Drawing::Point(8, -1);
		this->lblLastNamePlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblLastNamePlaceholder->Name = L"lblLastNamePlaceholder";
		this->lblLastNamePlaceholder->Size = System::Drawing::Size(88, 17);
		this->lblLastNamePlaceholder->TabIndex = 66;
		this->lblLastNamePlaceholder->Text = L"LAST NAME*";
		// 
		// txtLastName
		// 
		this->txtLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtLastName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtLastName->Location = System::Drawing::Point(11, 17);
		this->txtLastName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtLastName->Multiline = true;
		this->txtLastName->Name = L"txtLastName";
		this->txtLastName->Size = System::Drawing::Size(350, 28);
		this->txtLastName->TabIndex = 76;
		this->txtLastName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormClientMenu::txtProfile_KeyPress);
		// 
		// panelFirstName
		// 
		this->panelFirstName->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelFirstName->BackColor = System::Drawing::Color::White;
		this->panelFirstName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelFirstName->Controls->Add(this->lblFirstNamePlaceholder);
		this->panelFirstName->Controls->Add(this->txtFirstName);
		this->panelFirstName->Location = System::Drawing::Point(32, 346);
		this->panelFirstName->Name = L"panelFirstName";
		this->panelFirstName->Size = System::Drawing::Size(359, 45);
		this->panelFirstName->TabIndex = 106;
		// 
		// lblFirstNamePlaceholder
		// 
		this->lblFirstNamePlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblFirstNamePlaceholder->AutoSize = true;
		this->lblFirstNamePlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblFirstNamePlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblFirstNamePlaceholder->Location = System::Drawing::Point(7, -1);
		this->lblFirstNamePlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblFirstNamePlaceholder->Name = L"lblFirstNamePlaceholder";
		this->lblFirstNamePlaceholder->Size = System::Drawing::Size(96, 17);
		this->lblFirstNamePlaceholder->TabIndex = 66;
		this->lblFirstNamePlaceholder->Text = L"FIRST NAME*";
		// 
		// txtFirstName
		// 
		this->txtFirstName->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtFirstName->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtFirstName->Location = System::Drawing::Point(9, 17);
		this->txtFirstName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtFirstName->Multiline = true;
		this->txtFirstName->Name = L"txtFirstName";
		this->txtFirstName->Size = System::Drawing::Size(348, 27);
		this->txtFirstName->TabIndex = 76;
		this->txtFirstName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormClientMenu::txtProfile_KeyPress);
		// 
		// lblPDdescription
		// 
		this->lblPDdescription->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblPDdescription->AutoSize = true;
		this->lblPDdescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblPDdescription->ForeColor = System::Drawing::Color::DarkGray;
		this->lblPDdescription->Location = System::Drawing::Point(22, 306);
		this->lblPDdescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblPDdescription->Name = L"lblPDdescription";
		this->lblPDdescription->Size = System::Drawing::Size(883, 21);
		this->lblPDdescription->TabIndex = 105;
		this->lblPDdescription->Text = L"Manage the account details you\'ve shared with OV STORE including your name, conta"
			L"ct info and more";
		// 
		// lblPersonalDetails
		// 
		this->lblPersonalDetails->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblPersonalDetails->AutoSize = true;
		this->lblPersonalDetails->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblPersonalDetails->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblPersonalDetails->Location = System::Drawing::Point(17, 267);
		this->lblPersonalDetails->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblPersonalDetails->Name = L"lblPersonalDetails";
		this->lblPersonalDetails->Size = System::Drawing::Size(289, 39);
		this->lblPersonalDetails->TabIndex = 104;
		this->lblPersonalDetails->Text = L"PERSONAL DETAILS";
		// 
		// btnCancelEditEmail
		// 
		this->btnCancelEditEmail->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnCancelEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCancelEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnCancelEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnCancelEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEditEmail.Image")));
		this->btnCancelEditEmail->Location = System::Drawing::Point(1185, 158);
		this->btnCancelEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnCancelEditEmail->Name = L"btnCancelEditEmail";
		this->btnCancelEditEmail->Size = System::Drawing::Size(49, 47);
		this->btnCancelEditEmail->TabIndex = 102;
		this->btnCancelEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnCancelEditEmail->UseVisualStyleBackColor = true;
		this->btnCancelEditEmail->Visible = false;
		this->btnCancelEditEmail->Click += gcnew System::EventHandler(this, &FormClientMenu::btnCancelEditEmail_Click);
		// 
		// btnEditEmail
		// 
		this->btnEditEmail->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditEmail.Image")));
		this->btnEditEmail->Location = System::Drawing::Point(1129, 158);
		this->btnEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnEditEmail->Name = L"btnEditEmail";
		this->btnEditEmail->Size = System::Drawing::Size(49, 47);
		this->btnEditEmail->TabIndex = 101;
		this->btnEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnEditEmail->UseVisualStyleBackColor = true;
		this->btnEditEmail->Click += gcnew System::EventHandler(this, &FormClientMenu::btnEditEmail_Click);
		// 
		// panelEmailEdit
		// 
		this->panelEmailEdit->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelEmailEdit->BackColor = System::Drawing::Color::Silver;
		this->panelEmailEdit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelEmailEdit->Controls->Add(this->txtCurrentUserEmail);
		this->panelEmailEdit->Controls->Add(this->lblEmailAddressPlaceholder);
		this->panelEmailEdit->Location = System::Drawing::Point(761, 158);
		this->panelEmailEdit->Name = L"panelEmailEdit";
		this->panelEmailEdit->Size = System::Drawing::Size(361, 47);
		this->panelEmailEdit->TabIndex = 100;
		// 
		// txtCurrentUserEmail
		// 
		this->txtCurrentUserEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtCurrentUserEmail->BackColor = System::Drawing::Color::Silver;
		this->txtCurrentUserEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtCurrentUserEmail->Enabled = false;
		this->txtCurrentUserEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtCurrentUserEmail->ForeColor = System::Drawing::Color::Black;
		this->txtCurrentUserEmail->Location = System::Drawing::Point(12, 19);
		this->txtCurrentUserEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtCurrentUserEmail->Multiline = true;
		this->txtCurrentUserEmail->Name = L"txtCurrentUserEmail";
		this->txtCurrentUserEmail->Size = System::Drawing::Size(347, 27);
		this->txtCurrentUserEmail->TabIndex = 78;
		// 
		// lblEmailAddressPlaceholder
		// 
		this->lblEmailAddressPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblEmailAddressPlaceholder->AutoSize = true;
		this->lblEmailAddressPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblEmailAddressPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblEmailAddressPlaceholder->Location = System::Drawing::Point(9, -1);
		this->lblEmailAddressPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblEmailAddressPlaceholder->Name = L"lblEmailAddressPlaceholder";
		this->lblEmailAddressPlaceholder->Size = System::Drawing::Size(112, 17);
		this->lblEmailAddressPlaceholder->TabIndex = 64;
		this->lblEmailAddressPlaceholder->Text = L"EMAIL ADDRESS";
		// 
		// btnSaveEditEmail
		// 
		this->btnSaveEditEmail->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnSaveEditEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSaveEditEmail->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnSaveEditEmail->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnSaveEditEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveEditEmail.Image")));
		this->btnSaveEditEmail->Location = System::Drawing::Point(1129, 158);
		this->btnSaveEditEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnSaveEditEmail->Name = L"btnSaveEditEmail";
		this->btnSaveEditEmail->Size = System::Drawing::Size(49, 47);
		this->btnSaveEditEmail->TabIndex = 103;
		this->btnSaveEditEmail->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnSaveEditEmail->UseVisualStyleBackColor = true;
		this->btnSaveEditEmail->Visible = false;
		this->btnSaveEditEmail->Click += gcnew System::EventHandler(this, &FormClientMenu::btnSaveEditEmail_Click);
		// 
		// btnCancelEditLogin
		// 
		this->btnCancelEditLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnCancelEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCancelEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnCancelEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnCancelEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEditLogin.Image")));
		this->btnCancelEditLogin->Location = System::Drawing::Point(456, 158);
		this->btnCancelEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnCancelEditLogin->Name = L"btnCancelEditLogin";
		this->btnCancelEditLogin->Size = System::Drawing::Size(49, 47);
		this->btnCancelEditLogin->TabIndex = 98;
		this->btnCancelEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnCancelEditLogin->UseVisualStyleBackColor = true;
		this->btnCancelEditLogin->Visible = false;
		this->btnCancelEditLogin->Click += gcnew System::EventHandler(this, &FormClientMenu::btnCancelEditLogin_Click);
		// 
		// btnEditLogin
		// 
		this->btnEditLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditLogin.Image")));
		this->btnEditLogin->Location = System::Drawing::Point(399, 158);
		this->btnEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnEditLogin->Name = L"btnEditLogin";
		this->btnEditLogin->Size = System::Drawing::Size(49, 47);
		this->btnEditLogin->TabIndex = 95;
		this->btnEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnEditLogin->UseVisualStyleBackColor = true;
		this->btnEditLogin->Click += gcnew System::EventHandler(this, &FormClientMenu::btnEditLogin_Click);
		// 
		// panelLoginEdit
		// 
		this->panelLoginEdit->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->panelLoginEdit->BackColor = System::Drawing::Color::Silver;
		this->panelLoginEdit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panelLoginEdit->Controls->Add(this->txtCurrentUserLogin);
		this->panelLoginEdit->Controls->Add(this->lblLoginPlaceholder);
		this->panelLoginEdit->Location = System::Drawing::Point(31, 158);
		this->panelLoginEdit->Name = L"panelLoginEdit";
		this->panelLoginEdit->Size = System::Drawing::Size(361, 47);
		this->panelLoginEdit->TabIndex = 94;
		// 
		// txtCurrentUserLogin
		// 
		this->txtCurrentUserLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->txtCurrentUserLogin->BackColor = System::Drawing::Color::Silver;
		this->txtCurrentUserLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->txtCurrentUserLogin->Enabled = false;
		this->txtCurrentUserLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->txtCurrentUserLogin->ForeColor = System::Drawing::Color::Black;
		this->txtCurrentUserLogin->Location = System::Drawing::Point(12, 19);
		this->txtCurrentUserLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->txtCurrentUserLogin->Multiline = true;
		this->txtCurrentUserLogin->Name = L"txtCurrentUserLogin";
		this->txtCurrentUserLogin->Size = System::Drawing::Size(347, 25);
		this->txtCurrentUserLogin->TabIndex = 77;
		// 
		// lblLoginPlaceholder
		// 
		this->lblLoginPlaceholder->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblLoginPlaceholder->AutoSize = true;
		this->lblLoginPlaceholder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->lblLoginPlaceholder->ForeColor = System::Drawing::Color::DimGray;
		this->lblLoginPlaceholder->Location = System::Drawing::Point(9, -1);
		this->lblLoginPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblLoginPlaceholder->Name = L"lblLoginPlaceholder";
		this->lblLoginPlaceholder->Size = System::Drawing::Size(48, 17);
		this->lblLoginPlaceholder->TabIndex = 64;
		this->lblLoginPlaceholder->Text = L"LOGIN";
		// 
		// lblCurrentUserID
		// 
		this->lblCurrentUserID->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblCurrentUserID->AutoSize = true;
		this->lblCurrentUserID->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblCurrentUserID->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblCurrentUserID->Location = System::Drawing::Point(-56, 140);
		this->lblCurrentUserID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblCurrentUserID->Name = L"lblCurrentUserID";
		this->lblCurrentUserID->Size = System::Drawing::Size(19, 21);
		this->lblCurrentUserID->TabIndex = 93;
		this->lblCurrentUserID->Text = L"0";
		// 
		// lblID
		// 
		this->lblID->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblID->AutoSize = true;
		this->lblID->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblID->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblID->Location = System::Drawing::Point(-89, 140);
		this->lblID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblID->Name = L"lblID";
		this->lblID->Size = System::Drawing::Size(37, 21);
		this->lblID->TabIndex = 92;
		this->lblID->Text = L"ID:";
		// 
		// lblAccountInfo
		// 
		this->lblAccountInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblAccountInfo->AutoSize = true;
		this->lblAccountInfo->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblAccountInfo->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblAccountInfo->Location = System::Drawing::Point(17, 65);
		this->lblAccountInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblAccountInfo->Name = L"lblAccountInfo";
		this->lblAccountInfo->Size = System::Drawing::Size(221, 39);
		this->lblAccountInfo->TabIndex = 91;
		this->lblAccountInfo->Text = L"ACCOUNT INFO";
		// 
		// lblGSdescription
		// 
		this->lblGSdescription->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblGSdescription->AutoSize = true;
		this->lblGSdescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblGSdescription->ForeColor = System::Drawing::Color::DarkGray;
		this->lblGSdescription->Location = System::Drawing::Point(20, 42);
		this->lblGSdescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblGSdescription->Name = L"lblGSdescription";
		this->lblGSdescription->Size = System::Drawing::Size(883, 21);
		this->lblGSdescription->TabIndex = 90;
		this->lblGSdescription->Text = L"Manage the account details you\'ve shared with OV STORE including your name, conta"
			L"ct info and more";
		// 
		// lblGeneralSettings
		// 
		this->lblGeneralSettings->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblGeneralSettings->AutoSize = true;
		this->lblGeneralSettings->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblGeneralSettings->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblGeneralSettings->Location = System::Drawing::Point(17, 3);
		this->lblGeneralSettings->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblGeneralSettings->Name = L"lblGeneralSettings";
		this->lblGeneralSettings->Size = System::Drawing::Size(289, 39);
		this->lblGeneralSettings->TabIndex = 89;
		this->lblGeneralSettings->Text = L"GENERAL SETTINGS";
		// 
		// btnSaveEditLogin
		// 
		this->btnSaveEditLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->btnSaveEditLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSaveEditLogin->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnSaveEditLogin->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnSaveEditLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveEditLogin.Image")));
		this->btnSaveEditLogin->Location = System::Drawing::Point(399, 158);
		this->btnSaveEditLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->btnSaveEditLogin->Name = L"btnSaveEditLogin";
		this->btnSaveEditLogin->Size = System::Drawing::Size(49, 47);
		this->btnSaveEditLogin->TabIndex = 99;
		this->btnSaveEditLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
		this->btnSaveEditLogin->UseVisualStyleBackColor = true;
		this->btnSaveEditLogin->Visible = false;
		this->btnSaveEditLogin->Click += gcnew System::EventHandler(this, &FormClientMenu::btnSaveEditLogin_Click);
		// 
		// PanelCart
		// 
		this->PanelCart->Controls->Add(this->PanelCartDesk);
		this->PanelCart->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PanelCart->Location = System::Drawing::Point(0, 0);
		this->PanelCart->Name = L"PanelCart";
		this->PanelCart->Size = System::Drawing::Size(1398, 812);
		this->PanelCart->TabIndex = 50;
		this->PanelCart->Visible = false;
		this->PanelCart->VisibleChanged += gcnew System::EventHandler(this, &FormClientMenu::PanelCart_VisibleChanged);
		// 
		// PanelCartDesk
		// 
		this->PanelCartDesk->AutoScroll = true;
		this->PanelCartDesk->Controls->Add(this->flowCart);
		this->PanelCartDesk->Controls->Add(this->PanelButtons);
		this->PanelCartDesk->Controls->Add(this->pictureBigCheck);
		this->PanelCartDesk->Controls->Add(this->pictureBigCart);
		this->PanelCartDesk->Controls->Add(this->lblNeverFixIt);
		this->PanelCartDesk->Controls->Add(this->lblCartIsEmpty);
		this->PanelCartDesk->Controls->Add(this->lblOrderCreated);
		this->PanelCartDesk->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PanelCartDesk->Location = System::Drawing::Point(0, 0);
		this->PanelCartDesk->Name = L"PanelCartDesk";
		this->PanelCartDesk->Size = System::Drawing::Size(1398, 812);
		this->PanelCartDesk->TabIndex = 14;
		// 
		// flowCart
		// 
		this->flowCart->AutoScroll = true;
		this->flowCart->Dock = System::Windows::Forms::DockStyle::Top;
		this->flowCart->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		this->flowCart->Location = System::Drawing::Point(0, 0);
		this->flowCart->Name = L"flowCart";
		this->flowCart->Padding = System::Windows::Forms::Padding(4);
		this->flowCart->Size = System::Drawing::Size(1398, 696);
		this->flowCart->TabIndex = 14;
		this->flowCart->WrapContents = false;
		// 
		// PanelButtons
		// 
		this->PanelButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->PanelButtons->Controls->Add(this->PanelCheckout);
		this->PanelButtons->Controls->Add(this->btnContinueShopping);
		this->PanelButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->PanelButtons->Location = System::Drawing::Point(0, 697);
		this->PanelButtons->Name = L"PanelButtons";
		this->PanelButtons->Size = System::Drawing::Size(1398, 115);
		this->PanelButtons->TabIndex = 13;
		// 
		// PanelCheckout
		// 
		this->PanelCheckout->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->PanelCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
			static_cast<System::Int32>(static_cast<System::Byte>(182)));
		this->PanelCheckout->Controls->Add(this->lblTotalPrice);
		this->PanelCheckout->Controls->Add(this->btnCheckout);
		this->PanelCheckout->Location = System::Drawing::Point(1105, 6);
		this->PanelCheckout->Name = L"PanelCheckout";
		this->PanelCheckout->Size = System::Drawing::Size(277, 100);
		this->PanelCheckout->TabIndex = 12;
		// 
		// lblTotalPrice
		// 
		this->lblTotalPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->lblTotalPrice->AutoSize = true;
		this->lblTotalPrice->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblTotalPrice->ForeColor = System::Drawing::Color::Black;
		this->lblTotalPrice->Location = System::Drawing::Point(3, 31);
		this->lblTotalPrice->Name = L"lblTotalPrice";
		this->lblTotalPrice->Size = System::Drawing::Size(34, 39);
		this->lblTotalPrice->TabIndex = 8;
		this->lblTotalPrice->Text = L"0";
		this->lblTotalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// btnCheckout
		// 
		this->btnCheckout->Anchor = System::Windows::Forms::AnchorStyles::Right;
		this->btnCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
			static_cast<System::Int32>(static_cast<System::Byte>(70)));
		this->btnCheckout->FlatAppearance->BorderSize = 0;
		this->btnCheckout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCheckout->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnCheckout->ForeColor = System::Drawing::Color::Gainsboro;
		this->btnCheckout->Location = System::Drawing::Point(148, 29);
		this->btnCheckout->Name = L"btnCheckout";
		this->btnCheckout->Size = System::Drawing::Size(119, 45);
		this->btnCheckout->TabIndex = 1;
		this->btnCheckout->Text = L"Checkout";
		this->btnCheckout->UseVisualStyleBackColor = false;
		this->btnCheckout->Click += gcnew System::EventHandler(this, &FormClientMenu::btnCheckout_Click);
		// 
		// btnContinueShopping
		// 
		this->btnContinueShopping->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->btnContinueShopping->BackColor = System::Drawing::Color::WhiteSmoke;
		this->btnContinueShopping->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnContinueShopping->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->btnContinueShopping->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
			static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
		this->btnContinueShopping->Location = System::Drawing::Point(28, 61);
		this->btnContinueShopping->Name = L"btnContinueShopping";
		this->btnContinueShopping->Size = System::Drawing::Size(220, 45);
		this->btnContinueShopping->TabIndex = 13;
		this->btnContinueShopping->Text = L"Continue shopping";
		this->btnContinueShopping->UseVisualStyleBackColor = false;
		this->btnContinueShopping->Click += gcnew System::EventHandler(this, &FormClientMenu::btnContinueShopping_Click);
		// 
		// pictureBigCheck
		// 
		this->pictureBigCheck->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBigCheck.Image")));
		this->pictureBigCheck->Location = System::Drawing::Point(536, 123);
		this->pictureBigCheck->Name = L"pictureBigCheck";
		this->pictureBigCheck->Size = System::Drawing::Size(333, 335);
		this->pictureBigCheck->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureBigCheck->TabIndex = 15;
		this->pictureBigCheck->TabStop = false;
		this->pictureBigCheck->Visible = false;
		// 
		// pictureBigCart
		// 
		this->pictureBigCart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBigCart.Image")));
		this->pictureBigCart->Location = System::Drawing::Point(345, 95);
		this->pictureBigCart->Name = L"pictureBigCart";
		this->pictureBigCart->Size = System::Drawing::Size(689, 406);
		this->pictureBigCart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureBigCart->TabIndex = 0;
		this->pictureBigCart->TabStop = false;
		this->pictureBigCart->Visible = false;
		// 
		// lblNeverFixIt
		// 
		this->lblNeverFixIt->AutoSize = true;
		this->lblNeverFixIt->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblNeverFixIt->Location = System::Drawing::Point(449, 601);
		this->lblNeverFixIt->Name = L"lblNeverFixIt";
		this->lblNeverFixIt->Size = System::Drawing::Size(518, 32);
		this->lblNeverFixIt->TabIndex = 2;
		this->lblNeverFixIt->Text = L"But it\'s never too late to fix it :)";
		this->lblNeverFixIt->Visible = false;
		// 
		// lblCartIsEmpty
		// 
		this->lblCartIsEmpty->AutoSize = true;
		this->lblCartIsEmpty->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblCartIsEmpty->Location = System::Drawing::Point(510, 504);
		this->lblCartIsEmpty->Name = L"lblCartIsEmpty";
		this->lblCartIsEmpty->Size = System::Drawing::Size(391, 63);
		this->lblCartIsEmpty->TabIndex = 1;
		this->lblCartIsEmpty->Text = L"Cart is empty";
		this->lblCartIsEmpty->Visible = false;
		// 
		// lblOrderCreated
		// 
		this->lblOrderCreated->AutoSize = true;
		this->lblOrderCreated->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblOrderCreated->Location = System::Drawing::Point(209, 504);
		this->lblOrderCreated->Name = L"lblOrderCreated";
		this->lblOrderCreated->Size = System::Drawing::Size(1007, 126);
		this->lblOrderCreated->TabIndex = 16;
		this->lblOrderCreated->Text = L"Order has been successfuly created.\r\nYou have 12 hours to pay!";
		this->lblOrderCreated->Visible = false;
		// 
		// flowShop
		// 
		this->flowShop->AutoScroll = true;
		this->flowShop->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowShop->Location = System::Drawing::Point(0, 0);
		this->flowShop->Name = L"flowShop";
		this->flowShop->Padding = System::Windows::Forms::Padding(4);
		this->flowShop->Size = System::Drawing::Size(1398, 812);
		this->flowShop->TabIndex = 8;
		this->flowShop->Visible = false;
		// 
		// flowSearchingResults
		// 
		this->flowSearchingResults->AutoScroll = true;
		this->flowSearchingResults->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowSearchingResults->Location = System::Drawing::Point(0, 0);
		this->flowSearchingResults->Name = L"flowSearchingResults";
		this->flowSearchingResults->Padding = System::Windows::Forms::Padding(4);
		this->flowSearchingResults->Size = System::Drawing::Size(1398, 812);
		this->flowSearchingResults->TabIndex = 0;
		this->flowSearchingResults->Visible = false;
		// 
		// panelControls
		// 
		this->panelControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
			static_cast<System::Int32>(static_cast<System::Byte>(36)));
		this->panelControls->Controls->Add(this->btnMinimize);
		this->panelControls->Controls->Add(this->btnExit);
		this->panelControls->Controls->Add(this->lblUserNameTitle);
		this->panelControls->Dock = System::Windows::Forms::DockStyle::Top;
		this->panelControls->Location = System::Drawing::Point(0, 0);
		this->panelControls->Name = L"panelControls";
		this->panelControls->Size = System::Drawing::Size(1618, 31);
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
		this->btnMinimize->Location = System::Drawing::Point(1556, 6);
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
		this->btnExit->Location = System::Drawing::Point(1585, 0);
		this->btnExit->Name = L"btnExit";
		this->btnExit->Size = System::Drawing::Size(32, 28);
		this->btnExit->TabIndex = 6;
		this->btnExit->UseVisualStyleBackColor = true;
		this->btnExit->Click += gcnew System::EventHandler(this, &FormClientMenu::btnExit_Click);
		// 
		// lblUserNameTitle
		// 
		this->lblUserNameTitle->AutoSize = true;
		this->lblUserNameTitle->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->lblUserNameTitle->ForeColor = System::Drawing::Color::Gainsboro;
		this->lblUserNameTitle->Location = System::Drawing::Point(7, 4);
		this->lblUserNameTitle->Name = L"lblUserNameTitle";
		this->lblUserNameTitle->Size = System::Drawing::Size(91, 21);
		this->lblUserNameTitle->TabIndex = 14;
		this->lblUserNameTitle->Text = L"Session: ";
		// 
		// imageList2
		// 
		this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
		this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
		this->imageList2->Images->SetKeyName(0, L"shop_cart_empty.png");
		this->imageList2->Images->SetKeyName(1, L"shop_cart_has.png");
		// 
		// imageList3
		// 
		this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList3.ImageStream")));
		this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
		this->imageList3->Images->SetKeyName(0, L"trash_blue.png");
		this->imageList3->Images->SetKeyName(1, L"trash_red.png");
		// 
		// imageList4
		// 
		this->imageList4->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList4.ImageStream")));
		this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
		this->imageList4->Images->SetKeyName(0, L"minus.png");
		this->imageList4->Images->SetKeyName(1, L"plus.png");
		// 
		// imageList5
		// 
		this->imageList5->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList5.ImageStream")));
		this->imageList5->TransparentColor = System::Drawing::Color::Transparent;
		this->imageList5->Images->SetKeyName(0, L"ellipsis.png");
		// 
		// FormClientMenu
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
			static_cast<System::Int32>(static_cast<System::Byte>(55)));
		this->ClientSize = System::Drawing::Size(1618, 898);
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
		this->Load += gcnew System::EventHandler(this, &FormClientMenu::FormClientMenu_Load);
		this->PanelMenu->ResumeLayout(false);
		this->PanelLogo->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgHome))->EndInit();
		this->PanelTitleBar->ResumeLayout(false);
		this->PanelSearchControls->ResumeLayout(false);
		this->PanelSearchControls->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFurfur))->EndInit();
		this->minipanelCart->ResumeLayout(false);
		this->minipanelCart->PerformLayout();
		this->PanelDesktop->ResumeLayout(false);
		this->PanelProfile->ResumeLayout(false);
		this->panelPasswordSecurity->ResumeLayout(false);
		this->panelPasswordSecurity->PerformLayout();
		this->panelCurrentPassword->ResumeLayout(false);
		this->panelCurrentPassword->PerformLayout();
		this->panelNewPassword->ResumeLayout(false);
		this->panelNewPassword->PerformLayout();
		this->panelRetypePassword->ResumeLayout(false);
		this->panelRetypePassword->PerformLayout();
		this->panelGeneralSettings->ResumeLayout(false);
		this->panelGeneralSettings->PerformLayout();
		this->panelCity->ResumeLayout(false);
		this->panelCity->PerformLayout();
		this->panelCountry->ResumeLayout(false);
		this->panelCountry->PerformLayout();
		this->panelLastName->ResumeLayout(false);
		this->panelLastName->PerformLayout();
		this->panelFirstName->ResumeLayout(false);
		this->panelFirstName->PerformLayout();
		this->panelEmailEdit->ResumeLayout(false);
		this->panelEmailEdit->PerformLayout();
		this->panelLoginEdit->ResumeLayout(false);
		this->panelLoginEdit->PerformLayout();
		this->PanelCart->ResumeLayout(false);
		this->PanelCartDesk->ResumeLayout(false);
		this->PanelCartDesk->PerformLayout();
		this->PanelButtons->ResumeLayout(false);
		this->PanelCheckout->ResumeLayout(false);
		this->PanelCheckout->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBigCheck))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBigCart))->EndInit();
		this->panelControls->ResumeLayout(false);
		this->panelControls->PerformLayout();
		this->ResumeLayout(false);

	}

	Void FormClientMenu::SpawnEditionPanel(int id, Edition^ edition, int number)
	{
		Panel^ panel = gcnew Panel;
		panel->Location = System::Drawing::Point(9, 9);
		panel->BackColor = Color::FromArgb(59, 59, 59);
		panel->Margin = System::Windows::Forms::Padding(9);
		panel->Name = L"shopPanel" + id;
		panel->Size = System::Drawing::Size(434, 486);
		panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormClientMenu::panelEdition_Paint);

		PictureBox^ edition_preview = gcnew PictureBox;
		edition_preview->ImageLocation = edition->getLinkToImage();
		edition_preview->Location = System::Drawing::Point(3, 3);
		edition_preview->Name = L"ep" + id;
		edition_preview->Size = System::Drawing::Size(428, 227);
		edition_preview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

		Label^ edition_name = gcnew Label;
		edition_name->AutoSize = true;
		edition_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		edition_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		edition_name->ForeColor = System::Drawing::Color::Gainsboro;
		edition_name->Location = System::Drawing::Point(6, 236);
		edition_name->MaximumSize = System::Drawing::Size(420, 150);
		edition_name->Name = L"en" + id;
		edition_name->Size = System::Drawing::Size(419, 50);
		edition_name->Text = edition->getName();
		edition_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		String^ price;
		Label^ price_without_discount = nullptr;
		if (edition->getDiscount() > 0 && number > 0) {
			price_without_discount = gcnew Label;
			price_without_discount->AutoSize = true;
			price_without_discount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price_without_discount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			price_without_discount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			price_without_discount->Location = System::Drawing::Point(6, 388);
			price_without_discount->Name = L"pwod" + id;
			price_without_discount->Size = System::Drawing::Size(84, 28);
			price_without_discount->Text = edition->getPrice() + "$";
			price_without_discount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			price = Math::Round((edition->getPrice() - edition->getPrice() / 100 * edition->getDiscount()), 2).ToString() + "$";
			panel->Controls->Add(price_without_discount);
		}
		else price = edition->getPrice().ToString() + "$";

		Label^ label_price = gcnew Label;
		label_price->AutoSize = true;
		label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		label_price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (price_without_discount != nullptr) {
			label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
		}
		else label_price->ForeColor = Color::Gainsboro;
		label_price->Location = System::Drawing::Point(5, 409);
		label_price->Name = L"pwd" + id;
		label_price->Size = System::Drawing::Size(111, 35);
		label_price->Text = price;
		label_price->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		bool available = true;
		Label^ label_available = gcnew Label;
		label_available->AutoSize = true;
		label_available->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		label_available->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (number > 500) {
			label_available->ForeColor = System::Drawing::Color::Lime;
			label_available->Text = L"Available";
		}
		else if (number != 0) {
			label_available->ForeColor = System::Drawing::Color::FromArgb(248, 65, 71);
			label_available->Text = L"Ends";
		}
		else {
			label_price->ForeColor = System::Drawing::Color::FromArgb(121, 120, 120);
			label_available->ForeColor = System::Drawing::Color::FromArgb(121, 120, 120);
			label_available->Text = L"Not available";
			available = false;
		}
		label_available->Location = System::Drawing::Point(6, 447);
		label_available->Name = L"la" + id;
		label_available->Size = System::Drawing::Size(120, 28);
		label_available->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		Button^ add_to_cart = gcnew Button;
		add_to_cart->FlatAppearance->BorderSize = 0;
		add_to_cart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		add_to_cart->ImageKey = L"shop_cart_empty.png";
		add_to_cart->ImageList = imageList2;
		add_to_cart->Location = System::Drawing::Point(340, 402);
		add_to_cart->Name = L"atc" + id;
		add_to_cart->Size = System::Drawing::Size(84, 51);
		add_to_cart->UseVisualStyleBackColor = true;
		add_to_cart->Click += gcnew System::EventHandler(this, &FormClientMenu::add_to_cart_Click);
		if (!available)
			add_to_cart->Visible = false;

		panel->Controls->Add(edition_preview);
		panel->Controls->Add(edition_name);
		panel->Controls->Add(add_to_cart);
		panel->Controls->Add(label_price);
		panel->Controls->Add(label_available);
		panel->SuspendLayout();
		panel->ResumeLayout(false);
		panel->PerformLayout();
		flowShop->Controls->Add(panel);
		spawnedPanelsShopProducts->Add(panel);
	}

	Void FormClientMenu::SpawnCartProducts() {
		flowCart->Controls->Clear();
		for each (auto prod in cart->CartProducts)
		{
			Button^ btn_plus = gcnew Button;
			btn_plus->FlatAppearance->BorderSize = 0;
			btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_plus->ImageIndex = 1;
			btn_plus->ImageList = this->imageList4;
			btn_plus->Location = System::Drawing::Point(flowCart->Width / 2 + 84, 101);
			btn_plus->Name = L"bn" + prod.Key->getId();
			btn_plus->Size = System::Drawing::Size(42, 35);
			btn_plus->UseVisualStyleBackColor = true;
			btn_plus->Click += gcnew EventHandler(this, &FormClientMenu::plus_Click);

			Button^ btn_minus = gcnew Button;
			btn_minus->FlatAppearance->BorderSize = 0;
			btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_minus->ImageIndex = 0;
			btn_minus->ImageList = this->imageList4;
			btn_minus->Location = System::Drawing::Point(flowCart->Width / 2 - 58, 101);
			btn_minus->Name = L"bm" + prod.Key->getId();
			btn_minus->Size = System::Drawing::Size(42, 35);
			btn_minus->UseVisualStyleBackColor = true;
			btn_minus->Click += gcnew EventHandler(this, &FormClientMenu::minus_Click);

			TextBox^ edition_counter = gcnew TextBox;
			edition_counter->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			edition_counter->Location = System::Drawing::Point(flowCart->Width / 2, 101);
			edition_counter->MaxLength = 4;
			edition_counter->Name = L"ec" + prod.Key->getId();
			edition_counter->Size = System::Drawing::Size(71, 35);
			edition_counter->Text = prod.Value.ToString();
			edition_counter->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			edition_counter->TextChanged += gcnew EventHandler(this, &FormClientMenu::edition_counter_TextChanged);
			edition_counter->KeyPress += gcnew KeyPressEventHandler(this, &FormClientMenu::txtCounter_KeyPress);

			Label^ edition_name = gcnew Label;
			edition_name->AutoSize = true;
			edition_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			edition_name->ForeColor = System::Drawing::Color::Gainsboro;
			edition_name->Location = System::Drawing::Point(221, 18);
			edition_name->Name = L"en" + prod.Key->getId();
			edition_name->Size = System::Drawing::Size(168, 28);
			edition_name->MaximumSize = System::Drawing::Size(900, 100);
			edition_name->Text = prod.Key->getName();

			Label^ type_name = gcnew Label;
			type_name->AutoSize = true;
			type_name->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			type_name->ForeColor = System::Drawing::Color::Gainsboro;
			type_name->Location = System::Drawing::Point(221, 165);
			type_name->Name = L"tn" + prod.Key->getId();
			type_name->Size = System::Drawing::Size(60, 28);
			type_name->Text = prod.Key->getType();

			float calculatedPrice = cart->calculateSpecifyItemPrice(prod.Key, prod.Value);

			Label^ price = gcnew Label;
			price->AutoSize = true;
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			price->ForeColor = System::Drawing::Color::Gainsboro;
			price->Location = System::Drawing::Point(flowCart->Width - 200, 101);
			price->Name = L"pr" + prod.Key->getId();
			price->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			price->Size = System::Drawing::Size(70, 32);
			price->Text = (Math::Round(calculatedPrice, 2)).ToString() + L"$";
			price->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			PictureBox^ edition_preview = gcnew PictureBox;
			String^ link = prod.Key->getLinkToImage();
			edition_preview->ImageLocation = String::IsNullOrEmpty(link) == false ? link : "C:\\Users\\infab\\Desktop\\icons\\275x350.png";
			edition_preview->Location = System::Drawing::Point(26, 18);
			edition_preview->Name = L"ep" + prod.Key->getId();
			edition_preview->Size = System::Drawing::Size(175, 175);
			edition_preview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			edition_preview->TabStop = false;

			Button^ btn_ellipsis = gcnew Button;
			btn_ellipsis->FlatAppearance->BorderSize = 0;
			btn_ellipsis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_ellipsis->ImageKey = L"ellipsis.png";
			btn_ellipsis->ImageList = this->imageList5;
			btn_ellipsis->Location = System::Drawing::Point(flowCart->Width - 85, 24);
			btn_ellipsis->Name = L"be" + prod.Key->getId();
			btn_ellipsis->Size = System::Drawing::Size(45, 32);
			btn_ellipsis->UseVisualStyleBackColor = true;
			btn_ellipsis->Click += gcnew System::EventHandler(this, &FormClientMenu::btnEllipsis_Click);

			Button^ btn_remove = gcnew Button;
			btn_remove->BackColor = System::Drawing::Color::White;
			btn_remove->FlatAppearance->BorderSize = 2;
			btn_remove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			btn_remove->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btn_remove->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btn_remove->ForeColor = Color::Red;
			btn_remove->ImageKey = L"trash_red.png";
			btn_remove->ImageList = this->imageList3;
			btn_remove->Location = System::Drawing::Point(flowCart->Width - 262, 15);
			btn_remove->Name = L"br" + prod.Key->getId();
			btn_remove->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			btn_remove->Size = System::Drawing::Size(232, 50);
			btn_remove->Text = L" Remove";
			btn_remove->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btn_remove->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			btn_remove->UseVisualStyleBackColor = false;
			btn_remove->Visible = false;
			btn_remove->Click += gcnew System::EventHandler(this, &FormClientMenu::btnRemove_Click);

			Panel^ panel = gcnew Panel;
			panel->Location = System::Drawing::Point(0, 0);
			panel->Name = L"p" + prod.Key->getId();
			panel->Size = System::Drawing::Size(1375, 214);
			panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormClientMenu::panel_MouseDown);
			panel->Controls->Add(btn_plus);
			panel->Controls->Add(btn_minus);
			panel->Controls->Add(btn_ellipsis);
			panel->Controls->Add(btn_remove);
			panel->Controls->Add(edition_counter);
			panel->Controls->Add(edition_name);
			panel->Controls->Add(type_name);
			panel->Controls->Add(price);
			panel->Controls->Add(edition_preview);
			panel->SuspendLayout();
			flowCart->Controls->Add(panel);
		}
	}
}