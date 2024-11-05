#include "main.h"



using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }


using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew newprject::main());
	return 0;
}

