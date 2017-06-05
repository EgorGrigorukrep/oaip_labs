//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
//#include "UnitQueue.h"
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
Queue queue;

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	randomize();
}
//---------------------------------------------------------------------------
int generateRandomNumber(){
	int sign=random(2);
	int number=random(100);
	if (sign==0) return (-1)*number;
	else return number;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int number=generateRandomNumber();
	queue.add(number);
	queue.show(ListBox1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if (Edit1->Text=="Число...") {
		Button1->Visible=false;
		Button3->Visible=false;
		Button4->Visible=false;
		Edit1->Visible=true;
		Button2->Caption="Добавить";
		if (Button2->Height>Edit1->Height+20) {
			Button2->Height/=2;
			Button2->Top+=Button2->Height;
		}
	}
	else {
        int number;
		if (getNumber(Edit1,&number)==true) {
			queue.add(number);
			queue.show(ListBox1);
		}

		Button1->Visible=true;
		Button3->Visible=true;
		Button4->Visible=true;
		Edit1->Visible=false;
		Edit1->Text="Число...";
		Button2->Top-=Button2->Height;
		Button2->Height*=2;
		Button2->Caption="Добавить введенное число";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	queue._delete();
	queue.show(ListBox1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	queue.retrieveFromQueue();
	queue.show(ListBox1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Click(TObject *Sender)
{
	Edit2->Text="";
}
//---------------------------------------------------------------------------

List fullList,positiveList,negativeList;

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	int number=generateRandomNumber();
	fullList.add(number);
	fullList.show(ListBox2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	fullList._delete();
	fullList.show(ListBox2);
}
//---------------------------------------------------------------------------

bool getNumber(TEdit* Edit,int* number){
	try{
		(*number)=StrToInt(Edit->Text);
	}
	catch(...){
		ShowMessage("Ввод осуществлен некорректно");
		Edit->Text="Число...";
		return false;
	}
	return true;
}

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	int number;
	if (getNumber(Edit2,&number)==true) {
		fullList.add(number);
		fullList.show(ListBox2);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
	int number;
	if (getNumber(Edit2,&number)==true) {
		Item* item=fullList.findInList(number);
		fullList.deleteItem(item);
		fullList.show(ListBox2);
	}
}
//---------------------------------------------------------------------------

void changeEnableOfComponents(bool value){
	Form1->Button1->Visible=value;
	Form1->Button2->Visible=value;
	Form1->Button3->Visible=value;
	Form1->Button4->Visible=value;

	Form1->Button5->Enabled=value;
	Form1->Button6->Enabled=value;
	Form1->Button7->Enabled=value;
	Form1->Button8->Enabled=value;
	Form1->Button9->Enabled=value;
	Form1->Edit2->Enabled=value;
}

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	fullList.show(ListBox1);
	fullList.sortList();
	fullList.show(ListBox2);

	positiveList._delete();
	negativeList._delete();
	fullList.breakInto2Lists(&positiveList,&negativeList);
	if (positiveList.sizeOfList()!=0) positiveList.excludeNegativePart();
	Label1->Caption="Список до сортировки";
	Label1->Left=10;
	Label3->Left=Shape1->Left+10;
	Label3->Caption="Отсортированный список";
	positiveList.show(ListBox3);
	negativeList.show(ListBox4);
	changeEnableOfComponents(false);
	Button10->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	changeEnableOfComponents(true);
	fullList._delete();
	ListBox1->Clear();
	ListBox2->Clear();
	ListBox3->Clear();
	ListBox4->Clear();
	Label1->Caption="Очередь";
	Label1->Left=ListBox1->Left;
	Label3->Left=ListBox2->Left;
	Label3->Caption="Список";
	Button10->Enabled=false;
}
//---------------------------------------------------------------------------

