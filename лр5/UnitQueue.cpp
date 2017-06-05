//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitQueue.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Queue::Queue(){
	Head=NULL;
	Tail=NULL;
}

void Queue::add(int number){
	Item* newItem=new Item();
	newItem->next=NULL;
	newItem->previous=NULL;
	newItem->number=number;

	if (Head==NULL && Tail==NULL) {
		Head=newItem;
		Tail=newItem;
	}
	else {
		Tail->next=newItem;
		newItem->previous=Tail;
		Tail=newItem;
	}
}

void Queue::retrieveFromQueue(){
	if (Head!=NULL) {
		int number;
		number=Head->number;
		Head=Head->next;
		if (Head==NULL) Tail=NULL;
	}
}

void Queue::show(TListBox* ListBox){
	Item* temp;
	temp=Head;
	ListBox->Height=3*ListBox->ItemHeight+2;
	ListBox->Clear();
	while (temp!=NULL){
		ListBox->Items->Add(IntToStr(temp->number));
		if (ListBox->Count>3 && ListBox->Count<=9) {
			ListBox->Height+=ListBox->ItemHeight;
		}
		temp=temp->next;
	}
}

void Queue::_delete(){
	if (Head==NULL) {
		return;
	}
	Item* temp;
	while (Head!=NULL){
		temp=Head;
		Head=Head->next;
		delete temp;
	}
	Head=NULL;
	Tail=NULL;
}