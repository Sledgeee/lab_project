#pragma once

using namespace System;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Net::Mime;
using namespace System::Text;
using namespace System::Threading;
using namespace Tasks;

ref class Mailer
{
	static initonly String^ log_file = "logs.txt";
	static initonly String^ pathToLogo = "C:\\Users\\infab\\Desktop\\icons\\mail_logo.jpg";
public:
	static Void writeErr(String^ source);
	static Void SendMail(MailAddress^ to, String^ subject, String^ message);
};

