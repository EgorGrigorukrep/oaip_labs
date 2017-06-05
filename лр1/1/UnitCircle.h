//---------------------------------------------------------------------------

#ifndef UnitCircleH
#define UnitCircleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
void draw();
class TFormCircle : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TShape *Shape1;
	TShape *Shape2;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *Edit4;
	TLabel *Label7;
	TEdit *Edit5;
	TButton *Button4;
	TShape *Shape3;
	TTimer *Timer1;
	TTimer *Timer2;
	TButton *Button5;
	TLabel *Label8;
	TLabel *Label9;
	TEdit *Edit6;
	TLabel *Label10;
	TEdit *Edit7;
	TLabel *Label11;
	TButton *Button6;
	TShape *Shape4;
	TEdit *Edit8;
	TLabel *Label12;
	TButton *Button7;
	TShape *Shape5;
	TLabel *Label17;
	TEdit *Edit11;
	TLabel *Label19;
	TTimer *Timer3;
	TImage *Image1;
	TImage *Image2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Edit6Exit(TObject *Sender);
	void __fastcall Edit7Exit(TObject *Sender);
	void __fastcall Edit8Exit(TObject *Sender);
	void __fastcall Edit6Click(TObject *Sender);
	void __fastcall Edit6Enter(TObject *Sender);
	void __fastcall Edit7Enter(TObject *Sender);
	void __fastcall Edit7Click(TObject *Sender);
	void __fastcall Edit8Enter(TObject *Sender);
	void __fastcall Edit8Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Edit1Enter(TObject *Sender);
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall Edit2Enter(TObject *Sender);
	void __fastcall Edit2Exit(TObject *Sender);
	void __fastcall Edit3Click(TObject *Sender);
	void __fastcall Edit3Enter(TObject *Sender);
	void __fastcall Edit3Exit(TObject *Sender);
	void __fastcall Edit4Click(TObject *Sender);
	void __fastcall Edit4Enter(TObject *Sender);
	void __fastcall Edit4Exit(TObject *Sender);
	void __fastcall Edit5Click(TObject *Sender);
	void __fastcall Edit5Enter(TObject *Sender);
	void __fastcall Edit5Exit(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall Edit11Click(TObject *Sender);
	void __fastcall Edit11Enter(TObject *Sender);
	void __fastcall Edit11Exit(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall FormClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormCircle(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormCircle *FormCircle;
//---------------------------------------------------------------------------
#endif
