#include "Session.h"

Session::Session()
{
	this->id = 0;
	this->login = "";
	this->passwd = "";
	this->email = "";
}

Session::Session(String^ login, String^ password)
{
	this->login = login;
	this->passwd = password;
}

Session::Session(Int32 id, String^ login, String^ password, String^ email)
{
	this->id = id;
	this->login = login;
	this->passwd = password;
	this->email = email;
}

Session::~Session() {}

Void Session::CreateSession()
{
	try {
		FileStream^ fs = gcnew FileStream(session_filename, FileMode::Create);
		BinaryWriter^ bw = gcnew BinaryWriter(fs);
		bw->Write(this->id);
		bw->Write(this->login);
		bw->Write(this->passwd);
		bw->Write(this->email);
		fs->Close();
	}
	catch (Exception^ e)
	{
		Mailer::writeErr(e->Message);
		return;
	}
}

Void Session::ReadSession()
{
	try {
		FileStream^ fs = gcnew FileStream(session_filename, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		this->id = br->ReadInt32();
		this->login = br->ReadString();
		this->passwd = br->ReadString();
		this->email = br->ReadString();
		fs->Close();
	}
	catch (Exception^ e)
	{
		Mailer::writeErr(e->Message);
		return;
	}
}
