#include "FormStartUp.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MainApp::FormStartUp form;
	Application::Run(% form);
}