#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppForOwner::FormMain form;
	Application::Run(% form);
}