#include "FormClientMenu.h"

namespace MainApp {

	Void FormClientMenu::load_editions_Start()
	{
		Invoke(gcnew Action(this, &FormClientMenu::LoadEditions));
	}

	Void FormClientMenu::LoadEditions()
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

	Void FormClientMenu::load_personal_data_Start()
	{
		Invoke(gcnew Action(this, &FormClientMenu::LoadPersonalData));
	}

	Void FormClientMenu::LoadPersonalData()
	{
		lblCurrentUserID->Text = customer->getId().ToString();
		txtCurrentUserLogin->Text = customer->getLogin()->ToString();
		txtCurrentUserEmail->Text = customer->getEmail()->ToString();
		auto user_name = (customer->getName())->Split(' ');
		txtFirstName->Text = user_name[0];
		txtLastName->Text = user_name[1];
		txtCountry->Text = customer->getCountry();
		txtCity->Text = customer->getCity();
		bool TWO_FACTOR = customer->get2FA();
		if (TWO_FACTOR) {
			toggleEmail2FA->Checked = true;
			lblEmail2FAStatus->Text = "On";
		}
		load_personal_data->Abort();
	}

	Void FormClientMenu::update_email_Start()
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
	Void FormClientMenu::SendMail(String^ key)
	{
		Mailer::SendMail(
			gcnew MailAddress(txtCurrentUserEmail->Text),
			"Change E-mail veryfing key",
			"<h2 style=""margin:0"">Key: " + key + "</h2><br></br>" +
			"<h2 style=""margin:0"">If you don't do it just ignore this mail.</h2><br></br>" +
			"© Oleg Voloshyn, 2021. All rights reserved."
		);
	}
	Void FormClientMenu::SetEmail(String^ key)
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
		cmd->Parameters->AddWithValue("@Id", customer->getId());
		cmd->Parameters->AddWithValue("@Email", txtCurrentUserEmail->Text);
		cmd->ExecuteNonQuery();
		dbc->Close();
		customer->setEmail(txtCurrentUserEmail->Text);
		btnCancelEditEmail->PerformClick();
		update_email->Abort();
	}

}