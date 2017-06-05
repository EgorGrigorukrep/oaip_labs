//---------------------------------------------------------------------------

#ifndef FormPlanesH
#define FormPlanesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormPlane : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button2;
	TLabel *Label1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TTimer *Timer1;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPlane(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPlane *FormPlane;
//---------------------------------------------------------------------------
#endif
