//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitCircle.cpp", FormCircle);
USEFORM("UnitStart.cpp", FormStart);
USEFORM("UnitMnogoug.cpp", FormMnogoug);
USEFORM("UnitChisloVershin.cpp", FormChisloVershin);
USEFORM("UnitParametrsMnogoug.cpp", FormParametrsMnogoug);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormStart), &FormStart);
		Application->CreateForm(__classid(TFormCircle), &FormCircle);
		Application->CreateForm(__classid(TFormMnogoug), &FormMnogoug);
		Application->CreateForm(__classid(TFormChisloVershin), &FormChisloVershin);
		Application->CreateForm(__classid(TFormParametrsMnogoug), &FormParametrsMnogoug);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
