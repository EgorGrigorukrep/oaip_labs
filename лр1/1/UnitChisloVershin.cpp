//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UnitStart.h"
#include "UnitMnogoug.h"
#include "UnitChisloVershin.h"
#include "UnitDraw.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int KolVersh;
TFormChisloVershin *FormChisloVershin;
//---------------------------------------------------------------------------
__fastcall TFormChisloVershin::TFormChisloVershin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormChisloVershin::Edit1Click(TObject *Sender)
{	Edit1->Text="";}
//---------------------------------------------------------------------------
void __fastcall TFormChisloVershin::Edit1Enter(TObject *Sender)
{	Edit1->Text="";}
//---------------------------------------------------------------------------
void __fastcall TFormChisloVershin::Edit1Exit(TObject *Sender)
{	if (Edit1->Text=="") Edit1->Text="3";}
//---------------------------------------------------------------------------
void __fastcall TFormChisloVershin::Button1Click(TObject *Sender)
{
	KolVersh=StrToInt(Edit1->Text);
	if (KolVersh>10) {
		ShowMessage("Не более 10-ти сторон!");
		Edit1->Text="3";
	}
	else {
		FormMnogoug->Left=0;
		FormMnogoug->Top=0;
		FormMnogoug->ClientHeight=1010;
		FormMnogoug->ClientWidth=FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+1010;
		FormMnogoug->Shape1->Height=FormMnogoug->ClientHeight;
		FormMnogoug->Show();
		drawMnogoug();
		FormChisloVershin->Close();
	}
}
//---------------------------------------------------------------------------
