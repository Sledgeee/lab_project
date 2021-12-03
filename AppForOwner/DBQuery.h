#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Data;
using namespace Sql;
using namespace SqlClient;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Security::Cryptography;


ref class DBQuery
{
	SqlConnection^ connect;
	static initonly String^ connect_str =
		"Data Source=DESKTOP-29B12F8;Initial Catalog=OVStore;Integrated Security=True;" +
		"Connect Timeout = 30; Encrypt = False; TrustServerCertificate = False;" +
		"ApplicationIntent = ReadWrite; MultiSubnetFailover = False";
	static initonly String^ log_file = "logs.txt";
public:
	static initonly String^ tableAdmins = "Admins";
	static initonly String^ tableRequestsToCreateAdminAccount = "RequestsToCreateAdminAccount";
	static Void writeErr(String^ source);
	bool Open();
	void Close();
	SqlDataReader^ ExecuteReader(String^ sql);
	Void DeleteRow(int id, String^ tableName);
	array<Object^>^ GetDataFromRequest(int id);
	Void CreateAdmin(int id, String^ key);
};

