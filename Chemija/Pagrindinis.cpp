#include "Pagrindinis.h"
#include <cmath>
#include <fstream>
#include <string>
#include <locale.h>

using namespace Chemija; // The name of the namespace in MyForm.h
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Run this program in STA mode
int main(array<System::String ^> ^args)
{
	setlocale(LC_ALL,"Lithuanian");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Chemija::Pagrindinis form;
	Application::Run(%form);
}
