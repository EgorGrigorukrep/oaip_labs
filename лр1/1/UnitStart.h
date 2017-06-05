//---------------------------------------------------------------------------

#ifndef UnitStartH
#define UnitStartH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormStart : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TComboBox *ComboBox1;
	TButton *Button1;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormStart(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormStart *FormStart;
//---------------------------------------------------------------------------
#endif
