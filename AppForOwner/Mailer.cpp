#include "Mailer.h"

Void Mailer::writeErr(String^ source)
{
	StreamWriter^ sw = gcnew StreamWriter(log_file, true);
	sw->WriteLine(source + " [" + DateTime::Now + "]");
	sw->Close();
}

Void Mailer::SendMail(MailAddress^ to, String^ subject, String^ message)
{
	try {
		String^ body =
			"<html>" +
			"<body" +
			"<table width=""100%"">" +
			"<tr>" +
			"<td style=""font-style:arial; color:maroon; font-weight:bold"">" +
			"<img src=cid:imgID style=""display:block;width:350px;height:100px;""><br>" +
			message +
			"</td>" +
			"</tr>" +
			"</table>" +
			"</body>" +
			"</html>";

		MailMessage^ mail = gcnew MailMessage();
		mail->IsBodyHtml = true;
		AlternateView^ htmlView = AlternateView::CreateAlternateViewFromString(body, nullptr, "text/html");
		LinkedResource^ img = gcnew LinkedResource(pathToLogo);
		img->ContentId = "imgID";
		htmlView->LinkedResources->Add(img);
		mail->AlternateViews->Add(htmlView);
		mail->From = gcnew MailAddress("store.ov.ua@gmail.com");
		mail->To->Add(to);
		mail->Subject = subject;

		SmtpClient^ smtp = gcnew SmtpClient("smtp.gmail.com", 587);
		smtp->EnableSsl = true;
		smtp->DeliveryMethod = SmtpDeliveryMethod::Network;
		smtp->UseDefaultCredentials = false;
		smtp->Credentials = gcnew NetworkCredential("store.ov.ua@gmail.com", "ov_store");
		smtp->Send(mail);
	}
	catch (Exception^ e)
	{
		writeErr(e->Message);
	}
}
