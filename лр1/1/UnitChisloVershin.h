//---------------------------------------------------------------------------

#ifndef UnitChisloVershinH
#define UnitChisloVershinH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormChisloVershin : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TButton *Button1;
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Edit1Enter(TObject *Sender);
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormChisloVershin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormChisloVershin *FormChisloVershin;
//---------------------------------------------------------------------------
#endif
