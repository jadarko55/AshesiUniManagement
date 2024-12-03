#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;


int main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AshesiUniManagement::LoginForm form;
	Application::Run(% form);


}