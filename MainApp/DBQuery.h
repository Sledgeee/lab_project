#pragma once
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>
#using <mscorlib.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Runtime::InteropServices;
using namespace System::Xml;
using namespace Sql;
using namespace SqlClient;
using namespace std;
using namespace System::Security::Cryptography;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Security;
using namespace System::Net::Sockets;
using namespace System::Net::WebSockets;
using namespace System::Text;

public ref class DBQuery
{
	static initonly String^ log_file = "logs.txt";
public:
	static initonly String^ connect_str =
		"Data Source=DESKTOP-29B12F8;Initial Catalog=OVStore;Integrated Security=True;" +
		"Connect Timeout = 30; Encrypt = False; TrustServerCertificate = False;" +
		"ApplicationIntent = ReadWrite; MultiSubnetFailover = False";
	static Void InsertData(String^ login, String^ passwd, String^ email, String^ name,
		Int32 age, String^ sex, String^ country, String^ city, float money);
	static Void CreateRequestToCreateAdminAccount(String^ login, String^ passwd, String^ email, String^ name, Int32 age, String^ sex, String^ country, String^ city);
	static bool isNewRegisterData(Form^ form, String^ login, String^ email);
	static bool isRightDataClient(String^ login, String^ passwd);
	static int isRightDataAdmin(String^ login, String^ passwd);
	static bool isExistingEmail(Form^ form, String^ email);
	static Void UpdatePasswd(String^ passwd, String^ email);
	static Void UpdateRootStatus(String^ login, bool status);
	static bool VerifyKey(String^ key, String^ login);
	static String^ md5hash(String^ source);
	static Void DeleteRow(Int32 id, String^ tableName);
	static Void UpdateRow(Int32 id, String^ tableName, String^ columnName, String^ value);
};

