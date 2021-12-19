#include "FormClientMenu.h"

namespace MainApp {

	Void FormClientMenu::FormClientMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		this->btnShop->PerformClick();
		load_editions = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::load_editions_Start));
		load_personal_data = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::load_personal_data_Start));
		load_editions->Start();
		load_personal_data->Start();
		lblCounterProducts->Text = "0";
		lblUserNameTitle->Text += customer->getName();
	}

	Void FormClientMenu::PanelCart_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
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

	Void FormClientMenu::btnProfile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, Color::WhiteSmoke);
		PanelCart->Visible = false;
		flowShop->Visible = false;
		PanelSearchControls->Visible = false;
		PanelProfile->Visible = true;
	}

	Void FormClientMenu::btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, Color::WhiteSmoke);
		PanelCart->Visible = false;
		PanelProfile->Visible = false;
		flowShop->Visible = true;
		PanelSearchControls->Visible = true;
	}

	Void FormClientMenu::OpenChildForm(Form^ childForm)
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

	Void FormClientMenu::btnMyOrders_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, Color::WhiteSmoke);
		PanelCart->Visible = false;
		PanelProfile->Visible = false;
		flowShop->Visible = false;
		PanelSearchControls->Visible = false;
		OpenChildForm(gcnew FormMyOrders(customer));
	}

	Void FormClientMenu::btnCart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		DisableButton();
		OpenCart();
	}

	Void FormClientMenu::btnMyWallet_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentChildForm != nullptr)
		{
			currentChildForm->Close();
		}
		ActivateButton(sender, Color::WhiteSmoke);
		PanelCart->Visible = false;
		PanelProfile->Visible = false;
		flowShop->Visible = false;
		PanelSearchControls->Visible = false;
		OpenChildForm(gcnew FormMyWallet(customer));
	}

	Void FormClientMenu::btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dialogResult = MessageBox::Show(this, "Are you sure you want to log out?", "Log out", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}

	Void FormClientMenu::PanelTitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}

	Void FormClientMenu::panelControls_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ReleaseCapture();
		SendMessage(this->Handle, 0x112, 0xf012, 0);
	}

	Void FormClientMenu::btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	Void FormClientMenu::btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = FormWindowState::Minimized;
	}

	Void FormClientMenu::add_to_cart_Click(System::Object^ sender, System::EventArgs^ e) {
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



	Void FormClientMenu::PanelCheckout_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, this->PanelCheckout->ClientRectangle, Color::FromArgb(0, 160, 70), ButtonBorderStyle::Solid);
	}

	Void FormClientMenu::plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		flowCart->Controls["p" + id]->Controls["ec" + id]->Text =
			(Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) + 1).ToString();
	}

	Void FormClientMenu::minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		if (Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) == 1)
			return;
		flowCart->Controls["p" + id]->Controls["ec" + id]->Text =
			(Int32::Parse(flowCart->Controls["p" + id]->Controls["ec" + id]->Text) - 1).ToString();
	}

	Void FormClientMenu::edition_counter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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

	Void FormClientMenu::btnContinueShopping_Click(System::Object^ sender, System::EventArgs^ e) {
		cart->Refresh();
		if (childPanel == flowShop)
			flowShop->Visible = true;
		else
			PanelProfile->Visible = true;
		PanelCart->Visible = false;

	}

	Void FormClientMenu::btnCheckout_Click(System::Object^ sender, System::EventArgs^ e) {
		Order^ order = gcnew Order(customer, cart, false);
		if (!order->CreateOrder())
		{
			MessageBox::Show(this, "Order was not created, stock haven't given count of once or more of chosen editions", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
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

	Void FormClientMenu::btnEllipsis_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ id = btn->Name->Substring(2);
		auto panel = (Panel^)flowCart->Controls["p" + id];
		panel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
		panel->Controls["br" + id]->Visible = true;
		panel->Controls["br" + id]->BringToFront();
	}

	Void FormClientMenu::btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
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

	Void FormClientMenu::panel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Panel^ panel = (Panel^)sender;
		String^ id = panel->Name->Substring(1);
		if (panel->Controls["br" + id]->Visible) {
			panel->Controls["br" + id]->Visible = false;
			panel->BorderStyle = Windows::Forms::BorderStyle::None;
		}
	}

	Void FormClientMenu::txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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

	Void FormClientMenu::btnShowSearchRow_Click(System::Object^ sender, System::EventArgs^ e) {
		btnShowSearchRow->Visible = false;
		pictureFurfur->Visible = true;
		animation_search_bar = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::ShowSearchRow));
		animation_search_bar->Start();
	}

	Void FormClientMenu::btnClearText_Click(System::Object^ sender, System::EventArgs^ e) {
		txtSearch->Text = String::Empty;
	}

	Void FormClientMenu::btnHideSearchRow_Click(System::Object^ sender, System::EventArgs^ e) {
		btnShowSearchRow->Visible = true;
		pictureFurfur->Visible = false;
		animation_search_bar = gcnew Thread(gcnew ThreadStart(this, &FormClientMenu::HideSearchRow));
		animation_search_bar->Start();
	}

	Void FormClientMenu::toggleEmail2FA_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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

	Void FormClientMenu::panelEdition_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ControlPaint::DrawBorder(e->Graphics, ((Panel^)sender)->ClientRectangle, Color::FromArgb(42,42,42), ButtonBorderStyle::Solid);
	}

	Void FormClientMenu::btnProfile_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" Profile ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	Void FormClientMenu::btnShop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" Shop ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	Void FormClientMenu::btnMyWallet_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" My wallet ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	Void FormClientMenu::btnMyOrders_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Button^ btn = (Button^)sender;
		btn->Text = String::Empty;
		TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
		TextRenderer::DrawText(e->Graphics, (String^)" My orders ", btn->Font, e->ClipRectangle, btn->ForeColor, flags);
	}

	Void FormClientMenu::txtProfile_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
	}

	Void FormClientMenu::txtCounter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
			e->Handled = true;
	}

	Void FormClientMenu::btnEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserLogin->Enabled = true;
		btnEditLogin->Visible = false;
		btnSaveEditLogin->Visible = true;
		btnCancelEditLogin->Visible = true;
		txtCurrentUserLogin->Focus();
	}

	Void FormClientMenu::btnSaveEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand(
			"Update Accounts Set Login=@Login Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", customer->getId());
		cmd->Parameters->AddWithValue("@Login", txtCurrentUserLogin->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		customer->setLogin(txtCurrentUserLogin->Text);
		btnCancelEditLogin->PerformClick();
	}

	Void FormClientMenu::btnCancelEditLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserLogin->Text = customer->getLogin();
		txtCurrentUserLogin->Enabled = false;
		btnEditLogin->Visible = true;
		btnSaveEditLogin->Visible = false;
		btnCancelEditLogin->Visible = false;
		lblLoginPlaceholder->Focus();
	}

	Void FormClientMenu::btnEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserEmail->Enabled = true;
		btnEditEmail->Visible = false;
		btnSaveEditEmail->Visible = true;
		btnCancelEditEmail->Visible = true;
		txtCurrentUserEmail->Focus();
	}

	Void FormClientMenu::btnSaveEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MailAddress^ test = gcnew MailAddress(txtCurrentUserEmail->Text);
		}
		catch (...)
		{
			MessageBox::Show(this, "Email is invalid", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (txtCurrentUserEmail->Text == customer->getEmail()) {
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

	Void FormClientMenu::btnCancelEditEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentUserEmail->Text = customer->getEmail();
		txtCurrentUserEmail->Enabled = false;
		btnEditEmail->Visible = true;
		btnSaveEditEmail->Visible = false;
		btnCancelEditEmail->Visible = false;
		lblEmailAddressPlaceholder->Focus();
	}

	Void FormClientMenu::btnDeleteAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dr = MessageBox::Show(this, "Your account will be removed permanently without possibility of recovery." +
			" Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (dr == Windows::Forms::DialogResult::Yes)
		{
			DBQuery::DeleteRow(customer->getId(), "Accounts");
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}

	Void FormClientMenu::btnSavePersonal_Click(System::Object^ sender, System::EventArgs^ e) {
		lblErrFN->Visible = false;
		lblErrLN->Visible = false;
		lblErrCity->Visible = false;
		lblErrCountry->Visible = false;

		if (String::IsNullOrWhiteSpace(txtFirstName->Text))
			lblErrFN->Visible = true;

		if (String::IsNullOrWhiteSpace(txtLastName->Text))
			lblErrLN->Visible = true;

		if (!lblErrFN->Visible && !lblErrLN->Visible && txtFirstName->Text + " " + txtLastName->Text != customer->getName()) {
			DBQuery::UpdateRow(customer->getId(), "Accounts", "Name", txtFirstName->Text + " " + txtLastName->Text);
			customer->setName(txtFirstName->Text + " " + txtLastName->Text);
		}

		if (String::IsNullOrWhiteSpace(txtCountry->Text))
			lblErrCountry->Visible = true;

		if (!lblErrCountry->Visible && txtCountry->Text != customer->getCountry()) {
			DBQuery::UpdateRow(customer->getId(), "Accounts", "Country", txtCountry->Text);
			customer->setCountry(txtCountry->Text);
		}

		if (String::IsNullOrWhiteSpace(txtCity->Text))
			lblErrCity->Visible = true;

		if (!lblErrCity->Visible && txtCity->Text != customer->getCity()) {
			DBQuery::UpdateRow(customer->getId(), "Accounts", "City", txtCity->Text);
			customer->setCity(txtCity->Text);
		}
	}

	Void FormClientMenu::btnDiscardGeneralSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		auto name = customer->getName()->Split(' ');
		txtFirstName->Text = name[0];
		txtLastName->Text = name[1];
		txtCountry->Text = customer->getCountry();
		txtCity->Text = customer->getCity();
	}

	Void FormClientMenu::btnDiscardPasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		txtCurrentPassword->Text = String::Empty;
		txtNewPassword->Text = String::Empty;
		txtRetypePassword->Text = String::Empty;
	}

	Void FormClientMenu::btnSavePasswordSecurityChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DBQuery::md5hash(txtCurrentPassword->Text) == customer->getPassword() && txtNewPassword->Text == txtRetypePassword->Text) {
			DBQuery::UpdateRow(customer->getId(), "Accounts", "Password", DBQuery::md5hash(txtNewPassword->Text));
			txtCurrentPassword->Text = String::Empty;
			txtNewPassword->Text = String::Empty;
			txtRetypePassword->Text = String::Empty;
			(gcnew FormPassChangedNotification(true))->ShowDialog();
		}
		(gcnew FormPassChangedNotification(false))->ShowDialog();
	}

	Void FormClientMenu::toggleEmail2FA_Click(System::Object^ sender, System::EventArgs^ e) {
		if (toggleEmail2FA->Checked) {
			auto dr = (gcnew Form2FA(customer->getId(), customer->getEmail(), false))->ShowDialog();
			if (dr == Windows::Forms::DialogResult::OK) {
				lblEmail2FAStatus->Text = "Off";
				toggleEmail2FA->Checked = false;
			}
		}
		else {
			(gcnew Form2FA(customer->getId(), customer->getEmail(), true))->ShowDialog();
			lblEmail2FAStatus->Text = "On";
			toggleEmail2FA->Checked = true;
		}
	}
}