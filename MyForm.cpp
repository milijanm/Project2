#include "MyForm.h"





namespace Projec1{
	using namespace System;
	using namespace System::Windows::Forms;
	


	[STAThreadAttribute]
	void Main(array<String^>^ args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		Project1::MyForm form;
		Application::Run(%form);


	}
}


