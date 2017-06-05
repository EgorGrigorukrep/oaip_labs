#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <iostream.h>
#include "classProduction.h"

int showProductsAmount(){
	FILE *f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\number.txt","r");
	int n=0;
	fscanf(f,"%d",&n);
	return n;
}

void addProductsAmount(){
	FILE *f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\number.txt","r");
	int n;
	fscanf(f,"%d",&n);
	fclose(f);
	n+=1;
	f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\number.txt","w");
	fprintf(f,"%d",n);
	fclose(f);
}

int menu(){
	int choise;
	printf("1.���� ��������\n2.����� ���������\n3.������� ���������� � ���������\n4.�����\n\n�����: ");
	scanf("%d",&choise);
	return choise;
}

void addProduct(){
	FILE *f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\result.txt","ab");
	Production Product;
	fseek(f,0,SEEK_END);
	printf("������������ ���������: ");
	fflush(stdin);
	Product.setName();
	printf("���������� ���������: ");
	Product.setAmount();
	printf("����� ����: ");
	Product.setNumberOfCEH();
	fwrite(&Product,sizeof(class Production),1,f);
	fclose(f);
	addProductsAmount();
}

void deleteData(){
	remove("d:\\�����\\����\\�� ��� 2\\��2\\1\\result.txt");
	FILE *f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\result.txt","w");
	fclose(f);
	f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\number.txt","w");
	fseek(f,0,SEEK_SET);
	fprintf(f,"%d",0);
	fclose(f);
}

void sort(Production* mas,int amount){
	int i,j;
	Production temp;
	for (i = 0; i < amount; i++) {
		for (j=0; j < amount-1; j++) {
			if (mas[j].getAmount()<mas[j+1].getAmount()) {
				temp=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=temp;
			}
		}
	}
}

void showData(){
	int amount=0,i,number;
	FILE *f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\number.txt","r");
	fscanf(f,"%d",&amount);
	fclose(f);
	Production *mas=new Production[amount];
	f=fopen("d:\\�����\\����\\�� ��� 2\\��2\\1\\result.txt","rb");
	printf("����� ���� (0-������� ��� ���������): ");
	scanf("%d",&number);
	system("cls");
	printf(" �|�������� ���������  |���������� |����� ���� |\n");
	printf("--|--------------------|-----------|-----------|\n");
	fseek(f,0,SEEK_SET);
	char str[20];
	for (i = 0; i < amount; i++) {
		fseek(f,i*sizeof(class Production),SEEK_SET);
		fread(&mas[i],sizeof(class Production),1,f);
	}
	sort(mas,amount);
	if (number!=0) {
		for (i = 0; i < amount; i++) {
			if (number==mas[i].getNumberOfCEH()) printf("%2d|%-20s|%-11d|%-11d|\n",i+1,mas[i].getName(),mas[i].getAmount(),mas[i].getNumberOfCEH());
		}
	}
	else  {
        for (i = 0; i < amount; i++) {
			printf("%2d|%-20s|%-11d|%-11d|\n",i+1,mas[i].getName(),mas[i].getAmount(),mas[i].getNumberOfCEH());
		}
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise,n;
	while (choise!=5){
		system("cls");
		printf("1.���� ��������\n2.����� ���������\n3.������� ���������� � ���������\n4.�������� ���������� ���������\n5.�����\n\n�����: ");
		scanf("%d",&choise);
		switch(choise){
			case 1: system("cls"); addProduct(); break;
			case 2: system("cls"); showData(); getch(); break;
			case 3: system("cls"); deleteData(); break;
			case 4: system("cls"); cout<<showProductsAmount(); getch(); break;
		}
	}
	return 0;
}
