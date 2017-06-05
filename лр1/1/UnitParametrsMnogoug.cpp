//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UnitMnogoug.h"
#include "UnitParametrsMnogoug.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormParametrsMnogoug *FormParametrsMnogoug;
//---------------------------------------------------------------------------
__fastcall TFormParametrsMnogoug::TFormParametrsMnogoug(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormParametrsMnogoug::Button1Click(TObject *Sender)
{	FormParametrsMnogoug->Close();}
//---------------------------------------------------------------------------

