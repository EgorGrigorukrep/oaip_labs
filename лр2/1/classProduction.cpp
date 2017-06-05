//---------------------------------------------------------------------------

#pragma hdrstop

#include "classProduction.h"
#include <iostream.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
Production::Production(){
	name[0]='\0';
	amount=0;
	numberOfCEH=0;
}
Production::Production(const char* n,int a, int number){
	int i=0;
	while(n[i]!='\0'){
		name[i]=n[i];
		i++;
	}
	amount=a;
	numberOfCEH=number;
}
char* Production::getName(){ return name;}
void Production::setName(){
	fgets(name,19,stdin);
	int i;
	for (i = 0; i < 20; i++) {
		if (name[i]=='\n') {
			name[i]='\0';
		}
	}
}
void Production::setNamePrm(char* a){
	int i=0;
	while(a[i]!='\0'){
		name[i]=a[i];
		i++;
	}
}
int Production::getAmount(){ return amount;}
void Production::setAmount() { cin>>amount;}
void Production::setAmountPrm(int a){ amount=a;}
void Production::setAmountPrm(char* str){ amount=atoi(str);}
int Production::getNumberOfCEH(){return numberOfCEH;}
void Production::setNumberOfCEH(){ cin>>numberOfCEH;}
void Production::setNumberOfCEHPrm(int n) {numberOfCEH=n;}
void Production::setNumberOfCEHPrm(char* str) {numberOfCEH=atoi(str);}
