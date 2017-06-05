//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitStack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Stack::Stack(){
	head=NULL;
}

void Stack::Push(char info){
	stackElement* newElement=new stackElement();
	newElement->info=info;
	newElement->next=head;
	head=newElement;
}

void Stack::PushDouble(double calculation){
	stackElement* newElement=new stackElement();
	newElement->calculation=calculation;
	newElement->next=head;
	head=newElement;
}

char Stack::Pop(){
	if (head!=NULL) {
		char info=head->info;
		stackElement* temp=new stackElement();
		temp=head;
		head=head->next;
		delete temp;
		return info;
	}
	else return '0';
}

double Stack::PopDouble(){
	if (head!=NULL) {
		double calculation=head->calculation;
		stackElement* temp=new stackElement();
		temp=head;
		head=head->next;
		delete temp;
		return calculation;
	}
	else return 0;
}

char Stack::Peek(){
	if (head!=NULL) {
		char info=head->info;
		return info;
	}
	else return '0';
}

AnsiString Stack::Show(){
	stackElement* temp;
	temp=head;
	AnsiString stackInfo="";
	while (temp!=NULL){
		stackInfo+=temp->info+"___";
	}
	return stackInfo;
}

void Stack::deleteStack(){
	stackElement* temp;
	while (head!=NULL){
		temp=head;
		head=head->next;
		delete temp;
	}
}