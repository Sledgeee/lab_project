#pragma once

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
	/// Summary for FormPromptAddEdition
	/// </summary>
	public ref class FormPromptAddEdition : public System::Windows::Forms::Form
	{
	public:
		FormPromptAddEdition(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPromptAddEdition()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rtbDescription;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lvlDescription;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::Panel^ PanelControls;
	private: System::Windows::Forms::TextBox^ txtGenre;

	private: System::Windows::Forms::Label^ lblGenre;
	private: System::Windows::Forms::Label^ lblType;
	private: System::Windows::Forms::ComboBox^ cbType;


	private: System::Windows::Forms::Label^ lblNumberOfPages;
	private: System::Windows::Forms::Label^ lblPrice;
	private: System::Windows::Forms::NumericUpDown^ nudPaperback;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ nudDiscount;

	private: System::Windows::Forms::Label^ lblDiscount;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ CompleteBuild;

	private: System::Windows::Forms::Label^ lblStockAvailableCount;

	private: System::Windows::Forms::NumericUpDown^ nudAvailable;
	private: System::Windows::Forms::PictureBox^ EditionImage;

	private: System::Windows::Forms::Label^ lblLinkToImage;
	private: System::Windows::Forms::TextBox^ txtLinkToImage;
	private: System::Windows::Forms::Label^ lblImgPreview;
	private: System::Windows::Forms::NumericUpDown^ nudPrice;
	private: System::Windows::Forms::Button^ OpenFolderChooseImg;
	private: System::Windows::Forms::TextBox^ txtPublisher;
	private: System::Windows::Forms::Label^ lblPublisher;
	private: System::Windows::Forms::TextBox^ txtLanguage;
	private: System::Windows::Forms::Label^ lblLanguage;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::Label^ lblAuthor;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPromptAddEdition::typeid));
			this->rtbDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->lvlDescription = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->PanelControls = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->lblGenre = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->cbType = (gcnew System::Windows::Forms::ComboBox());
			this->lblNumberOfPages = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->nudPaperback = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nudDiscount = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDiscount = (gcnew System::Windows::Forms::Label());
			this->CompleteBuild = (gcnew System::Windows::Forms::Button());
			this->lblStockAvailableCount = (gcnew System::Windows::Forms::Label());
			this->nudAvailable = (gcnew System::Windows::Forms::NumericUpDown());
			this->EditionImage = (gcnew System::Windows::Forms::PictureBox());
			this->lblLinkToImage = (gcnew System::Windows::Forms::Label());
			this->txtLinkToImage = (gcnew System::Windows::Forms::TextBox());
			this->lblImgPreview = (gcnew System::Windows::Forms::Label());
			this->nudPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->OpenFolderChooseImg = (gcnew System::Windows::Forms::Button());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->lblPublisher = (gcnew System::Windows::Forms::Label());
			this->txtLanguage = (gcnew System::Windows::Forms::TextBox());
			this->lblLanguage = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->PanelControls->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPaperback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDiscount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAvailable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditionImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPrice))->BeginInit();
			this->SuspendLayout();
			// 
			// rtbDescription
			// 
			this->rtbDescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rtbDescription->Location = System::Drawing::Point(19, 575);
			this->rtbDescription->MaxLength = 1000;
			this->rtbDescription->Name = L"rtbDescription";
			this->rtbDescription->Size = System::Drawing::Size(898, 123);
			this->rtbDescription->TabIndex = 0;
			this->rtbDescription->Text = L"";
			// 
			// lvlDescription
			// 
			this->lvlDescription->AutoSize = true;
			this->lvlDescription->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lvlDescription->ForeColor = System::Drawing::Color::Gainsboro;
			this->lvlDescription->Location = System::Drawing::Point(12, 537);
			this->lvlDescription->Name = L"lvlDescription";
			this->lvlDescription->Size = System::Drawing::Size(182, 32);
			this->lvlDescription->TabIndex = 1;
			this->lvlDescription->Text = L"Description:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblName->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblName->Location = System::Drawing::Point(12, 112);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(84, 32);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Name:";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtName->Location = System::Drawing::Point(18, 147);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(260, 32);
			this->txtName->TabIndex = 3;
			this->txtName->Enter += gcnew System::EventHandler(this, &FormPromptAddEdition::txtName_Enter);
			// 
			// PanelControls
			// 
			this->PanelControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PanelControls->Controls->Add(this->panel1);
			this->PanelControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelControls->Location = System::Drawing::Point(0, 0);
			this->PanelControls->Name = L"PanelControls";
			this->PanelControls->Size = System::Drawing::Size(936, 25);
			this->PanelControls->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 25);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormPromptAddEdition::panel1_MouseDown);
			// 
			// Exit
			// 
			this->Exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->ForeColor = System::Drawing::Color::Gainsboro;
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->Location = System::Drawing::Point(906, -3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(32, 28);
			this->Exit->TabIndex = 8;
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &FormPromptAddEdition::Exit_Click);
			// 
			// txtGenre
			// 
			this->txtGenre->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtGenre->Location = System::Drawing::Point(329, 147);
			this->txtGenre->MaxLength = 50;
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(260, 32);
			this->txtGenre->TabIndex = 6;
			this->txtGenre->Enter += gcnew System::EventHandler(this, &FormPromptAddEdition::txtGenre_Enter);
			// 
			// lblGenre
			// 
			this->lblGenre->AutoSize = true;
			this->lblGenre->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGenre->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblGenre->Location = System::Drawing::Point(323, 112);
			this->lblGenre->Name = L"lblGenre";
			this->lblGenre->Size = System::Drawing::Size(98, 32);
			this->lblGenre->TabIndex = 5;
			this->lblGenre->Text = L"Genre:";
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblType->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblType->Location = System::Drawing::Point(12, 279);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(84, 32);
			this->lblType->TabIndex = 7;
			this->lblType->Text = L"Type:";
			// 
			// cbType
			// 
			this->cbType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbType->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbType->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbType->FormattingEnabled = true;
			this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Book", L"Newspaper", L"Magazine", L"Almonac" });
			this->cbType->Location = System::Drawing::Point(18, 314);
			this->cbType->Name = L"cbType";
			this->cbType->Size = System::Drawing::Size(260, 36);
			this->cbType->TabIndex = 8;
			this->cbType->SelectedIndexChanged += gcnew System::EventHandler(this, &FormPromptAddEdition::cbType_SelectedIndexChanged);
			// 
			// lblNumberOfPages
			// 
			this->lblNumberOfPages->AutoSize = true;
			this->lblNumberOfPages->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblNumberOfPages->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblNumberOfPages->Location = System::Drawing::Point(12, 367);
			this->lblNumberOfPages->Name = L"lblNumberOfPages";
			this->lblNumberOfPages->Size = System::Drawing::Size(154, 32);
			this->lblNumberOfPages->TabIndex = 10;
			this->lblNumberOfPages->Text = L"Paperback:";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPrice->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblPrice->Location = System::Drawing::Point(13, 455);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(98, 32);
			this->lblPrice->TabIndex = 11;
			this->lblPrice->Text = L"Price:";
			// 
			// nudPaperback
			// 
			this->nudPaperback->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudPaperback->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nudPaperback->Location = System::Drawing::Point(18, 402);
			this->nudPaperback->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->nudPaperback->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudPaperback->Name = L"nudPaperback";
			this->nudPaperback->Size = System::Drawing::Size(260, 32);
			this->nudPaperback->TabIndex = 13;
			this->nudPaperback->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(300, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 49);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Edition Builder";
			// 
			// nudDiscount
			// 
			this->nudDiscount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudDiscount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nudDiscount->Location = System::Drawing::Point(329, 402);
			this->nudDiscount->Name = L"nudDiscount";
			this->nudDiscount->Size = System::Drawing::Size(260, 32);
			this->nudDiscount->TabIndex = 16;
			// 
			// lblDiscount
			// 
			this->lblDiscount->AutoSize = true;
			this->lblDiscount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDiscount->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblDiscount->Location = System::Drawing::Point(323, 367);
			this->lblDiscount->Name = L"lblDiscount";
			this->lblDiscount->Size = System::Drawing::Size(210, 32);
			this->lblDiscount->TabIndex = 17;
			this->lblDiscount->Text = L"Discount in %:";
			// 
			// CompleteBuild
			// 
			this->CompleteBuild->FlatAppearance->BorderSize = 2;
			this->CompleteBuild->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CompleteBuild->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CompleteBuild->ForeColor = System::Drawing::Color::Gainsboro;
			this->CompleteBuild->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CompleteBuild.Image")));
			this->CompleteBuild->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->CompleteBuild->Location = System::Drawing::Point(358, 713);
			this->CompleteBuild->Name = L"CompleteBuild";
			this->CompleteBuild->Size = System::Drawing::Size(214, 62);
			this->CompleteBuild->TabIndex = 18;
			this->CompleteBuild->Text = L"Complete";
			this->CompleteBuild->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CompleteBuild->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->CompleteBuild->UseVisualStyleBackColor = true;
			this->CompleteBuild->Click += gcnew System::EventHandler(this, &FormPromptAddEdition::CompleteBuild_Click);
			// 
			// lblStockAvailableCount
			// 
			this->lblStockAvailableCount->AutoSize = true;
			this->lblStockAvailableCount->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblStockAvailableCount->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblStockAvailableCount->Location = System::Drawing::Point(324, 455);
			this->lblStockAvailableCount->Name = L"lblStockAvailableCount";
			this->lblStockAvailableCount->Size = System::Drawing::Size(238, 32);
			this->lblStockAvailableCount->TabIndex = 19;
			this->lblStockAvailableCount->Text = L"Number in stock:";
			// 
			// nudAvailable
			// 
			this->nudAvailable->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudAvailable->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nudAvailable->Location = System::Drawing::Point(330, 490);
			this->nudAvailable->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->nudAvailable->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudAvailable->Name = L"nudAvailable";
			this->nudAvailable->Size = System::Drawing::Size(260, 32);
			this->nudAvailable->TabIndex = 20;
			this->nudAvailable->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// EditionImage
			// 
			this->EditionImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditionImage.Image")));
			this->EditionImage->Location = System::Drawing::Point(642, 147);
			this->EditionImage->Name = L"EditionImage";
			this->EditionImage->Size = System::Drawing::Size(275, 350);
			this->EditionImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->EditionImage->TabIndex = 21;
			this->EditionImage->TabStop = false;
			// 
			// lblLinkToImage
			// 
			this->lblLinkToImage->AutoSize = true;
			this->lblLinkToImage->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLinkToImage->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblLinkToImage->Location = System::Drawing::Point(645, 501);
			this->lblLinkToImage->Name = L"lblLinkToImage";
			this->lblLinkToImage->Size = System::Drawing::Size(210, 32);
			this->lblLinkToImage->TabIndex = 22;
			this->lblLinkToImage->Text = L"Link to image:";
			// 
			// txtLinkToImage
			// 
			this->txtLinkToImage->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtLinkToImage->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLinkToImage->Location = System::Drawing::Point(642, 537);
			this->txtLinkToImage->Name = L"txtLinkToImage";
			this->txtLinkToImage->ReadOnly = true;
			this->txtLinkToImage->Size = System::Drawing::Size(275, 32);
			this->txtLinkToImage->TabIndex = 23;
			// 
			// lblImgPreview
			// 
			this->lblImgPreview->AutoSize = true;
			this->lblImgPreview->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblImgPreview->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblImgPreview->Location = System::Drawing::Point(636, 112);
			this->lblImgPreview->Name = L"lblImgPreview";
			this->lblImgPreview->Size = System::Drawing::Size(210, 32);
			this->lblImgPreview->TabIndex = 24;
			this->lblImgPreview->Text = L"Edition image:";
			// 
			// nudPrice
			// 
			this->nudPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudPrice->DecimalPlaces = 2;
			this->nudPrice->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nudPrice->Location = System::Drawing::Point(19, 490);
			this->nudPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->nudPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudPrice->Name = L"nudPrice";
			this->nudPrice->Size = System::Drawing::Size(260, 32);
			this->nudPrice->TabIndex = 14;
			this->nudPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// OpenFolderChooseImg
			// 
			this->OpenFolderChooseImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->OpenFolderChooseImg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OpenFolderChooseImg->FlatAppearance->BorderSize = 0;
			this->OpenFolderChooseImg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenFolderChooseImg->ForeColor = System::Drawing::Color::Gainsboro;
			this->OpenFolderChooseImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OpenFolderChooseImg.Image")));
			this->OpenFolderChooseImg->Location = System::Drawing::Point(884, 501);
			this->OpenFolderChooseImg->Name = L"OpenFolderChooseImg";
			this->OpenFolderChooseImg->Size = System::Drawing::Size(32, 28);
			this->OpenFolderChooseImg->TabIndex = 9;
			this->OpenFolderChooseImg->UseVisualStyleBackColor = true;
			this->OpenFolderChooseImg->Click += gcnew System::EventHandler(this, &FormPromptAddEdition::OpenFolderChooseImg_Click);
			// 
			// txtPublisher
			// 
			this->txtPublisher->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPublisher->Location = System::Drawing::Point(329, 314);
			this->txtPublisher->MaxLength = 50;
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(260, 32);
			this->txtPublisher->TabIndex = 26;
			this->txtPublisher->Enter += gcnew System::EventHandler(this, &FormPromptAddEdition::txtPublisher_Enter);
			// 
			// lblPublisher
			// 
			this->lblPublisher->AutoSize = true;
			this->lblPublisher->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPublisher->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblPublisher->Location = System::Drawing::Point(323, 279);
			this->lblPublisher->Name = L"lblPublisher";
			this->lblPublisher->Size = System::Drawing::Size(154, 32);
			this->lblPublisher->TabIndex = 25;
			this->lblPublisher->Text = L"Publisher:";
			// 
			// txtLanguage
			// 
			this->txtLanguage->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLanguage->Location = System::Drawing::Point(329, 228);
			this->txtLanguage->MaxLength = 50;
			this->txtLanguage->Name = L"txtLanguage";
			this->txtLanguage->Size = System::Drawing::Size(260, 32);
			this->txtLanguage->TabIndex = 28;
			this->txtLanguage->Enter += gcnew System::EventHandler(this, &FormPromptAddEdition::txtLanguage_Enter);
			// 
			// lblLanguage
			// 
			this->lblLanguage->AutoSize = true;
			this->lblLanguage->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLanguage->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblLanguage->Location = System::Drawing::Point(323, 193);
			this->lblLanguage->Name = L"lblLanguage";
			this->lblLanguage->Size = System::Drawing::Size(140, 32);
			this->lblLanguage->TabIndex = 27;
			this->lblLanguage->Text = L"Language:";
			// 
			// txtAuthor
			// 
			this->txtAuthor->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtAuthor->Location = System::Drawing::Point(18, 228);
			this->txtAuthor->MaxLength = 50;
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(260, 32);
			this->txtAuthor->TabIndex = 30;
			this->txtAuthor->Enter += gcnew System::EventHandler(this, &FormPromptAddEdition::txtAuthor_Enter);
			// 
			// lblAuthor
			// 
			this->lblAuthor->AutoSize = true;
			this->lblAuthor->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAuthor->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblAuthor->Location = System::Drawing::Point(12, 193);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(112, 32);
			this->lblAuthor->TabIndex = 29;
			this->lblAuthor->Text = L"Author:";
			// 
			// FormPromptAddEdition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(936, 788);
			this->ControlBox = false;
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->lblAuthor);
			this->Controls->Add(this->txtLanguage);
			this->Controls->Add(this->lblLanguage);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->lblPublisher);
			this->Controls->Add(this->OpenFolderChooseImg);
			this->Controls->Add(this->lblImgPreview);
			this->Controls->Add(this->txtLinkToImage);
			this->Controls->Add(this->lblLinkToImage);
			this->Controls->Add(this->EditionImage);
			this->Controls->Add(this->nudAvailable);
			this->Controls->Add(this->lblStockAvailableCount);
			this->Controls->Add(this->CompleteBuild);
			this->Controls->Add(this->lblDiscount);
			this->Controls->Add(this->nudDiscount);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nudPrice);
			this->Controls->Add(this->nudPaperback);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblNumberOfPages);
			this->Controls->Add(this->cbType);
			this->Controls->Add(this->lblType);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->lblGenre);
			this->Controls->Add(this->PanelControls);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lvlDescription);
			this->Controls->Add(this->rtbDescription);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormPromptAddEdition";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &FormPromptAddEdition::FormPromptAddEdition_Load);
			this->PanelControls->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPaperback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDiscount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAvailable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditionImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPrice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPromptAddEdition_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void OpenFolderChooseImg_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Multiselect = false;
		dialog->Filter = "Files|*.png;*.jpg;*.bmp;";
		dialog->ShowDialog();
		if (dialog->CheckFileExists)
		{
			EditionImage->ImageLocation = dialog->FileName;
			txtLinkToImage->Text = dialog->FileName;
		}
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}
	private: System::Void CompleteBuild_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtName->Text))
			txtName->BackColor = Color::Red;
		if (String::IsNullOrWhiteSpace(txtGenre->Text))
			txtGenre->BackColor = Color::Red;
		if (String::IsNullOrWhiteSpace(txtAuthor->Text))
			txtAuthor->BackColor = Color::Red;
		if (String::IsNullOrWhiteSpace(txtLanguage->Text))
			txtLanguage->BackColor = Color::Red;
		if (String::IsNullOrWhiteSpace(txtPublisher->Text))
			txtPublisher->BackColor = Color::Red;
		if (cbType->SelectedIndex < 0)
			cbType->BackColor = Color::Red;
		if (txtName->BackColor == Color::Red || txtGenre->BackColor == Color::Red ||
			cbType->BackColor == Color::Red || txtAuthor->BackColor == Color::Red ||
			txtLanguage->BackColor == Color::Red || txtPublisher->BackColor == Color::Red)
		{
			MessageBox::Show(this, "You have empty fields, please fill them", "Warning",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Insert Into Editions (Name, Author, Type, Genre, Paperback, Description, Price, Discount, Publisher, Language, Available, LinkToImg) " +
			"Values (@Name, @Author, @Type, @Genre, @Paperback, @Description, @Price, @Discount, @Publisher, @Language, @Available, @LinkToImg)", dbc);
		cmd->Parameters->AddWithValue("@Name", txtName->Text);
		cmd->Parameters->AddWithValue("@Author", txtAuthor->Text);
		cmd->Parameters->AddWithValue("@Type", cbType->SelectedItem->ToString());
		cmd->Parameters->AddWithValue("@Genre", txtGenre->Text);
		cmd->Parameters->AddWithValue("@Paperback", nudPaperback->Value);
		cmd->Parameters->AddWithValue("@Description", rtbDescription->Text);
		cmd->Parameters->AddWithValue("@Price", nudPrice->Value);
		cmd->Parameters->AddWithValue("@Discount", nudDiscount->Value);
		cmd->Parameters->AddWithValue("@Publisher", txtPublisher->Text);
		cmd->Parameters->AddWithValue("@Language", txtLanguage->Text);
		cmd->Parameters->AddWithValue("@Available", nudAvailable->Value);
		cmd->Parameters->AddWithValue("@LinkToImg", txtLinkToImage->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		this->DialogResult = Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void txtName_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtName->BackColor == Color::Red)
			txtName->BackColor = Color::White;
	}
	private: System::Void txtGenre_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtGenre->BackColor == Color::Red)
			txtGenre->BackColor = Color::White;
	}
	private: System::Void cbType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		lblType->Focus();
		if (cbType->BackColor == Color::Red)
			cbType->BackColor == Color::White;
	}
	private: System::Void txtAuthor_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtAuthor->BackColor == Color::Red)
			txtAuthor->BackColor = Color::White;
	}

	private: System::Void txtLanguage_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtLanguage->BackColor == Color::Red)
			txtLanguage->BackColor = Color::White;
	}
	private: System::Void txtPublisher_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtPublisher->BackColor == Color::Red)
			txtPublisher->BackColor = Color::White;
	}
	};
}
