// LaserMarking.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "Main.h"

using namespace LaserMarking;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �إߥ��󱱨���e�A���ҥ� Windows XP ��ı�ƮĪG
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �إߥD�����ð���
	Application::Run(gcnew Main());
	return 0;
}
