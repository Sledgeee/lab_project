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

public ref class Mailer
{
	static initonly String^ log_file = "logs.txt";
	static initonly String^ pathToLogo = "C:\\Users\\infab\\Desktop\\icons\\mail_logo.jpg";
public:
	static initonly String^ welcomeSubject = "Welcome to the OV STORE!";
	static initonly String^ welcomeMessage =
		"<h2 style=""margin:0"">Welcome!</h2><br></br>" +
		"<h2 style=""margin:0"">Best regards!</h2><br></br>" +
		"© Oleg Voloshyn, 2021. All rights reserved.";
	static initonly String^ welcomeMessageAdmin =
		"<h2 style=""margin:0"">Welcome!</h2><br></br>" +
		"<h2 style=""margin:0"">Please, wait verification your roots, if owner accept it - activation key will be sent to your E-mail.</h2><br></br>" +
		"<h2 style=""margin:0"">Best regards!</h2><br></br>" +
		"© Oleg Voloshyn, 2021. All rights reserved.";

	static initonly String^ recoverySubject = "Account recovery";

	static Void writeErr(String^ source);
	static Void SendMail(MailAddress^ to, String^ subject, String^ message);
};

