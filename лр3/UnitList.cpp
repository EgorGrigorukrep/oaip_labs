//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitList.h"
#include "Form.h"
#include <vcl.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
List::List(){
	Head=NULL;
}

List::~List(){
	Head=First;
	if (Head!=NULL) {
		while(Head->Next!=NULL){
			ListElement *temp;
			temp=Head;
			Head=Head->Next;
			delete temp;
		}
		delete Head;
	}
}

void List::addFirstElement(AnsiString name, int amount, int cehNumber){
	Head=new ListElement;
	First=Head;
	Head->Name=name;
	Head->Amount=amount;
	Head->CehNumber=cehNumber;
	Head->Next=NULL;
}

void List::addElement(AnsiString name, int amount, int cehNumber){
	Head=First;
	while (Head->Next!=NULL)
		Head=Head->Next;
	Head->Next=new ListElement;
	Head=Head->Next;
	Head->Name=name;
	Head->Amount=amount;
	Head->CehNumber=cehNumber;
	Head->Next=NULL;
}

void List::showList(){
	Head=First;
	int i=0;
	while (Head!=NULL){
		Form1->StringGrid1->Cells[0][i]=Head->Name;
		Form1->StringGrid1->Cells[1][i]=Head->Amount;
		Form1->StringGrid1->Cells[2][i]=Head->CehNumber;
		i++;
		Head=Head->Next;
	}
}

void List::findProduction(AnsiString product){
	Head=First;
	int i=0;
	while (Head!=NULL){
		if (Head->Name==product) {
			Form1->StringGrid1->Cells[0][i]=Head->Name;
			Form1->StringGrid1->Cells[1][i]=Head->Amount;
			Form1->StringGrid1->Cells[2][i]=Head->CehNumber;
			i++;
		}
		Head=Head->Next;
	}
}

void List::findCEH(int number){
	Head=First;
	int i=0;
	while (Head!=NULL){
		if (Head->CehNumber==number) {
			Form1->StringGrid1->Cells[0][i]=Head->Name;
			Form1->StringGrid1->Cells[1][i]=Head->Amount;
			Form1->StringGrid1->Cells[2][i]=Head->CehNumber;
			i++;
		}
		Head=Head->Next;
	}
}

void List::findAmount(int amount){
	Head=First;
	int i=0;
	while (Head!=NULL){
		ListElement *tempHead=Head->Next;
		int sum=Head->Amount;
		while (tempHead!=NULL){
			if (tempHead->CehNumber==Head->CehNumber) {
				sum+=tempHead->Amount;
			}
			tempHead=tempHead->Next;
		}
		if (sum>=amount) {
			tempHead=Head;
			while (tempHead!=NULL){
				if (tempHead->CehNumber==Head->CehNumber) {
					Form1->StringGrid1->Cells[0][i]=tempHead->Name;
					Form1->StringGrid1->Cells[1][i]=tempHead->Amount;
					Form1->StringGrid1->Cells[2][i]=tempHead->CehNumber;
					i++;
				}
				tempHead=tempHead->Next;
			}
			if (Form1->N2->Checked==true) break;
		}
		Head=Head->Next;
	}
}

ListElement* List::find(AnsiString name){
	Head=First;
	while (Head!=NULL){
		if (Head->Name==name) {
			return Head;
		}
		Head=Head->Next;
	}
	return NULL;
}

bool List::deleteProduction(AnsiString name){
	ListElement* temp=find(name);
	Head=First;
	if (temp!=NULL) {
		if (Head==temp) {
			Head=Head->Next;
			First=Head;
			if (First==NULL) {
				Form1->Button4->Enabled=false;
				Form1->Button5->Enabled=false;
				return false;
			}
		}
		else {
			while(Head->Next!=NULL){
				if (Head->Next==temp) {
					Head->Next=temp->Next;
					Head=Head->Next;
					break;
				}
				Head=Head->Next;
			}
		}
		delete temp;
	}
	return true;
}

bool List::deleteLast(){
	Head=First;
	if (Head!=NULL) {
		if (Head->Next==NULL) {
			delete Head;
			Head=First=NULL;
			Form1->Button5->Enabled=false;
			Form1->Button4->Enabled=false;
			return false;
		}
		else{
			while(Head->Next->Next!=NULL) Head=Head->Next;
			ListElement* temp=Head->Next;
			Head->Next=NULL;
			delete temp;
		}
	}
	return true;
}
