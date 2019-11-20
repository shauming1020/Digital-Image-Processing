#include "DIP_HW1_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DIP_HW1::DIP_HW1_Form form;
	Application::Run(%form);

}