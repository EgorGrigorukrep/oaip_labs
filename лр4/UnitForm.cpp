//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitForm.h"
//#include "UnitStack.h"
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

void pushingOperator(Stack* stack, AnsiString* result, char _operator){
	char operation=(*stack).Pop();
	(*result)+=operation;
	(*stack).Push(_operator);
}

bool isLastPriorityHigher(char lastOperator, char currentOperator){
	if (lastOperator=='*' || lastOperator=='/'){
		return true;
	}
	else if (lastOperator=='+' || lastOperator=='-') {
		if (currentOperator=='+' || currentOperator=='-') {
			return true;
		}
		else return false;
	}
	else return false;
}

double values(char var){
	switch (var) {
		case 'a': return StrToFloat(Form1->EditA->Text);
		case 'b': return StrToFloat(Form1->EditB->Text);
		case 'c': return StrToFloat(Form1->EditC->Text);
		case 'd': return StrToFloat(Form1->EditD->Text);
		case 'e': return StrToFloat(Form1->EditE->Text);
	}
}

void calculation(){
	Stack stack;
	AnsiString text=Form1->EditReverse->Text;
	int i,length=text.Length();
	double generalResult=0;
	for (i = 1; i <= length; i++) {
		if (text[i]>='a' && text[i]<='e') {
			stack.PushDouble(values(text[i]));
		}
		else {
			double operand1,operand2,result;
			operand1=stack.PopDouble();
			operand2=stack.PopDouble();
			switch (text[i]) {
				case '+': result=operand1+operand2; break;
				case '-': result=operand2-operand1; break;
				case '*': result=operand1*operand2; break;
				case '/': result=operand2/operand1; break;
			}
			generalResult=result;
			//ShowMessage(FloatToStr(operand2)+text[i]+FloatToStr(operand1));
			stack.PushDouble(result);
		}
	}
	Form1->LabelReverseResult->Caption=Form1->EditReverse->Text+"="+FloatToStr(generalResult);
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Label7->Visible=true;
	EditReverse->Visible=true;
	LabelUsualResult->Visible=true;
	LabelReverseResult->Visible=true;

	Stack stack;
	AnsiString text=Edit1->Text;
	AnsiString result="";
	int i,length=text.Length();

	for (i = 1; i <= length; i++) {
		if (text[i]>='a' && text[i]<='e') {
			result+=text[i];
		}
		else if (text[i]=='*' || text[i]=='/') {
			if (isLastPriorityHigher(stack.Peek(),text[i])==true) {
				pushingOperator(&stack, &result, text[i]);
			}
			else stack.Push(text[i]);
		}
		else if (text[i]=='+' || text[i]=='-') {
			if (isLastPriorityHigher(stack.Peek(),text[i])==true){
				pushingOperator(&stack, &result, text[i]);
			}
			else stack.Push(text[i]);
		}
		else if (text[i]=='(') {
			stack.Push(text[i]);
		}
		else if (text[i]==')') {
			char operation='p';
			while (1){
				operation=stack.Pop();
				if (operation!='(') {
					result+=operation;
				}
				else break;
			}
		}
	}
    char operation = ' ';
	while (1) {
		operation = stack.Pop();
		if (operation == '0') break;
		result += operation;
	}
	EditReverse->Text=result;
	stack.deleteStack();

	calculation();
	double a=values('a');
	double b=values('b');
	double c=values('c');
	double d=values('d');
	double e=values('e');
	LabelUsualResult->Caption=Edit1->Text+"="+FloatToStr(a/(b*(c+d))-e);
}
//---------------------------------------------------------------------------

