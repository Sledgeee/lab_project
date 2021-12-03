#include "DBQuery.h"

/*
* Database

	Clients column names in ascending order of indexes:
	0 - Id
	1 - Login
	2 - Email
	3 - Passwd
	4 - Fullname
	5 - Age
	6 - Sex
	7 - Country
	8 - City
	9 - Money
*/


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

Void DBQuery::InsertData(String^ login, String^ passwd, String^ email, String^ name, Int32 age, String^ sex, String^ country, String^ city, float money)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ sql = String::Format("Insert Into Clients " +
		"(Login, Passwd, Email, Fullname, Age, Sex, Country, City, Money) " +
		"Values (@Login, @Passwd, @Email, @Fullname, @Age, @Sex, @Country, @City, @Money)");
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand(sql, dbc);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@Passwd", md5hash(passwd));
	cmd->Parameters->AddWithValue("@Email", email);
	cmd->Parameters->AddWithValue("@Fullname", name);
	cmd->Parameters->AddWithValue("@Age", age);
	cmd->Parameters->AddWithValue("@Sex", sex);
	cmd->Parameters->AddWithValue("@Country", country);
	cmd->Parameters->AddWithValue("@City", city);
	cmd->Parameters->AddWithValue("@Money", money);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

Void DBQuery::CreateRequestToCreateAdminAccount(String^ login, String^ passwd, String^ email, String^ name, Int32 age, String^ sex, String^ country, String^ city)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ sql = String::Format("Insert Into RequestsToCreateAdminAccount" +
		"(Login, Passwd, Email, Fullname, Age, Sex, Country, City, DateTime) " +
		"Values (@Login, @Passwd, @Email, @Fullname, @Age, @Sex, @Country, @City, @DateTime)");
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand(sql, dbc);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@Passwd", md5hash(passwd));
	cmd->Parameters->AddWithValue("@Email", email);
	cmd->Parameters->AddWithValue("@Fullname", name);
	cmd->Parameters->AddWithValue("@Age", age);
	cmd->Parameters->AddWithValue("@Sex", sex);
	cmd->Parameters->AddWithValue("@Country", country);
	cmd->Parameters->AddWithValue("@City", city);
	cmd->Parameters->AddWithValue("@DateTime", DateTime::Now);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

bool DBQuery::isNewRegisterData(Form^ form, String^ login, String^ email)
{
	bool login_free = true, email_free = true;
	SqlConnection^ dbc1 = gcnew SqlConnection(connect_str);
	dbc1->Open();
	SqlCommand^ cmd1 = gcnew SqlCommand("Select Login From Clients Where Login=@Login", dbc1);
	cmd1->Parameters->AddWithValue("@Login", login);
	SqlDataReader^ sdr1 = cmd1->ExecuteReader();
	if (sdr1->HasRows)
	{
		login_free = false;
	}
	dbc1->Close();
	SqlConnection^ dbc2 = gcnew SqlConnection(connect_str);
	dbc2->Open();
	SqlCommand^ cmd2 = gcnew SqlCommand("Select Email From Clients Where Email=@Email", dbc2);
	cmd2->Parameters->AddWithValue("@Email", email);
	SqlDataReader^ sdr2 = cmd2->ExecuteReader();
	if (sdr2->HasRows)
	{
		email_free = false;
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
		MessageBox::Show(form, result, "Information", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		return false;
	}
	return true;
}

int DBQuery::isRightDataAdmin(String^ login, String^ passwd)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ query = "Select Login, Passwd, RootStatus From Admins Where Login = @Login And Passwd = @Passwd";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbc);
	String^ hashPasswd = md5hash(passwd);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@Passwd", hashPasswd);
	dbc->Open();
	SqlDataReader^ sdr = cmd->ExecuteReader();
	bool isRight = false;
	Int32 rt = 0;
	if (sdr->HasRows)
	{
		sdr->Read();
		if (sdr["Login"]->ToString() == login && sdr["Passwd"]->ToString() == hashPasswd)
		{
			isRight = true;
		}
		if (isRight) rt = Convert::ToInt32(sdr["RootStatus"]);
	}
	dbc->Close();
	if (isRight && rt == 1)
	{
		return 0;
	}
	else if(isRight) {
		return 1;
	}
	else {
		return 2;
	}
}

bool DBQuery::isRightDataClient(String^ login, String^ passwd)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	String^ query = "Select * From Clients Where Login = @Login And Passwd = @Passwd";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbc);
	String^ hashPasswd = md5hash(passwd);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@Passwd", hashPasswd);
	dbc->Open();
	SqlDataReader^ sdr = cmd->ExecuteReader();
	bool isRight = false;
	if (sdr->HasRows)
	{
		sdr->Read();
		if (sdr["Login"]->ToString() == login && sdr["Passwd"]->ToString() == hashPasswd)
		{
			isRight = true;
		}
	}
	dbc->Close();
	if (!isRight) {
		return false;
	}
	return true;
}

bool DBQuery::isExistingEmail(Form^ form, String^ email)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * From Clients Where Email = @Email", dbc);
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
	SqlCommand^ cmd = gcnew SqlCommand("Update Clients Set Passwd = @Passwd Where Email = @Email", dbc);
	cmd->Parameters->AddWithValue("@Passwd", md5hash(passwd));
	cmd->Parameters->AddWithValue("@Email", email);
	cmd->ExecuteNonQuery();
	dbc->Close();
}

Void DBQuery::UpdateRootStatus(String^ login, bool status)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Update Admins Set RootStatus=@RootStatus Where Login=@Login", dbc);
	cmd->Parameters->AddWithValue("@Login", login);
	cmd->Parameters->AddWithValue("@RootStatus", status);
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

bool DBQuery::VerifyKey(String^ key, String^ login)
{
	SqlConnection^ dbc = gcnew SqlConnection(connect_str);
	dbc->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select ActivationKey From Admins Where Login=@Login", dbc);
	cmd->Parameters->AddWithValue("@Login", login);
	SqlDataReader^ sdr = cmd->ExecuteReader();
	if (sdr->HasRows)
	{
		sdr->Read();
		if (sdr["ActivationKey"]->ToString() == key)
		{
			dbc->Close();
			return true;
		}
	}
	dbc->Close();
	return false;
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