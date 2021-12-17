#include "FormClientMenu.h"

namespace MainApp {

	Void FormClientMenu::OpenCart()
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

	Void FormClientMenu::ActivateButton(Object^ senderBtn, Color customColor)
	{
		if (senderBtn != nullptr)
		{
			DisableButton();
			this->currentBtn = static_cast<Button^>(senderBtn);
			this->currentBtn->TextAlign = ContentAlignment::MiddleCenter;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleRight;
			this->currentBtn->TextImageRelation = TextImageRelation::TextBeforeImage;
			this->currentBtn->Enabled = false;
			this->currentBtn->BackColor = Color::FromArgb(60,60,60);
			this->currentBtn->ForeColor = customColor;
			this->leftBorderBtn->BackColor = customColor;
			this->leftBorderBtn->Location = System::Drawing::Point(0, currentBtn->Location.Y);
			this->leftBorderBtn->Visible = true;
			this->leftBorderBtn->BringToFront();
		}
	}

	Void FormClientMenu::DisableButton()
	{
		if (currentBtn != nullptr)
		{
			this->currentBtn->TextAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->ImageAlign = ContentAlignment::MiddleLeft;
			this->currentBtn->TextImageRelation = TextImageRelation::ImageBeforeText;
			this->currentBtn->Enabled = true;
			this->currentBtn->BackColor = Color::FromArgb(44, 44, 44);
			this->currentBtn->ForeColor = Color::Gainsboro;
			this->leftBorderBtn->Visible = false;
		}
	}

	GraphicsPath^ FormClientMenu::GetFigurePath()
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

	Void FormClientMenu::ShowSearchRow()
	{
		Invoke(gcnew Action<int>(this, &FormClientMenu::SetLength), 1);
		Invoke(gcnew Action<bool>(this, &FormClientMenu::SetVisibleOfClearButton), true);
		animation_search_bar->Abort();
	}

	Void FormClientMenu::HideSearchRow()
	{
		Invoke(gcnew Action<bool>(this, &FormClientMenu::SetVisibleOfClearButton), false);
		Invoke(gcnew Action<int>(this, &FormClientMenu::SetLength), 558);
		animation_search_bar->Abort();
	}

	Void FormClientMenu::SetVisibleOfClearButton(bool visible)
	{
		btnClearText->Visible = visible;
		btnHideSearchRow->Visible = visible;
	}

	Void FormClientMenu::SetLength(int first)
	{
		if (first == 1)
			for (first; first <= 558; first++)
				txtSearch->Size = Drawing::Size(first, 30);
		else
			for (first; first >= 0; first--)
				txtSearch->Size = Drawing::Size(first, 30);
	}

}