//---------------------------------------------------------------------------

#ifndef UnitFormH
#define UnitFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UnitStack.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TEdit *EditD;
	TLabel *Label5;
	TEdit *EditA;
	TLabel *Label2;
	TEdit *EditB;
	TLabel *Label3;
	TEdit *EditE;
	TLabel *Label4;
	TEdit *EditC;
	TLabel *Label6;
	TButton *Button2;
	TEdit *EditReverse;
	TLabel *Label7;
	TLabel *LabelUsualResult;
	TLabel *LabelReverseResult;
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
double values(char varible);
void calculation();
void pushingOperator(Stack stack, AnsiString result, char _operator);
bool isLastPriorityHigher(char lastOperator, char currentOperator);
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
