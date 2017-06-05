//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UnitStart.h"
#include "UnitCircle.h"
#include "UnitDraw.h"
#include "UnitChisloVershin.h"
#include "Mnogoug.h"
#include "UnitMnogoug.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormStart *FormStart;
//---------------------------------------------------------------------------
__fastcall TFormStart::TFormStart(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormStart::ComboBox1Change(TObject *Sender)
{
	if (ComboBox1->Text=="1.Круг") {
		FormCircle->Left=0;
		FormCircle->Top=0;
		FormCircle->ClientHeight=1010;
		FormCircle->ClientWidth=FormCircle->Shape1->Left+FormCircle->Shape1->Width+1010;
		FormCircle->Shape1->Height=FormCircle->ClientHeight;
		FormCircle->Show();
		draw();
	}
	if (ComboBox1->Text=="2.Многоугольник") {
		FormMnogoug->Left=0;
		FormMnogoug->Top=0;
		FormMnogoug->Show();
		drawMnogoug();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormStart::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
