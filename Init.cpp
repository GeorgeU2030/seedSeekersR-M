#include "Init.h"
using namespace System;

using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    seedSeekers::Init form;

    Application::Run(% form);
}

