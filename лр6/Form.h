//---------------------------------------------------------------------------

#ifndef FormH
#define FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
struct info{
	AnsiString text;
	int number;
};

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTreeView *TreeView1;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TMemo *Memo1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit1;
	TLabel *Label1;
	TEdit *Edit2;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TLabel *Label2;
	TEdit *Edit3;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TStringGrid *StringGrid2;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall StringGrid1SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid1SetEditText(TObject *Sender, int ACol, int ARow, const UnicodeString Value);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall TreeView1Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
bool isSymbol(UnicodeString value);
void editingData(info* array,int beginIndex,int endIndex);
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
