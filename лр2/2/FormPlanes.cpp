//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Schedule.h"
#include "Form.h"
#include "FormPlanes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPlane *FormPlane;
//---------------------------------------------------------------------------
__fastcall TFormPlane::TFormPlane(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString filePlanes="d:\\учеба\\ОАиП\\лр вып 2\\лр2\\2\\Win32\\Debug\\planes.txt";
int Counter=0;
void __fastcall TFormPlane::FormActivate(TObject *Sender)
{
	Button1->Click();
	TFileStream* f;
	int amount;
	f=new TFileStream(filePlanes,fmOpenRead);
	f->Read(&amount,sizeof(int));
	delete f;
	StringGrid1->RowCount=amount+1;
	StringGrid1->ColCount=3;
	if (StringGrid1->DefaultRowHeight*(amount+1)<600) StringGrid1->Height=StringGrid1->DefaultRowHeight*(amount+1)+amount;
	else StringGrid1->Height=600+amount;
	StringGrid1->Cells[0][0]="Тип самолета";
	StringGrid1->Cells[1][0]="Год выпуска";
	StringGrid1->Cells[2][0]="Расход топлива";
	Aircraft* planes=new Aircraft[amount];
	f=new TFileStream(filePlanes,fmOpenReadWrite);
	f->Seek(sizeof(int),soBeginning);
	f->Read(planes,sizeof(class Aircraft)*amount);
	int i;
	for (i = 0; i < amount; i++) {
		StringGrid1->Cells[0][i+1]=planes[i].getType();
		StringGrid1->Cells[1][i+1]=IntToStr(planes[i].getYear());
		StringGrid1->Cells[2][i+1]=IntToStr(planes[i].getFuel());
	}
	delete f;
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Button1Click(TObject *Sender)
{
	if (!FileExists(filePlanes)) {
		TFileStream* f=new TFileStream(filePlanes,fmCreate);
		int a=0;
		f->Write(&a,sizeof(int));
		delete f;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Button2Click(TObject *Sender)
{
	Label1->Left=StringGrid1->Left-Label1->Width;
	Label1->Top= StringGrid1->Top+StringGrid1->Height;
	Edit1->Left=StringGrid1->Left;
	Edit1->Top=StringGrid1->Top+StringGrid1->Height;
	Edit2->Left=Edit1->Left+Edit1->Width;
	Edit2->Top=StringGrid1->Top+StringGrid1->Height;
	Edit3->Left=Edit2->Left+Edit2->Width;
	Edit3->Top=StringGrid1->Top+StringGrid1->Height;
	Button4->Top=StringGrid1->Top+StringGrid1->Height;
	Button4->Left=Edit3->Left+Edit3->Width;
	Edit1->Visible=true;
	Edit2->Visible=true;
	Edit3->Visible=true;
	Label1->Visible=true;
	Button4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Edit1Exit(TObject *Sender)
{
	if (Edit1->Text!="" && Edit2->Text!="") {
		if (Edit3->Text!="") {
			Button4->Visible=true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Button4Click(TObject *Sender)
{
	if (Edit1->Text!="" && Edit2->Text!="") {
		if (Edit3->Text!="") {
			Button4->Visible=false;
			TFileStream* f;
			f=new TFileStream(filePlanes,fmOpenRead);
			int amount;
			f->Read(&amount,sizeof(int));
			delete f;
			f=new TFileStream(filePlanes,fmOpenRead);
			Aircraft* arrayPlanes=new Aircraft[amount+1];
			f->Seek(sizeof(int),soBeginning);
			f->Read(arrayPlanes,sizeof(class Aircraft)*amount);
			delete f;
			f=new TFileStream(filePlanes,fmOpenWrite);
			char str[20];
			int i;
			amount+=1;
			Counter=0;
			arrayPlanes[amount-1].setIndex(amount-1);
			arrayPlanes[amount-1].setType(Edit1->Text);
			arrayPlanes[amount-1].setYear(StrToInt(Edit2->Text));
			arrayPlanes[amount-1].setFuel(StrToInt(Edit3->Text));
			f->Write(&amount,sizeof(int));
			f->Seek(sizeof(int),soBeginning);
			f->Write(arrayPlanes,sizeof(class Aircraft)*amount);
			delete f;
			Edit1->Visible=false;
			Edit2->Visible=false;
			Edit3->Visible=false;
			Label1->Visible=false;
			FormPlane->Activate();
			Edit1->Text="";
			Edit2->Text="";
			Edit3->Text="";
		}
	}
}
void __fastcall TFormPlane::Button5Click(TObject *Sender)
{
	TFileStream* f;
	f=new TFileStream(filePlanes,fmOpenWrite);
	int amount=0;
	f->Write(&amount,sizeof(int));
	delete f;
	FormPlane->Activate();
}
void __fastcall TFormPlane::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	Counter++;
	if (Key==13) {
		Edit2->SetFocus();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Edit2KeyPress(TObject *Sender, System::WideChar &Key)

{
	Edit2->Color=clWhite;
	if (Key==13) {
		AnsiString temp=Edit2->Text,text="";
		bool isRight=true;
		int i,length=temp.Length();
		for (i = 1; i <= length;i++) {
			if (temp[i]>=48 && temp[i]<58) {
				text+=temp[i];
			}
			else isRight=false;
		}
		if (isRight==false) {
			Edit2->Text=text;
			Edit2->Color=clRed;
			Timer1->Tag=2;
			Timer1->Enabled=true;
		}
		else Edit3->SetFocus();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Edit3KeyPress(TObject *Sender, System::WideChar &Key)

{
	if (Key==13) {
		AnsiString temp=Edit3->Text,text="";
		bool isRight=true;
		int i,length=temp.Length();
		for (i = 1; i <= length;i++) {
			if (temp[i]>=48 && temp[i]<58) {
				text+=temp[i];
			}
			else isRight=false;
		}
		if (isRight==false) {
			Edit3->Text=text;
			Edit3->Color=clRed;
			Timer1->Tag=3;
			Timer1->Enabled=true;
		}
		else Button4->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormPlane::Timer1Timer(TObject *Sender)
{
	if (Timer1->Tag==2) Edit2->Color=clWhite;
	else if (Timer1->Tag==3) Edit3->Color=clWhite;
}
//---------------------------------------------------------------------------



