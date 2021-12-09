#pragma once

#include "RGBColors.h"
#include "Client.h"
#include "Cart.h"
#include "Shop.h"
#include "Book.h"
#include "Order.h"
#include "Mailer.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "DBQuery.h"
#include "FormPrompt.h"
#include "Form2FA.h"
#include "FormPassChangedNotification.h"
#include "FormMyOrders.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Runtime::InteropServices;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;

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
		FormClientMenu(Client^ client)
		{
			InitializeComponent();
			this->client = client;
			this->shop = gcnew Shop();
			this->cart = gcnew Cart();
			leftBorderBtn = gcnew Panel();
			searchedPanelsShop = gcnew List<Panel^>();
			spawnedPanelsShopProducts = gcnew List<Panel^>();
			leftBorderBtn->Size = System::Drawing::Size(7, 60);
			PanelMenu->Controls->Add(leftBorderBtn);
		}
		Shop^ shop;
		Cart^ cart;
		Client^ client;
		List<Panel^>^ searchedPanelsShop;
		List<Panel^>^ spawnedPanelsShopProducts;
		Thread^ load_editions, ^ load_personal_data;
		Thread^ animation_search_bar;
#pragma region Controls
	private: System::Windows::Forms::Panel^ childPanel;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowShop;
	private: System::Windows::Forms::Panel^ PanelCart;
	private: System::Windows::Forms::Panel^ PanelCartDesk;
	private: System::Windows::Forms::Panel^ PanelButtons;
	private: System::Windows::Forms::Panel^ PanelCheckout;
	private: System::Windows::Forms::Label^ lblTotalPrice;
	private: System::Windows::Forms::Button^ btnCheckout;
	private: System::Windows::Forms::Button^ btnContinueShopping;
	private: System::Windows::Forms::ImageList^ imageList3;
	private: System::Windows::Forms::ImageList^ imageList4;
	private: System::Windows::Forms::ImageList^ imageList5;
	private: System::Windows::Forms::Label^ lblNeverFixIt;
	private: System::Windows::Forms::Label^ lblCartIsEmpty;
	private: System::Windows::Forms::PictureBox^ pictureBigCart;
	private: System::Windows::Forms::FlowLayoutPanel^ flowCart;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::FlowLayoutPanel^ flowSearchingResults;
	private: System::Windows::Forms::Button^ btnShowSearchRow;
	private: System::Windows::Forms::PictureBox^ pictureFurfur;
	private: System::Windows::Forms::Button^ btnClearText;
	private: System::Windows::Forms::Panel^ PanelSearchControls;
	private: System::Windows::Forms::Button^ btnHideSearchRow;
	private: System::Windows::Forms::Panel^ panelGeneralSettings;
	private: System::Windows::Forms::Button^ btnDiscardGeneralSettings;
	private: System::Windows::Forms::Button^ btnSaveGeneralSettings;
	private: System::Windows::Forms::Panel^ panelCity;
	private: System::Windows::Forms::Label^ lblCityPlaceholder;
	private: System::Windows::Forms::Panel^ panelCountry;
	private: System::Windows::Forms::Label^ lblCountryPlaceholder;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Form^ currentChildForm;

	private: System::Windows::Forms::Panel^ panelLastName;
	private: System::Windows::Forms::Label^ lblLastNamePlaceholder;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::Panel^ panelFirstName;
	private: System::Windows::Forms::Label^ lblFirstNamePlaceholder;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblPDdescription;
	private: System::Windows::Forms::Label^ lblPersonalDetails;
	private: System::Windows::Forms::Button^ btnCancelEditEmail;
	private: System::Windows::Forms::Button^ btnEditEmail;
	private: System::Windows::Forms::Panel^ panelEmailEdit;
	private: System::Windows::Forms::Label^ lblEmailAddressPlaceholder;
	private: System::Windows::Forms::Button^ btnSaveEditEmail;
	private: System::Windows::Forms::Button^ btnCancelEditLogin;
	private: System::Windows::Forms::Button^ btnEditLogin;
	private: System::Windows::Forms::Panel^ panelLoginEdit;
	private: System::Windows::Forms::Label^ lblLoginPlaceholder;
	private: System::Windows::Forms::Label^ lblCurrentUserID;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblAccountInfo;
	private: System::Windows::Forms::Label^ lblGSdescription;
	private: System::Windows::Forms::Label^ lblGeneralSettings;
	private: System::Windows::Forms::Button^ btnSaveEditLogin;
	private: System::Windows::Forms::Panel^ panelPasswordSecurity;
	private: System::Windows::Forms::Label^ lblEmail2FAdescription;
	private: System::Windows::Forms::Label^ lblAvailableAuthMethods;
	private: System::Windows::Forms::Label^ lbl2FAdescription;
	private: System::Windows::Forms::Label^ lbl2FAAuthentication;
	private: System::Windows::Forms::Label^ lblEmail2FA;
	private: System::Windows::Forms::CheckBox^ toggleEmail2FA;
	private: System::Windows::Forms::Label^ lblEmail2FAStatus;
	private: System::Windows::Forms::Label^ lblSeparator1;
	private: System::Windows::Forms::Button^ btnDiscardPasswordSecurityChanges;
	private: System::Windows::Forms::Panel^ panelRetypePassword;
	private: System::Windows::Forms::Label^ lblRetypePasswordPlaceholder;

	private: System::Windows::Forms::Button^ btnSavePasswordSecurityChanges;
	private: System::Windows::Forms::Panel^ panelNewPassword;
	private: System::Windows::Forms::Label^ lblNewPasswordPlaceholder;

	private: System::Windows::Forms::Panel^ panelCurrentPassword;
	private: System::Windows::Forms::Label^ lblCurrentPasswordPlaceholder;
	private: System::Windows::Forms::Label^ lblPasswordSecurity;


	private: System::Windows::Forms::Label^ lblSeparator2;

	private: System::Windows::Forms::Label^ lblDeleteAccount;
	private: System::Windows::Forms::Label^ lblDeleteAccountDescription;
	private: System::Windows::Forms::Button^ btnDeleteAccount;
	private: System::Windows::Forms::Panel^ PanelProfile;
	private: System::Windows::Forms::Panel^ PanelMenu;
	private: System::Windows::Forms::Button^ btnProfile;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ btnShop;
	private: System::Windows::Forms::Panel^ PanelTitleBar;
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Panel^ leftBorderBtn;
	private: System::Windows::Forms::Panel^ PanelDesktop;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ panelControls;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Panel^ minipanelCart;
	private: System::Windows::Forms::Button^ btnCart;
	private: System::Windows::Forms::TextBox^ txtCurrentUserEmail;
	private: System::Windows::Forms::TextBox^ txtCurrentUserLogin;
	private: System::Windows::Forms::TextBox^ txtCountry;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblErrCity;
	private: System::Windows::Forms::Label^ lblErrCountry;
	private: System::Windows::Forms::Label^ lblErrLN;
	private: System::Windows::Forms::Label^ lblErrFN;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::PictureBox^ imgHome;
	private: System::Windows::Forms::MaskedTextBox^ txtCurrentPassword;
	private: System::Windows::Forms::MaskedTextBox^ txtNewPassword;
	private: System::Windows::Forms::MaskedTextBox^ txtRetypePassword;
	private: System::Windows::Forms::Label^ lblOrderCreated;
	private: System::Windows::Forms::PictureBox^ pictureBigCheck;
	private: System::Windows::Forms::Button^ btnMyOrders;


	private: System::Windows::Forms::Label^ lblCounterProducts;
#pragma endregion

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
		/// <summary>
		/// Required designer variable.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);

#pragma endregion
		Color onBackColor = Color::MediumSlateBlue;
		Color onToggleColor = Color::WhiteSmoke;
		Color offBackColor = Color::Gray;
		Color offToggleColor = Color::Gainsboro;
		bool solidStyle = true;
		Thread^ update_email;

		Void load_editions_Start();
		Void LoadEditions();
		Void load_personal_data_Start();
		Void LoadPersonalData();
		Void OpenCart();
		Void SpawnEditionPanel(int id, Edition^ edition, int number);
		Void ActivateButton(Object^ senderBtn, Color customColor);
		Void DisableButton();
		Void SpawnCartProducts();
		GraphicsPath^ GetFigurePath();
		Void ShowSearchRow();
		Void HideSearchRow();
		Void SetVisibleOfClearButton(bool visible);
		Void SetLength(int first);
		Void update_email_Start();
		Void SendMail(String^ key);
		Void SetEmail(String^ key);

	private: System::Void FormClientMenu_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PanelCart_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OpenChildForm(Form^ childForm);
	private: System::Void btnMyOrders_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PanelTitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void panelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_to_cart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PanelCheckout_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void edition_counter_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnContinueShopping_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCheckout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnEllipsis_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void panel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnShowSearchRow_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnClearText_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnHideSearchRow_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toggleEmail2FA_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void panelEdition_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void btnProfile_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void btnShop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void btnMyOrders_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void txtProfile_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void txtCounter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void btnEditLogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSaveEditLogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCancelEditLogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnEditEmail_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSaveEditEmail_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCancelEditEmail_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDeleteAccount_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSavePersonal_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDiscardGeneralSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDiscardPasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSavePasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toggleEmail2FA_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
