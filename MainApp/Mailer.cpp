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

Void Mailer::SendSecurityCode(MailAddress^ to, String^ code)
{
	try {
		String^ body =
			"<html>" +
			"<body" +
            "<div id = "":1ut"" class = ""ii gt"" jslog = ""20277""; ""u014N:xr6bB; 4:W251bGwsbnVsbCxbXV0."">"
            "<div id = "":1us"" class = ""a3s aiL "">" +
            "<div class = ""adM"">" +
            "</div>" +
            "<table border = ""0"" cellpadding = ""0"" cellspacing = ""0""" +
            " style = ""border-collapse:separate;background-color:#f6f6f6;background-image:url(https://ci5.googleusercontent.com/proxy/DbYaX2yV8PZiUqzFp5SttQgikNDG4EEJzsDtBmM9gBIp3FTPHbVETCt-YIOEK8we3vx07VIIQ_yNcFalwVbHZYBsh1job2TXYh2vG1C38A=s0-d-e1-ft#https://static2.cdn.ubi.com/email/images/grey-background.png);background-repeat:repeat;width:100%"">" +
            "<tbody>" +
            "<tr>" +
            "<td style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top"">&nbsp;</td>" +
            "<td" +
            " style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top;display:block;max-width:750px;padding:10px;width:750px;Margin:0 auto!important;width:auto!important"">" +
            "<div style = ""box-sizing:border-box;display:block;Margin:0 auto;max-width:750px;padding:10px"">" +
            "<table width = ""100%""" +
            " style = ""border-collapse:separate;background-image:url('https://ci5.googleusercontent.com/proxy/Jv0rZ1hC5fEclG3F6lLYBaS4f_ZEBFyB4WhbjPWswvCkpdtRse2x84nbfb0aKURX6qNRVSnO4MA8cmW_Yh8Qih0yYIA=s0-d-e1-ft#https://static-cp.akamaized.net/ubi_1px_white.png');background-repeat:no-repeat;background-size:100% 100%;border-radius:0px;border-spacing:0px;width:100%"">" +
            "<tbody>"+
            "<tr>"+
            "<td width = ""100%"""+
            " style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top;box-sizing:border-box;padding:0px"">"+
            "<table border = ""0"" cellpadding = ""0"" cellspacing = ""0"" width = ""100%"""+
            " style = ""border-collapse:separate;width:100%;border-top:5px solid #696969;border-bottom:9px solid #696969"">"+
            "<tbody>"+
            "<tr>"+
            "<td"+
            " style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top"">"+
            "<img src=cid:imgID></td>"+
            "</tr>"+
            "</tbody>"+
            "</table>"+
            "</td>"+
            "</tr>"+
            "</tbody>"+
            "</table>"+
            "<table"+
            " style = ""border-collapse:separate;background:#fff;border-radius:0px;width:100%;margin-bottom:30px"">"+
            "<tbody>"+
            "<tr>"+
            "<td"+
            " style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top;box-sizing:border-box;padding:20px"">"+
            "<table border = ""0"" cellpadding = ""0"" cellspacing = ""0"""+
            " style = ""border-collapse:separate;width:100%"">"+
            "<tbody>"+
            "<tr>"+
            "<td"+
            " style = ""font-family:Verdana,sans-serif;font-size:14px;vertical-align:top"">"+
            "<p style = ""margin-bottom:15px;list-style-type:disc"">"+
            "Hello!</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc""><br>"+
            "</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc"">It's "+
            "your security code to sign in "+
            "<span class = ""il"">OV STORE</span>:"+
            "</p><b>"+
            "<p"+
            " style = ""font-size:18px;margin-bottom:15px;list-style-type:disc"">"+
            code + "</p >" +
            "</b>" +
            "<p style = ""margin-bottom:15px;list-style-type:disc""><span"+
            " style = ""background-color:transparent""><br></span>"+
            "</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc"">It is required to confirm that you are the owner of the account.</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc""><span"+
            " style = ""background-color:transparent""><br></span>"+
            "</p><b>" +
            "<p style = ""margin-bottom:15px;list-style-type:disc"">"+
            "If it's not you</p>"+
            "</b>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc"">"+
            "We recommend changing your account password <span"+
            " class = ""il"">OV STORE</span></strong></a>,"+
            " as well as the password for the mailbox to secure the account.</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc""><br>"+
            "</p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc""><span"+
            " style = ""background-color:transparent"">We thank you for your attention, </span></p>"+
            "<p style = ""margin-bottom:15px;list-style-type:disc""><span" +
            " style = ""background-color:transparent""><span" +
            " class = ""il"">OV STORE</span></span><br></p>" +
            "</td>" +
            "</tr>" +
            "</tbody>" +
            "</table>" +
            "</td>" +
            "</tr>" +
            "</tbody>" +
            "</table>" +
            "<div style = ""clear:both;padding-top:10px;text-align:center;width:100%"">" +
            "<table border = ""0"" cellpadding = ""0"" cellspacing = ""0""" +
            " style = ""border-collapse:separate;width:100%"">" +
            "<tbody>"+
            "<tr>"+
            "<td"+
            " style = ""vertical-align:top;font-family:Verdana,sans-serif;font-size:12px;text-align:center"">"+
            "<p"+
            " style = ""color:rgb(153,153,153);font-family:Verdana,sans-serif;font-size:12px;font-weight:normal;margin:0px 0px 15px;list-style-type:disc;text-align:center"">" +
            "©2021 <span class = ""il"">OV STORE</span> Company.All rights" +
            " reserved. <span class = ""il"">OV STORE</span> and the <span" +
            " class = ""il"">OV STORE</span> logo are trademarks of <span" +
            " class = ""il"">OV STORE</span> Company in the U.S. and/or" +
            " other countries.</p>" +
            "</td>" +
            "</tr>" +
            "</tbody>" +
            "</table>" +
            "</div>" +
            "</div>" +
            "</td>" +
            "</tr>" +
            "</tbody>" +
            "</table>" +
            "</div>" +
            "</div>" +
            "</div>" +
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
        mail->Subject = "Security code OV STORE";

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
