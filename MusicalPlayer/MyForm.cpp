#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

	//render of text and enabling visual styles

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	//do a "form" from MyFrom class
	MusicalPlayer::MyForm form;


	form.MaximizeBox = false;
	
	//run "form"
	Application::Run(%form);

}