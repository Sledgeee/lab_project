#include "DBQuery.h"


Void DBQuery::writeErr(String^ source)
{
	StreamWriter^ sw = gcnew StreamWriter(log_file, true);
	sw->WriteLine(source + " [" + DateTime::Now + "]");
	sw->Close();
}

bool DBQuery::Open()
{
	try
	{
		connect = gcnew SqlConnection(connect_str);
		connect->Open();
		return true;
	}
	catch (Exception^ e)
	{
		writeErr(e->Message);
	}
	return false;
}

void DBQuery::Close()
{
	connect->Close();
}

SqlDataReader^ DBQuery::ExecuteReader(String^ sql)
{
	try {
		SqlCommand^ cmd = gcnew SqlCommand(sql, connect);
		return cmd->ExecuteReader();
	}
	catch (Exception^ e)
	{
		writeErr(e->Message);
	}
	return nullptr;
}

Void DBQuery::DeleteRow(int id, String^ tableName)
{
	try
	{
		this->Open();
		String^ query = "Delete From " + tableName + " Where Id = @Id";
		SqlCommand^ cmd = gcnew SqlCommand(query, connect);
		cmd->Parameters->AddWithValue("@Id", id);
		cmd->ExecuteNonQuery();
		this->Close();
	}
	catch (Exception^ e)
	{
		DBQuery::writeErr(e->Message);
	}
}

array<Object^>^ DBQuery::GetDataFromRequest(int id)
{
	try
	{
		this->Open();
		String^ query = "Select * From RequestsToCreateAdminAccount Where Id=@Id";
		SqlCommand^ cmd = gcnew SqlCommand(query, connect);
		cmd->Parameters->AddWithValue("@Id", id);
		SqlDataReader^ sdr = cmd->ExecuteReader();
		if (sdr->HasRows)
		{
			sdr->Read();
			return gcnew array<Object^>
			{
				sdr["Login"],
				sdr["Passwd"],
				sdr["Email"],
				sdr["Fullname"],
				sdr["Age"],
				sdr["Sex"],
				sdr["Country"],
				sdr["City"]
			};
		}
		this->Open();
	}
	catch (Exception^ e)
	{
		writeErr(e->Message);
	}
}

Void DBQuery::CreateAdmin(int id, String^ key)
{
	array<Object^>^ data = GetDataFromRequest(id);
	try {
		this->Open();
		String^ query = "Insert Into Admins " +
			"(Login, Passwd, Email, Fullname, Age, Sex, Country, City, RootStatus, ActivationKey) " +
			"Values (@Login, @Passwd, @Email, @Fullname, @Age, @Sex, @Country, @City, @RootStatus, @ActivationKey)";
		SqlCommand^ cmd = gcnew SqlCommand(query, connect);
		cmd->Parameters->AddWithValue("@Login", data[0]->ToString());
		cmd->Parameters->AddWithValue("@Passwd", data[1]->ToString());
		cmd->Parameters->AddWithValue("@Email", data[2]->ToString());
		cmd->Parameters->AddWithValue("@Fullname", data[3]->ToString());
		cmd->Parameters->AddWithValue("@Age", data[4]->ToString());
		cmd->Parameters->AddWithValue("@Sex", data[5]->ToString());
		cmd->Parameters->AddWithValue("Country", data[6]->ToString());
		cmd->Parameters->AddWithValue("City", data[7]->ToString());
		cmd->Parameters->AddWithValue("@RootStatus", 0);
		cmd->Parameters->AddWithValue("@ActivationKey", key);
		cmd->ExecuteNonQuery();
		this->Close();
	}
	catch (Exception^ e)
	{
		writeErr(e->Message);
	}
}
