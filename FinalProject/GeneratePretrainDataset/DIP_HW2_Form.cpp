#include "DIP_HW2_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DIPHW2::DIP_HW2_Form form;
	Application::Run(%form);

}