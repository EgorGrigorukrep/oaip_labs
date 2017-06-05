//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
#include "UnitList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

List list;
bool wasFirst=false;

void __fastcall TForm1::ButtonAddClick(TObject *Sender)
{
	int amount,cehNumber;
	bool isRight=true;

	try{
		amount=Edit2->Text.ToInt();
	}
	catch(EConvertError&){
		Application->MessageBox(String("Вводите натуральные числа, меньшие 2.147e+10").w_str(),String("Неправильный ввод").w_str(),MB_OK|MB_ICONSTOP);
		Edit2->Text="";
		isRight=false;
	}
	try{
		cehNumber=Edit3->Text.ToInt();
	}
	catch(EConvertError&){
		Application->MessageBox(String("Вводите натуральные числа, меньшие 2.147e+10").w_str(),String("Неправильный ввод").w_str(),MB_OK|MB_ICONSTOP);
		Edit3->Text="";
		isRight=false;
	}

	if (wasFirst==false && isRight==true) {
		list.addFirstElement(Edit1->Text,amount,cehNumber);
		wasFirst=true;
		ButtonShow->Click();
		Button4->Enabled=true;
		Button5->Enabled=true;
	}
	else if(isRight==true){
		list.addElement(Edit1->Text,amount,Edit3->Text.ToInt());
		ButtonShow->Click();
	}
}
//---------------------------------------------------------------------------

void stringGridClear(){
	int i;
	for (i = 0; i < Form1->StringGrid1->ColCount; i++) {
		Form1->StringGrid1->Cols[i]->Clear();
	}
}

void __fastcall TForm1::ButtonShowClick(TObject *Sender)
{
	if (StringGrid1->Cells[0][6]!="") {
		StringGrid1->RowCount++;
	}
	if (StringGrid1->RowCount>7) {
		StringGrid1->ScrollBars=ssVertical;
	}
	list.showList();
	ButtonShow->Visible=false;
	Button1->Visible=true;
	Button2->Visible=true;
	Button3->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	stringGridClear();
	list.findProduction(EditProduction->Text);
	ButtonShow->Left=Button1->Left;
	ButtonShow->Top=Button1->Top;
	ButtonShow->Visible=true;
	Button1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int number;
	bool isRight=true;
	try{
		number=EditCEH->Text.ToInt();
	}
	catch(EConvertError&){
		Application->MessageBox(String("Вводите натуральные числа, меньшие 2.147e+10").w_str(),String("Неправильный ввод").w_str(),MB_OK|MB_ICONSTOP);
		EditCEH->Text="";
		isRight=false;
	}
	if (isRight==true) {
		stringGridClear();
		list.findCEH(number);
		ButtonShow->Left=Button2->Left;
		ButtonShow->Top=Button2->Top;
		ButtonShow->Visible=true;
		Button2->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	list.~List();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	int amount;
	bool isRight=true;
	try{
		amount=EditAmount->Text.ToInt();
	}
	catch(EConvertError&){
		Application->MessageBox(String("Вводите натуральные числа, меньшие 2.147e+10").w_str(),String("Неправильный ввод").w_str(),MB_OK|MB_ICONSTOP);
		EditAmount->Text="";
		isRight=false;
	}
	if (isRight==true) {
		stringGridClear();
		list.findAmount(amount);
		ButtonShow->Left=Button3->Left;
		ButtonShow->Top=Button3->Top;
		ButtonShow->Visible=true;
		Button3->Visible=false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	stringGridClear();
	wasFirst=list.deleteProduction(EditDelete->Text);
	ButtonShow->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Click(TObject *Sender)
{
	Edit2->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3Click(TObject *Sender)
{
	Edit3->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditProductionClick(TObject *Sender)
{
	EditProduction->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditCEHClick(TObject *Sender)
{
	EditCEH->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditAmountClick(TObject *Sender)
{
	EditAmount->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditDeleteClick(TObject *Sender)
{
	EditDelete->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	stringGridClear();
	wasFirst=list.deleteLast();
	ButtonShow->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
	Form1->PopupMenu=PopupMenu1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N1Click(TObject *Sender)
{
	N1->Checked=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
	N2->Checked=true;
}
//---------------------------------------------------------------------------


