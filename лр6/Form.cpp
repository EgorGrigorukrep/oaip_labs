﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Form.h"
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
Tree tree;
bool wasTreeNodeSelected=false;

void __fastcall TForm1::FormActivate(TObject *Sender)
{
	StringGrid1->Cells[0][0]="Текст";
	StringGrid1->Cells[1][0]="Число";
	StringGrid1->RowCount=2;
	StringGrid1->Height=StringGrid1->RowCount*StringGrid1->DefaultRowHeight + (StringGrid1->RowCount+1)*StringGrid1->GridLineWidth+3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	if (ARow == StringGrid1->RowCount-1) {
		bool isNeedToAddCells;
		if (ACol==1) {
			if (StringGrid1->Cells[0][ARow]!="") {
				isNeedToAddCells=true;
			}
			else isNeedToAddCells=false;
		}
		else {
			if (StringGrid1->Cells[1][ARow]!="") {
				isNeedToAddCells=true;
			}
			else isNeedToAddCells=false;
        }

		if (isNeedToAddCells==true){
			StringGrid1->RowCount++;
			if (StringGrid1->RowCount<=8) {
				StringGrid1->Height+=StringGrid1->DefaultRowHeight+StringGrid1->GridLineWidth;
			}
			else{
				StringGrid1->ScrollBars=ssVertical;
				if (StringGrid1->RowCount==9) StringGrid1->Width+=20;
				StringGrid1->Col=ACol;
				StringGrid1->Row=ARow+1;
			}
		}
	}
}
//---------------------------------------------------------------------------
bool isSymbol(UnicodeString value){
	int i,length=value.Length();
	for (i = 1; i <= length; i++) {
		if (value[i]<'0' || value[i]>'9') {
			if (value[i]!='-') {
				return true;
			}
		}
	}
	return false;
}

void __fastcall TForm1::StringGrid1SetEditText(TObject *Sender, int ACol, int ARow,
          const UnicodeString Value)
{
	if (ACol==1) {
		if (isSymbol(Value)==true) {
			ShowMessage("Не вводите символы!");

			UnicodeString correct="";
			int i,length=Value.Length();
			for (i = 1; i < length; i++) {
				correct+=Value[i];
			}

			StringGrid1->Cells[ACol][ARow]=correct;
		}
	}
}
//---------------------------------------------------------------------------
void editingData(info* array,int beginIndex,int endIndex){
	int i;
	if (beginIndex==endIndex) {
		Form1->Memo1->Lines->Add(array[beginIndex].text+" - "+IntToStr(array[beginIndex].number));
		return;
	}
	else{
		int middleIndex=beginIndex + (endIndex-beginIndex)/2;
		//ShowMessage(IntToStr(beginIndex)+" "+IntToStr(endIndex));
		editingData(array,beginIndex,middleIndex);

		if (middleIndex!=beginIndex) editingData(array,middleIndex,endIndex);
    }
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	tree.deleteTree(tree.getRoot());
	int i;
	/*
	int j,amount=StringGrid1->RowCount-1;
	if (StringGrid1->Cells[0][StringGrid1->RowCount-1]=="" && StringGrid1->Cells[1][StringGrid1->RowCount-1]=="") {
		amount--;
	}

	info* array=new info[amount];

	for (i=1; i<amount+1; i++){
		info item;
		item.text=StringGrid1->Cells[0][i];
		item.number=StrToInt(StringGrid1->Cells[1][i]);
		array[i-1]=item;
	}

	for (i = 0; i < amount; i++) {
		for (j = 1; j < amount; j++) {
			if (array[i].number > array[j].number) {
				info temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}

	for (i = 1; i < StringGrid1->RowCount-1; i++) {
		StringGrid1->Rows[i]->Clear();
	}
	Memo1->Lines->Clear();
	editingData(array,0,amount);

	delete array;
	  */
	for (i = 1; i <= StringGrid1->RowCount; i++) {
		if (StringGrid1->Cells[1][i]=="" && StringGrid1->Cells[0][i]=="") {
			break;
		}

		if (StringGrid1->Cells[1][i]=="") {
			StringGrid1->Cells[1][i]="0";
		}

		TreeItem* newItem;
		try{
			newItem=new TreeItem;
		}
		catch(EOutOfMemory&){
			ShowMessage("Нехватка оперативной памяти");
			return;
		}

		newItem->left=NULL;
		newItem->right=NULL;
		try {
			newItem->number=StrToInt(StringGrid1->Cells[1][i]);
		}
		catch (EConvertError&) {
			ShowMessage("Введено недопустимое число "+StringGrid1->Cells[1][i]);
			newItem->number=0;
		}
		newItem->text=StringGrid1->Cells[0][i];

		if (i==1) tree.setRoot(tree.add(newItem,tree.getRoot()));
		else tree.add(newItem,tree.getRoot());
	}

	Button8->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Memo1->Clear();
	StringGrid2->Visible=false;
	Memo1->Visible=true;
	tree.directDetour(tree.getRoot(),Memo1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Memo1->Clear();
	StringGrid2->Visible=false;
	Memo1->Visible=true;
	tree.reverseDetour(tree.getRoot(),Memo1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Memo1->Clear();
	StringGrid2->Visible=false;
	Memo1->Visible=true;
	tree.symmetricDetour(tree.getRoot(),Memo1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	TreeItem* newItem=tree.createNewItem(Edit2,Edit1);
	if (newItem==NULL)
		return;
	if (tree.getRoot()==NULL) tree.setRoot(tree.add(newItem,tree.getRoot()));
	else tree.add(newItem,tree.getRoot());
	tree.showInTreeView(TreeView1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	TreeItem* item=tree.createNewItem(Edit2,Edit1);
	if (item==NULL)
		return;

	TreeItem* result=NULL;
	if (Edit1->Text=="") {
		tree.find(item,tree.getRoot(),&result,ByNumber);
	}
	else if (Edit2->Text=="") {
		tree.find(item,tree.getRoot(),&result,ByText);
	}
	else {
		tree.find(item,tree.getRoot(),&result,ByBoth);
    }
	delete item;
	if (result==NULL) {
		return;
	}

	int i;
	TTreeNode* node;
	for (i = 0; i < TreeView1->Items->Count; i++) {
		node=TreeView1->Items->Item[i];
		item=(TreeItem*)node->Data;
		if (item->text==result->text && item->number==result->number) {
			node->Selected=true;
			node->Focused=true;
			TreeView1Click(Sender);
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	if (wasTreeNodeSelected==false) {
		return;
	}

	TTreeNode* selectedNode=TreeView1->Selected;
	TreeItem* selectedItem=(TreeItem*)selectedNode->Data;
	TreeItem* parent;
	if (selectedNode != TreeView1->Items->GetFirstNode()) {
		parent=(TreeItem*)selectedNode->Parent->Data;
	}
	else {
		parent=selectedItem;
	}
	tree.deleteItem(selectedItem,parent);
	tree.showInTreeView(TreeView1);
	wasTreeNodeSelected=false;
	Edit3->Visible=false;
	Button7->Visible=false;
	TreeView1->Height=Memo1->Height;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TreeView1Click(TObject *Sender)
{
	if (TreeView1->Items->Count==0) {
		return;
	}

	TTreeNode* node=TreeView1->Selected;
	TreeItem* item=(TreeItem*)node->Data;
	Edit3->Text=item->text+" - "+IntToStr(item->number);

	if (wasTreeNodeSelected==false) {
		if (TreeView1->Height==Memo1->Height) {
			TreeView1->Height-=Edit3->Height;
			Edit3->Top=TreeView1->Top + TreeView1->Height;
			TreeView1->Height-=5;
		}

		Button7->Top=Edit3->Top;
		Edit3->Visible=true;
		Button7->Visible=true;
	}

	wasTreeNodeSelected=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	tree.showInTreeView(TreeView1);
	wasTreeNodeSelected=false;
	TreeView1->Height=Memo1->Height;
	Edit3->Visible=false;
	Button7->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	TreeView1->Items->Clear();
	tree.deleteTree(tree.getRoot());
	const int AMOUNT=10;
	int i,randomNumber;
	StringGrid1->RowCount=AMOUNT;
	for (i = 1; i <= AMOUNT; i++) {
		randomNumber=random(50);
		char c='a'+i-1;
		AnsiString str="";
		str+=c;
		StringGrid1->Cells[0][i]=str;
		StringGrid1->Cells[1][i]=IntToStr(randomNumber);
	}
	StringGrid1->Height=Memo1->Height;
	if (StringGrid1->Width < 2*StringGrid1->DefaultColWidth+20)  {
		StringGrid1->Width+=20;
		if (AMOUNT>9) {
			StringGrid1->ScrollBars=ssVertical;
		}
	}

	Button1->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	randomize();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	tree.deleteTree(tree.getRoot());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
	int i;
	for (i = 0; i < StringGrid2->RowCount; i++) {
		StringGrid2->Rows[i]->Clear();
	}
	StringGrid2->Cells[0][0]="Уровень";
	StringGrid2->Cells[1][0]="Листьев";

	int maxLevel,amount;
	newTree nTree;
	if (tree.getRoot()!=NULL) maxLevel=nTree.maxLevelsAmount(tree.getRoot(),1);
	else maxLevel=0;

	StringGrid2->RowCount=maxLevel+1;

	for (i = 1; i <= maxLevel; i++) {
		amount=nTree.findLeafsAmount(i,tree);
		StringGrid2->Cells[0][i]=IntToStr(i);
		StringGrid2->Cells[1][i]=IntToStr(amount);
	}
	StringGrid2->Visible=true;
	Memo1->Visible=false;
	StringGrid2->Height=(maxLevel+1)*StringGrid2->DefaultRowHeight + (maxLevel+2)*StringGrid2->GridLineWidth;
	StringGrid2->Width=StringGrid2->DefaultColWidth*2+3*StringGrid2->GridLineWidth;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
	tree.deleteTree(tree.getRoot());
	tree.showInTreeView(TreeView1);
	int i;
	for (i = 0; i < StringGrid1->RowCount; i++) {
		StringGrid1->Rows[i]->Clear();
	}
	StringGrid1->Cells[0][0]="Тескт";
	StringGrid1->Cells[1][0]="Число";
}
//---------------------------------------------------------------------------

