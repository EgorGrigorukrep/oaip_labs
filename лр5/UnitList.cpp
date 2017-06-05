//---------------------------------------------------------------------------

#pragma hdrstop

#include "Form.h"
#include "UnitList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

List::List(): Queue(){};

void List::addItem(Item* item){
	if (Head==NULL && Tail==NULL) {
		Head=Tail=item;
	}
	else {
		Tail->next=item;
		item->previous=Tail;
		Tail=item;
    }
}

Item* List::findInList(int number){
	Item* temp=Head;
	while (temp!=NULL){
		if (temp->number==number){
			return temp;
		}
		temp=temp->next;
	}
	return NULL;
}

void List::deleteItem(Item* item){
	if (item==NULL) {
		return;
	}

	if (item->next==NULL && item->previous!=NULL) {
		item->previous->next=NULL;
		Tail=item->previous;
	}
	else if (item->previous==NULL && item->next!=NULL) {
		item->next->previous=NULL;
		Head=item->next;
	}
	else if (item->next!=NULL && item->previous!=NULL) {
		item->previous->next=item->next;
		item->next->previous=item->previous;
	}
	else if (item->next==NULL && item->previous==NULL) {
		Head=NULL; Tail=NULL;
	}

	delete item;
}

void List::breakInto2Lists(List* positiveList,List* negativeList){
	Item* temp=Head;
	while (temp!=NULL){
		if (temp->number>=0) {
			(*positiveList).addItem(temp);
		}
		else {
			(*negativeList).addItem(temp);
		}

		temp=temp->next;
	}
}

void List::movePointers(Item* item2,Item* item3){
	Item* item1; Item* item4;
	item1=item2->previous;
	item4=item3->next;

	if (item1!=NULL) {
		item1->next=item3;
	}
	if (item4!=NULL) {
		item4->previous=item2;
	}

	item3->next=item2;
	item2->previous=item3;
	item2->next=item4;
	item3->previous=item1;

	if (item2==Head) {
		Head=item3;
	}
	if (item3==Tail) {
		Tail=item2;
	}
}

int List::sizeOfList(){
	int size=0;
	Item* temp=Head;
	while (temp!=NULL) {
		size++;
		temp=temp->next;
	}
	return size;
}

void List::sortList(){
	int size=sizeOfList(),i;
	Item* temp=Head;
	if (size==0 || size==1) {
		return;
	}

	for (i = 0; i < size; i++) {
		temp=Head;
		while (temp->next!=NULL) {
			if (temp->number < temp->next->number) {
				movePointers(temp,temp->next);
			}
			else temp=temp->next;
	   }
	}
}

void List::excludeNegativePart(){
	Item* temp=Head;
	while (temp->next!=NULL){
		if (temp->next->number < 0) {
			temp->next=NULL;
			Tail=temp;
			break;
		}
		temp=temp->next;
	}
}
