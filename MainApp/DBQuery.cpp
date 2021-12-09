#include "DBQuery.h"

String^ DBQuery::md5hash(String^ source)
{
	System::Text::StringBuilder hash;
	MD5^ md5 = MD5::Create();
	try {
		array<unsigned char>^ data = md5->ComputeHash(System::Text::Encoding::UTF8->GetBytes(source));
		for (int i = 0; i < data->Length; ++i)
		{
			hash.Append(data[i].ToString("x2"));
		}
	}
	finally
	{
		delete md5;
	}
	return hash.ToString();
}

Void DBQuery::InsertData(Account^ account)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ sql = String::Format("Insert Into Accounts " +
		"(Login, Password, Email, Name, Country, City, Money, Root, TwoFactor, DateAccountCreate) " +
		"Values (@Login, @Password, @Email, @Name, @Country, @City, @Money, @Root, @TwoFactor, @DateAccountCreate)");
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand(sql, dbc);
	cmd->Parameters->AddWithValue("@Login", account->getLogin());
	cmd->Parameters->AddWithValue("@Password", md5hash(account->getPassword()));
	cmd->Parameters->AddWithValue("@Email", account->getEmail());
	cmd->Parameters->AddWithValue("@Name", account->getName());
	cmd->Parameters->AddWithValue("@Country", account->getCountry());
	cmd->Parameters->AddWithValue("@City", account->getCity());
	cmd->Parameters->AddWithValue("@Money", account->getMoney());
	cmd->Parameters->AddWithValue("@Root", "Client");
	cmd->Parameters->AddWithValue("@TwoFactor", false);
	cmd->Parameters->AddWithValue("@DateAccountCreate", DateTime::Now);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

bool DBQuery::isNewRegisterData(Form^ form, String^ login, String^ email)
{
	bool login_free = true, email_free = true;
	SqlConnection^ dbc1 = gcnew SqlConnection(connect_str);
	dbc1->Open();
	SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Login FROM Accounts WHERE Login='"+login+"'", dbc1);
	SqlDataReader^ sdr1 = cmd1->ExecuteReader();
	if (sdr1->HasRows)
	{
		while (sdr1->Read()) {
			if (sdr1["Login"]->ToString() == login)
				login_free = false;
		}
	}
	dbc1->Close();
	SqlConnection^ dbc2 = gcnew SqlConnection(connect_str);
	dbc2->Open();
	SqlCommand^ cmd2 = gcnew SqlCommand("SELECT Email FROM Accounts WHERE Email='"+email+"'", dbc2);
	SqlDataReader^ sdr2 = cmd2->ExecuteReader();
	if (sdr2->HasRows)
	{
		while (sdr2->Read()) {
			if (sdr2["Email"]->ToString() == email)
				email_free = false;
		}
	}
	dbc2->Close();
	String^ result = "";
	if (!login_free && !email_free)
		result = "Login and email is already busy";
	else if (!login_free)
		result = "Login is already busy";
	else if (!email_free)
		result = "Email is already busy";
	if (result != "")
	{
		MessageBox::Show(form, result, "Warning", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return false;
	}
	return true;
}

Account^ DBQuery::isRightData(String^ login, String^ password)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ query = "Select * From Accounts Where Login = @Login And Password = @Password";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbc);
	String^ hashPassword = md5hash(password);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@Password", hashPassword);
	dbc->Open();
	SqlDataReader^ sdr = cmd->ExecuteReader();
	Account^ account = gcnew Account;
	if (sdr->HasRows)
	{
		while (sdr->Read()) {
			if (sdr["Login"]->ToString() == login && sdr["Password"]->ToString() == hashPassword)
			{
				account->setId((int)sdr["Id"]);
				account->setLogin(sdr["Login"]->ToString());
				account->setPassword(sdr["Password"]->ToString());
				account->setEmail(sdr["Email"]->ToString());
				account->setName(sdr["Name"]->ToString());
				account->setCountry(sdr["Country"]->ToString());
				account->setCity(sdr["City"]->ToString());
				account->setMoney((float)Convert::ToDouble(sdr["Money"]));
				account->setRoot(sdr["Root"]->ToString());
				account->set2FA(Convert::ToBoolean(sdr["TwoFactor"]));
				return account;
			}
		}
	}
	dbc->Close();
	return nullptr;
}

bool DBQuery::isExistingEmail(Form^ form, String^ email)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * From Accounts Where Email = @Email", dbc);
	cmd->Parameters->AddWithValue("@Email", email);
	SqlDataReader^ sdr = cmd->ExecuteReader();
	if (!sdr->HasRows)
	{
		MessageBox::Show(form, "Account with the specified email not found", "Warning",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbc->Close();
		return false;
	}
	dbc->Close();
	return true;
}

Void DBQuery::UpdatePasswd(String^ passwd, String^ email)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Update Accounts Set Password = @Password Where Email = @Email", dbc);
	cmd->Parameters->AddWithValue("@Password", md5hash(passwd));
	cmd->Parameters->AddWithValue("@Email", email);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

Void DBQuery::UpdateRow(Int32 id, String^ tableName, String^ columnName, String^ value)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand(
		"Update " + tableName + " Set " + columnName + "=@Value Where Id=@Id", dbc);
	cmd->Parameters->AddWithValue("@Id", id);
	cmd->Parameters->AddWithValue("@Value", value);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

Void DBQuery::DeleteRow(Int32 id, String^ tableName)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Delete From " + tableName + " Where Id=@Id", dbc);
	cmd->Parameters->AddWithValue("@Id", id);
	cmd->ExecuteNonQuery();
	dbc->Close();
}
