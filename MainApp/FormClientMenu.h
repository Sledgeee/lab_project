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

		Void load_editions_Start()
		{
			Invoke(gcnew Action(this, &FormClientMenu::LoadEditions));
		}

		Void LoadEditions()
		{
			SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
			con->Open();
			SqlCommand^ cmd = gcnew SqlCommand("Select * From Editions", con);
			SqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->HasRows)
			{
				while (reader->Read())
				{
					if (reader["Type"]->ToString() == "Book")
					{
						shop->ShopProducts->Add(gcnew Book(
							Convert::ToInt32(reader["Id"]),
							reader["Name"]->ToString(),
							reader["Type"]->ToString(),
							reader["Author"]->ToString(),
							reader["Genre"]->ToString(),
							Convert::ToInt32(reader["PrintLength"]),
							gcnew Publisher(reader["Publisher"]->ToString()),
							reader["Language"]->ToString(),
							reader["Description"]->ToString(),
							(float)Convert::ToDouble(reader["Price"]),
							Convert::ToInt32(reader["Discount"]),
							reader["LinkToImg"]->ToString()
						),
							Convert::ToInt32(reader["Available"])
						);
					}
					else if (reader["Type"]->ToString() == "Newspaper")
					{
						shop->ShopProducts->Add(gcnew Newspaper(
							Convert::ToInt32(reader["Id"]),
							reader["Name"]->ToString(),
							reader["Type"]->ToString(),
							reader["Genre"]->ToString(),
							Convert::ToInt32(reader["PrintLength"]),
							gcnew Publisher(reader["Publisher"]->ToString()),
							reader["Language"]->ToString(),
							reader["Description"]->ToString(),
							(float)Convert::ToDouble(reader["Price"]),
							Convert::ToInt32(reader["Discount"]),
							reader["LinkToImg"]->ToString()
						),
							Convert::ToInt32(reader["Available"])
						);
					}
					else {
						shop->ShopProducts->Add(gcnew Magazine(
							Convert::ToInt32(reader["Id"]),
							reader["Name"]->ToString(),
							reader["Type"]->ToString(),
							Convert::ToInt32(reader["PrintLength"]),
							gcnew Publisher(reader["Publisher"]->ToString()),
							reader["Language"]->ToString(),
							reader["Description"]->ToString(),
							(float)Convert::ToDouble(reader["Price"]),
							Convert::ToInt32(reader["Discount"]),
							reader["LinkToImg"]->ToString()
						),
							Convert::ToInt32(reader["Available"])
						);
					}
				}
			}
			for each (auto prod in shop->ShopProducts) {
				SpawnEditionPanel(prod.Key->getId(), prod.Key, prod.Value);
			}
			load_editions->Abort();
		}

		Void load_personal_data_Start()
		{
			Invoke(gcnew Action(this, &FormClientMenu::LoadPersonalData));
		}

		Void LoadPersonalData()
		{
			lblCurrentUserID->Text = client->getId().ToString();
			txtCurrentUserLogin->Text = client->getLogin()->ToString();
			txtCurrentUserEmail->Text = client->getEmail()->ToString();
			auto user_name = (client->getName())->Split(' ');
			txtFirstName->Text = user_name[0];
			txtLastName->Text = user_name[1];
			txtCountry->Text = client->getCountry();
			txtCity->Text = client->getCity();
			bool TWO_FACTOR = client->get2FA();
			if (TWO_FACTOR) {
				toggleEmail2FA->Checked = true;
				lblEmail2FAStatus->Text = "On";
			}
			load_personal_data->Abort();
		}
	private: System::Void FormClientMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		this->btnShop->PerformClick();
		load_editions = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::load_editions_Start));
		load_personal_data = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::load_personal_data_Start));
		load_editions->Start();
		load_personal_data->Start();
		lblCounterProducts->Text = "0";
	}

	private: Void OpenCart()
	{
		if (PanelProfile->Visible) {
			PanelProfile->Visible = false;
			childPanel = PanelProfile;
		}
		else {
			flowShop->Visible = false;
			childPanel = flowShop;
		}
		PanelSearchControls->Visible = false;
		PanelCart->Visible = true;
		PanelCart->BringToFront();
	}

	private: System::Void SpawnEditionPanel(int id, Edition^ edition, int number);
	

	private: System::Void PanelCart_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!PanelCart->Visible) return;
		if (cart->CountProducts == 0 || cart->CartProducts == nullptr)
		{
			pictureBigCheck->Visible = false;
			lblOrderCreated->Visible = false;
			pictureBigCart->Visible = true;
			lblCartIsEmpty->Visible = true;
			lblNeverFixIt->Visible = true;
			flowCart->Visible = false;
			PanelButtons->Visible = false;
			return;
		}

		flowCart->Visible = true;
		PanelButtons->Visible = true;

		SpawnCartProducts();
		lblTotalPrice->Text = cart->TotalSum + L"$";
		if (lblTotalPrice->Location.X + lblTotalPrice->Size.Width >= btnCheckout->Location.X - 3)
		{
			PanelCheckout->Location = Drawing::Point(PanelCheckout->Location.X - 25, PanelCheckout->Location.Y);
			PanelCheckout->Size = Drawing::Size(PanelCheckout->Size.Width + 25, PanelCheckout->Size.Height);
			PanelCheckout->Refresh();
		}

	}

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
			this->leftBorderBtn->Visible = false;
		}
	}

	private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, RGBColors::color1);
		PanelCart->Visible = false;
		flowShop->Visible = false;
		PanelSearchControls->Visible = false;
		minipanelCart->Visible = false;
		PanelProfile->Visible = true;
	}
	
	private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, RGBColors::color2);
		PanelCart->Visible = false;
		PanelProfile->Visible = false;
		flowShop->Visible = true;
		PanelSearchControls->Visible = true;
		minipanelCart->Visible = true;
	}
		   Form^ currentChildForm;
	private: System::Void OpenChildForm(Form^ childForm)
	{
		currentChildForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = DockStyle::Fill;
		PanelDesktop->Controls->Add(childForm);
		PanelDesktop->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
	}

	private: System::Void btnMyOrders_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender, RGBColors::color3);
		PanelCart->Visible = false;
		PanelProfile->Visible = false;
		flowShop->Visible = false;
		PanelSearchControls->Visible = false;
		minipanelCart->Visible = false;
		OpenChildForm(gcnew FormMyOrders(client));
	}

	private: System::Void btnCart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		DisableButton();
		OpenCart();
	}


	private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void panelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}
	
	private: System::Void add_to_cart_Click(System::Object^ sender, System::EventArgs^ e) {
		flowShop->Focus();
		if (cart->CountKeys == 15) {
			MessageBox::Show(this, "Maximum count of different editions in a cart is 15", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		Button^ btn = (Button^)sender;
		if (btn->ImageKey == L"shop_cart_empty.png")
		{
			btn->ImageKey = L"shop_cart_has.png";
			for each (auto prod in shop->ShopProducts)
			{
				String^ id = prod.Key->getId().ToString();
				if (String::Compare(id, 0, btn->Name, 3, btn->Name->Length - 3) == 0)
				{
					cart->addProduct(prod.Key, 1);
					break;
				}
			}
			lblCounterProducts->Text = (Int32::Parse(lblCounterProducts->Text) + 1).ToString();
		}
		else {
			OpenCart();
		}
	}
				
	private: System::Void SpawnCartProducts();
	
	private: System::Void PanelCheckout_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, this->PanelCheckout->ClientRectangle, Color::FromArgb(0, 160, 70), ButtonBorderStyle::Solid);
	}

	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		flowCart->Controls["p" + id]->Controls["ec" + id]->Text = 
			(Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) + 1).ToString();
		lblCounterProducts->Text = (Int32::Parse(lblCounterProducts->Text) + 1).ToString();
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		if (Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) == 1)
			return;
		flowCart->Controls["p" + id]->Controls["ec" + id]->Text = 
			(Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) - 1).ToString();
		lblCounterProducts->Text = (Int32::Parse(lblCounterProducts->Text) - 1).ToString();
	}

	private: System::Void edition_counter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TextBox^ counter = (TextBox^)sender;
		if (String::IsNullOrWhiteSpace(counter->Text))
		{
			counter->Text = "1";
			return;
		}
		
		String^ id = counter->Name->Substring(2);
		for each (auto prod in cart->CartProducts)
		{
			if (prod.Key->getId().ToString() == id) {
				cart->CartProducts[prod.Key] = Int32::Parse(counter->Text);
				flowCart->Controls["p" + id]->Controls["pr" + id]->Text =
					cart->calculateSpecifyItemPrice(prod.Key, Int32::Parse(counter->Text)).ToString() + "$";
				break;
			}
		}
		cart->calculateTotalPrice();

		int count = 0;
		for each (auto prod in cart->CartProducts)
		{
			count += prod.Value;
		}
		lblCounterProducts->Text = count.ToString();

		lblTotalPrice->Text = Math::Round(cart->TotalSum, 2).ToString() + "$";
		if (lblTotalPrice->Location.X + lblTotalPrice->Size.Width >= btnCheckout->Location.X - 3)
		{
			PanelCheckout->Location = Drawing::Point(PanelCheckout->Location.X - 25, PanelCheckout->Location.Y);
			PanelCheckout->Size = Drawing::Size(PanelCheckout->Size.Width + 25, PanelCheckout->Size.Height);
			PanelCheckout->Refresh();
		}
	}
	
	private: System::Void btnContinueShopping_Click(System::Object^ sender, System::EventArgs^ e) {
		cart->Refresh();
		if (childPanel == flowShop)
			flowShop->Visible = true;
		else
			PanelProfile->Visible = true;
		PanelCart->Visible = false;

	}
	
	private: System::Void btnCheckout_Click(System::Object^ sender, System::EventArgs^ e) {
		Order^ order = gcnew Order(client, cart, false);
		order->CreateOrder();
		for each (auto prod in cart->CartProducts)
		{
			auto _btn = (Button^)flowShop->Controls["shopPanel" + prod.Key->getId()]->Controls["atc" + prod.Key->getId()];
			_btn->ImageKey = L"shop_cart_empty.png";
			lblCounterProducts->Text = (Int32::Parse(lblCounterProducts->Text) - cart->CartProducts[prod.Key]).ToString();
			flowCart->Controls->RemoveByKey("p" + prod.Key->getId());
		}
		cart->CartProducts->Clear();
		cart->Refresh();
		lblCartIsEmpty->Visible = false;
		pictureBigCart->Visible = false;
		lblNeverFixIt->Visible = false;
		flowCart->Visible = false;
		PanelButtons->Visible = false;
		lblOrderCreated->Visible = true;
		pictureBigCheck->Visible = true;
	}

	private: System::Void btnEllipsis_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		auto panel = (Panel^)flowCart->Controls["p" + id];
		panel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
		panel->Controls["br" + id]->Visible = true;
		panel->Controls["br" + id]->BringToFront();
	}
	
	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);

		for each (auto prod in cart->CartProducts)
		{
			if (prod.Key->getId().ToString() == id)
			{
				auto _btn = (Button^)flowShop->Controls["shopPanel" + id]->Controls["atc" + id];
				_btn->ImageKey = L"shop_cart_empty.png";
				lblCounterProducts->Text = (Int32::Parse(lblCounterProducts->Text) - cart->CartProducts[prod.Key]).ToString();
				cart->CartProducts->Remove(prod.Key);
				break;
			}
		}
		cart->Refresh();
		flowCart->Controls->RemoveByKey("p" + id);
		if (cart->CountProducts == 0)
		{
			flowCart->Visible = false;
			PanelButtons->Visible = false;
			return;
		}
		lblTotalPrice->Text = Math::Round(cart->TotalSum, 2).ToString() + "$";
	}
	
	private: System::Void panel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Panel^ panel = (Panel^)sender;
		String^ id = panel->Name->Substring(1);
		if (panel->Controls["br" + id]->Visible) {
			panel->Controls["br" + id]->Visible = false;
			panel->BorderStyle = Windows::Forms::BorderStyle::None;
		}
	}

	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtSearch->Text)) {
			flowSearchingResults->Visible = false;
			flowShop->Controls->Clear();
			for each (auto item in spawnedPanelsShopProducts)
				flowShop->Controls->Add(item);
			flowShop->Visible = true;
			return;
		}
		flowShop->Visible = false;
		flowSearchingResults->Controls->Clear();
		flowSearchingResults->Visible = true;
		int i = 0;
		for each (auto prod in shop->ShopProducts)
		{
			if (String::Compare(txtSearch->Text, 0, prod.Key->getName(), 0, txtSearch->Text->Length) == 0)
			{
				flowSearchingResults->Controls->Add(spawnedPanelsShopProducts[i]);
			}
			i++;
		}
	}

	private: System::Void ShowSearchRow()
	{
		Invoke(gcnew Action<int>(this, &FormClientMenu::SetLength), 1);
		Invoke(gcnew Action<bool>(this, &FormClientMenu::SetVisibleOfClearButton), true);
		animation_search_bar->Abort();
	}

	private: System::Void HideSearchRow()
	{
		Invoke(gcnew Action<bool>(this, &FormClientMenu::SetVisibleOfClearButton), false);
		Invoke(gcnew Action<int>(this, &FormClientMenu::SetLength), 558);
		animation_search_bar->Abort();
	}

	private: System::Void SetVisibleOfClearButton(bool visible)
	{
		btnClearText->Visible = visible;
		btnHideSearchRow->Visible = visible;
	}

	private: System::Void SetLength(int first)
	{
		if (first == 1)
			for (first; first <= 558; first++)
				txtSearch->Size = Drawing::Size(first, 30);
		else
			for (first; first >= 0; first--)
				txtSearch->Size = Drawing::Size(first, 30);
	}

	private: System::Void btnShowSearchRow_Click(System::Object^ sender, System::EventArgs^ e) {
		btnShowSearchRow->Visible = false;
		pictureFurfur->Visible = true;
		animation_search_bar = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::ShowSearchRow));
		animation_search_bar->Start();
	}

	private: System::Void btnClearText_Click(System::Object^ sender, System::EventArgs^ e) {
		txtSearch->Text = String::Empty;
	}

	private: System::Void btnHideSearchRow_Click(System::Object^ sender, System::EventArgs^ e) {
		btnShowSearchRow->Visible = true;
		pictureFurfur->Visible = false;
		animation_search_bar = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::HideSearchRow));
		animation_search_bar->Start();
	}
	private:
	   Color onBackColor = Color::MediumSlateBlue;
	   Color onToggleColor = Color::WhiteSmoke;
	   Color offBackColor = Color::Gray;
	   Color offToggleColor = Color::Gainsboro;
	   bool solidStyle = true;
	   GraphicsPath^ GetFigurePath()
	   {
		   int arcSize = toggleEmail2FA->Height - 1;
		   Rectangle leftArc(0, 0, arcSize, arcSize);
		   Rectangle rightArc(toggleEmail2FA->Width - arcSize - 2, 0, arcSize, arcSize);
		   GraphicsPath^ path = gcnew GraphicsPath();
		   path->StartFigure();
		   path->AddArc(leftArc, 90.F, 180.F);
		   path->AddArc(rightArc, 270.F, 180.F);
		   path->CloseFigure();
		   return path;
	   }

	private: System::Void toggleEmail2FA_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int toggleSize = toggleEmail2FA->Height - 5;
		e->Graphics->SmoothingMode = SmoothingMode::AntiAlias;
		e->Graphics->Clear(toggleEmail2FA->Parent->BackColor);
		if (toggleEmail2FA->Checked)
		{
			if (solidStyle)
				e->Graphics->FillPath(gcnew SolidBrush(onBackColor), GetFigurePath());
			else e->Graphics->DrawPath(gcnew Pen(onBackColor, 2), GetFigurePath());
			e->Graphics->FillEllipse(gcnew SolidBrush(onToggleColor),
				Rectangle(toggleEmail2FA->Width - toggleEmail2FA->Height + 1, 2, toggleSize, toggleSize));
		}
		else
		{
			if (solidStyle)
				e->Graphics->FillPath(gcnew SolidBrush(offBackColor), GetFigurePath());
			else e->Graphics->DrawPath(gcnew Pen(offBackColor, 2), GetFigurePath());
			e->Graphics->FillEllipse(gcnew SolidBrush(offToggleColor),
				Rectangle(2, 2, toggleSize, toggleSize));
		}
	}

	private: System::Void panelEdition_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, ((Panel^)sender)->ClientRectangle, Color::Gainsboro, ButtonBorderStyle::Solid);
	}

	private: System::Void btnProfile_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" Profile ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}
	
	private: System::Void btnShop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" Shop ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	private: System::Void btnMyOrders_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" My orders ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	private: System::Void txtProfile_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
	}

	private: System::Void txtCounter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
	}

	private: System::Void btnEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserLogin->Enabled = true;
		btnEditLogin->Visible = false;
		btnSaveEditLogin->Visible = true;
		btnCancelEditLogin->Visible = true;
		txtCurrentUserLogin->Focus();
	}

	private: System::Void btnSaveEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Accounts Set Login=@Login Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", client->getId());
		cmd->Parameters->AddWithValue("@Login", txtCurrentUserLogin->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		client->setLogin(txtCurrentUserLogin->Text);
		btnCancelEditLogin->PerformClick();
	}

	private: System::Void btnCancelEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserLogin->Text = client->getLogin();
		txtCurrentUserLogin->Enabled = false;
		btnEditLogin->Visible = true;
		btnSaveEditLogin->Visible = false;
		btnCancelEditLogin->Visible = false;
		lblLoginPlaceholder->Focus();
	}

	private: System::Void btnEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserEmail->Enabled = true;
		btnEditEmail->Visible = false;
		btnSaveEditEmail->Visible = true;
		btnCancelEditEmail->Visible = true;
		txtCurrentUserEmail->Focus();
	}
		   Thread^ update_email;
		   Void update_email_Start()
		   {
			   String^ charset = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnN1234567890";
			   Random^ rand = gcnew Random();
			   String^ key = "";
			   for (int i = 0; i < 15; i++)
			   {
				   key += (Char)charset[rand->Next(0, charset->Length - 1)];
			   }
			   Invoke(gcnew Action<String^>(this, &FormClientMenu::SendMail), key);
			   Invoke(gcnew Action<String^>(this, &FormClientMenu::SetEmail), key);
		   }
		   Void SendMail(String^ key)
		   {
			   Mailer::SendMail(
				   gcnew MailAddress(txtCurrentUserEmail->Text),
				   "Change E-mail veryfing key",
				   "<h2 style=""margin:0"">Key: " + key + "</h2><br></br>" +
				   "<h2 style=""margin:0"">If you don't do it just ignore this mail.</h2><br></br>" +
				   "© Oleg Voloshyn, 2021. All rights reserved."
			   );
		   }
		   Void SetEmail(String^ key)
		   {
			   if ((gcnew FormPrompt(key))->ShowDialog() == Windows::Forms::DialogResult::Abort)
			   {
				   update_email->Abort();
				   return;
			   }
			   SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
			   dbc->Open();
			   SqlCommand^ cmd = gcnew SqlCommand(
				   "Update Accounts Set Email=@Email Where Id=@Id", dbc);
			   cmd->Parameters->AddWithValue("@Id", client->getId());
			   cmd->Parameters->AddWithValue("@Email", txtCurrentUserEmail->Text);
			   cmd->ExecuteNonQuery();
			   dbc->Close();
			   client->setEmail(txtCurrentUserEmail->Text);
			   btnCancelEditEmail->PerformClick();
			   update_email->Abort();
		   }
	
	private: System::Void btnSaveEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MailAddress^ test = gcnew MailAddress(txtCurrentUserEmail->Text);
		}
		catch (...)
		{
			MessageBox::Show(this, "Email is invalid", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (txtCurrentUserEmail->Text == client->getEmail()) {
			MessageBox::Show(this, "You can't change current email to current email, type new e-mail", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (DBQuery::isExistingEmail(this, txtCurrentUserEmail->Text))
		{
			MessageBox::Show(this, "This e-mail is alredy busy, please type other e-mail", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		update_email = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::update_email_Start));
		update_email->Start();
	}

	private: System::Void btnCancelEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserEmail->Text = client->getEmail();
		txtCurrentUserEmail->Enabled = false;
		btnEditEmail->Visible = true;
		btnSaveEditEmail->Visible = false;
		btnCancelEditEmail->Visible = false;
		lblEmailAddressPlaceholder->Focus();
	}

	private: System::Void btnDeleteAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dr = MessageBox::Show(this, "Your account will be removed permanently without possibility of recovery." +
			" Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (dr == Windows::Forms::DialogResult::Yes)
		{
			DBQuery::DeleteRow(client->getId(), "Accounts");
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}

	private: System::Void btnSavePersonal_Click(System::Object^ sender, System::EventArgs^ e) {
		lblErrFN->Visible = false;
		lblErrLN->Visible = false;
		lblErrCity->Visible = false;
		lblErrCountry->Visible = false;

		if (String::IsNullOrWhiteSpace(txtFirstName->Text))
			lblErrFN->Visible = true;
		
		if (String::IsNullOrWhiteSpace(txtLastName->Text))
			lblErrLN->Visible = true;

		if (!lblErrFN->Visible && !lblErrLN->Visible && txtFirstName->Text + " " + txtLastName->Text != client->getName()) {
			DBQuery::UpdateRow(client->getId(), "Accounts", "Name", txtFirstName->Text + " " + txtLastName->Text);
			client->setName(txtFirstName->Text + " " + txtLastName->Text);
		}

		if (String::IsNullOrWhiteSpace(txtCountry->Text))
			lblErrCountry->Visible = true;
		
		if (!lblErrCountry->Visible && txtCountry->Text != client->getCountry()) {
			DBQuery::UpdateRow(client->getId(), "Accounts", "Country", txtCountry->Text);
			client->setCountry(txtCountry->Text);
		}

		if (String::IsNullOrWhiteSpace(txtCity->Text))
			lblErrCity->Visible = true;
		
		if (!lblErrCity->Visible && txtCity->Text != client->getCity()) {
			DBQuery::UpdateRow(client->getId(), "Accounts", "City", txtCity->Text);
			client->setCity(txtCity->Text);
		}
	}

	private: System::Void btnDiscardGeneralSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		auto name = client->getName()->Split(' ');
		txtFirstName->Text = name[0];
		txtLastName->Text = name[1];
		txtCountry->Text = client->getCountry();
		txtCity->Text = client->getCity();
	}

	private: System::Void btnDiscardPasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentPassword->Text = String::Empty;
		txtNewPassword->Text = String::Empty;
		txtRetypePassword->Text = String::Empty;
	}

	private: System::Void btnSavePasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DBQuery::md5hash(txtCurrentPassword->Text) == client->getPassword() && txtNewPassword->Text == txtRetypePassword->Text) {
			DBQuery::UpdateRow(client->getId(), "Accounts", "Password", DBQuery::md5hash(txtNewPassword->Text));
			txtCurrentPassword->Text = String::Empty;
			txtNewPassword->Text = String::Empty;
			txtRetypePassword->Text = String::Empty;
			(gcnew FormPassChangedNotification(true))->ShowDialog();
		}
		(gcnew FormPassChangedNotification(false))->ShowDialog();
	}
	
	private: System::Void toggleEmail2FA_Click(System::Object^ sender, System::EventArgs^ e) {
		if (toggleEmail2FA->Checked) {
			auto dr = (gcnew Form2FA(client->getId(), client->getEmail(), false))->ShowDialog();
			if (dr == Windows::Forms::DialogResult::OK) {
				lblEmail2FAStatus->Text = "Off";
				toggleEmail2FA->Checked = false;
			}
		}
		else {
			(gcnew Form2FA(client->getId(), client->getEmail(), true))->ShowDialog();
			lblEmail2FAStatus->Text = "On";
			toggleEmail2FA->Checked = true;
		}
	}
};
}

