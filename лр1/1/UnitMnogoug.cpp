//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UnitStart.h"
#include "Mnogoug.h"
#include "UnitMnogoug.h"
#include "UnitChisloVershin.h"
#include "UnitParametrsMnogoug.h"
#include "UnitDraw.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMnogoug *FormMnogoug;
//---------------------------------------------------------------------------
__fastcall TFormMnogoug::TFormMnogoug(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
int KolVersh;
int i=0,stdFigNum=0,r;
Mnogoug ob1(KolVersh);

void __fastcall TFormMnogoug::Edit2Click(TObject *Sender){	Edit2->Text=""; }
void __fastcall TFormMnogoug::Edit2Enter(TObject *Sender){	Edit2->Text=""; }
void __fastcall TFormMnogoug::Edit2Exit(TObject *Sender) {	if (Edit2->Text=="") Edit2->Text="0";}
void __fastcall TFormMnogoug::Edit3Click(TObject *Sender){	Edit3->Text="";}
void __fastcall TFormMnogoug::Edit3Enter(TObject *Sender){	Edit3->Text="";}
void __fastcall TFormMnogoug::Edit3Exit(TObject *Sender) {	if (Edit3->Text=="") Edit3->Text="0";}
void __fastcall TFormMnogoug::Edit1Click(TObject *Sender){	Edit1->Text="";}
void __fastcall TFormMnogoug::Edit1Enter(TObject *Sender){	Edit1->Text="";}
void __fastcall TFormMnogoug::Edit1Exit(TObject *Sender) {	if (Edit1->Text=="") Edit1->Text="300";}
void __fastcall TFormMnogoug::Edit4Click(TObject *Sender){	Edit4->Text="";}
void __fastcall TFormMnogoug::Edit4Enter(TObject *Sender){	Edit4->Text="";}
void __fastcall TFormMnogoug::Edit4Exit(TObject *Sender) {	if (Edit4->Text=="") Edit4->Text="300";}
void __fastcall TFormMnogoug::Edit5Click(TObject *Sender){	Edit5->Text="";}
void __fastcall TFormMnogoug::Edit5Enter(TObject *Sender){	Edit5->Text="";}
void __fastcall TFormMnogoug::Edit5Exit(TObject *Sender) {	if (Edit5->Text=="") Edit5->Text="0";}
void __fastcall TFormMnogoug::Edit6Click(TObject *Sender){	Edit6->Text="";}
void __fastcall TFormMnogoug::Edit6Enter(TObject *Sender){	Edit6->Text="";}
void __fastcall TFormMnogoug::Edit6Exit(TObject *Sender) {	if (Edit6->Text=="") Edit6->Text="0";}
void __fastcall TFormMnogoug::Edit7Click(TObject *Sender){	Edit7->Text="";}
void __fastcall TFormMnogoug::Edit7Enter(TObject *Sender){	Edit7->Text="";}
void __fastcall TFormMnogoug::Edit7Exit(TObject *Sender) {	if (Edit7->Text=="") Edit7->Text="10";}
void __fastcall TFormMnogoug::Edit8Click(TObject *Sender){	Edit8->Text="";}
void __fastcall TFormMnogoug::Edit8Enter(TObject *Sender){	Edit8->Text="";}
void __fastcall TFormMnogoug::Edit8Exit(TObject *Sender) {	if (Edit8->Text=="") Edit8->Text="1,0";}

 void __fastcall TFormMnogoug::BitBtn2Click(TObject *Sender)
{
	int k;
	for (k=0; k < 10; k++) {
		ob1.xkoor[k]=-1;
		ob1.ykoor[k]=-1;
	}
	if (stdFigNum==1) {
		KolVersh=3;
		ob1.xkoor[0]=400+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=557+10;
		ob1.xkoor[1]=600+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=557+10;
		ob1.xkoor[2]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=384+10;
	}
	if (stdFigNum==2) {
		KolVersh=3;
		ob1.xkoor[0]=434+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=366+10;
		ob1.xkoor[1]=434+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=566+10;
		ob1.xkoor[2]=634+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=566+10;
	}
	if (stdFigNum==3) {
		KolVersh=4;
		ob1.xkoor[0]=400+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=400+10;
		ob1.xkoor[1]=600+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=400+10;
		ob1.xkoor[2]=600+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=600+10;
		ob1.xkoor[3]=400+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=600+10;
	}
	if (stdFigNum==4) {
		KolVersh=4;
		ob1.xkoor[0]=300+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=400+10;
		ob1.xkoor[1]=700+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=400+10;
		ob1.xkoor[2]=700+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=600+10;
		ob1.xkoor[3]=300+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=600+10;
	}
	if (stdFigNum==5) {
		KolVersh=4;
		ob1.xkoor[0]=251+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=650+10;
		ob1.xkoor[1]=551+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=650+10;
		ob1.xkoor[2]=751+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=350+10;
		ob1.xkoor[3]=451+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=350+10;
	}
	if (stdFigNum==6) {
		KolVersh=4;
		ob1.xkoor[0]=300+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=500+10;
		ob1.xkoor[1]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=300+10;
		ob1.xkoor[2]=700+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=500+10;
		ob1.xkoor[3]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=700+10;
	}
	if (stdFigNum==7) {
		KolVersh=4;
		ob1.xkoor[0]=350+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=334+10;
		ob1.xkoor[1]=650+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=334+10;
		ob1.xkoor[2]=800+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=634+10;
		ob1.xkoor[3]=200+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=634+10;
	}
	if (stdFigNum==8) {
		KolVersh=5;
		ob1.xkoor[0]=501+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=274+10;
		ob1.xkoor[1]=701+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=424+10;
		ob1.xkoor[2]=651+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=674+10;
		ob1.xkoor[3]=351+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=674+10;
		ob1.xkoor[4]=301+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[4]=424+10;
	}
	if (stdFigNum==9) {
		KolVersh=6;
		ob1.xkoor[0]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=300+10;
		ob1.xkoor[1]=650+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=400+10;
		ob1.xkoor[2]=650+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=600+10;
		ob1.xkoor[3]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=700+10;
		ob1.xkoor[4]=350+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[4]=600+10;
		ob1.xkoor[5]=350+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[5]=400+10;
	}
	if (stdFigNum==10) {
		KolVersh=7;
		ob1.xkoor[0]=505+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=285+10;
		ob1.xkoor[1]=655+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=385+10;
		ob1.xkoor[2]=705+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=535+10;
		ob1.xkoor[3]=605+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=685+10;
		ob1.xkoor[4]=405+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[4]=685+10;
		ob1.xkoor[5]=305+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[5]=535+10;
		ob1.xkoor[6]=355+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[6]=385+10;
	}
	if (stdFigNum==11) {
		KolVersh=8;
		ob1.xkoor[0]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[0]=300+10;
		ob1.xkoor[1]=650+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[1]=350+10;
		ob1.xkoor[2]=700+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[2]=500+10;
		ob1.xkoor[3]=650+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[3]=650+10;
		ob1.xkoor[4]=500+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[4]=700+10;
		ob1.xkoor[5]=350+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[5]=650+10;
		ob1.xkoor[6]=300+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[6]=500+10;
		ob1.xkoor[7]=350+FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10;
		ob1.ykoor[7]=350+10;
	}
	ob1.ris();
	BitBtn1->Click();
	FormMnogoug->Button2->TabStop=true;
	FormMnogoug->Button3->TabStop=true;
	FormMnogoug->Button5->TabStop=true;
	FormMnogoug->BitBtn1->Enabled=true;
	FormMnogoug->Button6->Enabled=true;
	FormMnogoug->Edit1->Enabled=true;
	FormMnogoug->Edit4->Enabled=true;
	Edit5->Enabled=true;
		Edit6->Enabled=true;
		Edit7->Enabled=true;
		Edit8->Enabled=true;
		Button5->Enabled=true;
		Button7->Enabled=true;
		Button8->Enabled=true;
		Image12->Enabled=true;
		Image13->Enabled=true;
	FormMnogoug->BitBtn1->Font->Color=clGreen;
	FormMnogoug->Panel1->Visible=false;
	FormMnogoug->Label3->Visible=false;
	FormMnogoug->Label2->Caption="���������� ��������";
	FormMnogoug->Edit2->Text="0";
	FormMnogoug->Edit3->Text="0";
	FormMnogoug->Button1->Visible=false;
	FormMnogoug->Button4->Visible=true;
	FormMnogoug->Edit2->Enabled=false;
	FormMnogoug->Edit3->Enabled=false;
	i=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Button1Click(TObject *Sender)
{
	ob1.vvod(i);
	i++;
	if (i==KolVersh) {
		FormMnogoug->Button2->TabStop=true;
		FormMnogoug->Button3->TabStop=true;
		FormMnogoug->Button5->TabStop=true;
		FormMnogoug->BitBtn1->Enabled=true;
		FormMnogoug->Button6->Enabled=true;
		FormMnogoug->Edit1->Enabled=true;
		FormMnogoug->Edit4->Enabled=true;
		FormMnogoug->BitBtn1->Font->Color=clGreen;
		FormMnogoug->Panel1->Visible=false;
		FormMnogoug->Label3->Visible=false;
		FormMnogoug->Label2->Caption="���������� ��������";
		FormMnogoug->Edit2->Text="0";
		FormMnogoug->Edit3->Text="0";
		FormMnogoug->Button1->Visible=false;
		FormMnogoug->Button4->Visible=true;
		FormMnogoug->Edit2->Enabled=false;
		FormMnogoug->Edit3->Enabled=false;
		//
		Edit5->Enabled=true;
		Edit6->Enabled=true;
		Edit7->Enabled=true;
		Edit8->Enabled=true;
		Button5->Enabled=true;
		Button7->Enabled=true;
		Button8->Enabled=true;
		Image12->Enabled=true;
		Image13->Enabled=true;
		i=0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Button2Click(TObject *Sender)
{	FormMnogoug->Close();}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Button3Click(TObject *Sender)
{	FormStart->Close();}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Button4Click(TObject *Sender)
{
	for (int i=0; i < 10; i++) {
		ob1.xkoor[i]=-1;
		ob1.ykoor[i]=-1;
	}
	FormMnogoug->Button2->TabStop=false;
	FormMnogoug->Button3->TabStop=false;
	FormMnogoug->Button5->TabStop=false;
	FormMnogoug->BitBtn1->Font->Color=clRed;
	FormMnogoug->BitBtn1->Enabled=false;
	FormMnogoug->Edit2->Enabled=true;
	FormMnogoug->Edit3->Enabled=true;
	FormMnogoug->Label2->Caption="����������";
	FormMnogoug->Panel1->Caption="1";
	FormMnogoug->Label3->Caption="-�� �����";
	FormMnogoug->Panel1->Visible=true;
	FormMnogoug->Label3->Visible=true;
	FormMnogoug->Button1->Visible=true;
	FormMnogoug->Button4->Visible=false;
	FormMnogoug->Button6->Enabled=false;
	FormMnogoug->Edit1->Enabled=false;
	FormMnogoug->Edit4->Enabled=false;
	Edit5->Enabled=false;
		Edit6->Enabled=false;
		Edit7->Enabled=false;
		Edit8->Enabled=false;
		Button5->Enabled=false;
		Button7->Enabled=false;
		Button8->Enabled=false;
		Image12->Enabled=false;
		Image13->Enabled=false;
	KolVersh=StrToInt(FormChisloVershin->Edit1->Text);
	i=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::BitBtn1Click(TObject *Sender)
{
	drawMnogoug();
	ob1.ris();
}
//---------------------------------------------------------------------------

void endOfEntering(){
	FormMnogoug->Button2->TabStop=true;
	FormMnogoug->Button3->TabStop=true;
	FormMnogoug->Button5->TabStop=true;
	FormMnogoug->BitBtn1->Enabled=true;
	FormMnogoug->Button6->Enabled=true;
	FormMnogoug->Edit1->Enabled=true;
	FormMnogoug->Edit4->Enabled=true;
	FormMnogoug->BitBtn1->Font->Color=clGreen;
	FormMnogoug->Panel1->Visible=false;
	FormMnogoug->Label3->Visible=false;
	FormMnogoug->Label2->Caption="���������� ��������";
	FormMnogoug->Edit2->Text="0";
	FormMnogoug->Edit3->Text="0";
	FormMnogoug->Button1->Visible=false;
	FormMnogoug->Button4->Visible=true;
	FormMnogoug->Edit2->Enabled=false;
	FormMnogoug->Edit3->Enabled=false;
	for (i=KolVersh; i < 10; i++) {
		ob1.xkoor[i]=-1;
		ob1.ykoor[i]=-1;
	}
}

void params(){
	if (KolVersh>=1) {
		FormParametrsMnogoug->A1->Visible=true;
		FormParametrsMnogoug->X1->Visible=true;
		FormParametrsMnogoug->z1->Visible=true;
		FormParametrsMnogoug->Y1->Visible=true;
		FormParametrsMnogoug->dl1->Visible=true;
		FormParametrsMnogoug->d1->Visible=true;
		FormParametrsMnogoug->X1->Text=IntToStr(ob1.xkoor[0]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
		FormParametrsMnogoug->Y1->Text=IntToStr(ob1.ykoor[0]-10);
		FormParametrsMnogoug->d1->Text=FloatToStr(ob1.LenSt(0,1));
		if (KolVersh>=2) {
			FormParametrsMnogoug->A2->Visible=true;
			FormParametrsMnogoug->X2->Visible=true;
			FormParametrsMnogoug->z2->Visible=true;
			FormParametrsMnogoug->Y2->Visible=true;
			FormParametrsMnogoug->dl2->Visible=true;
			FormParametrsMnogoug->d2->Visible=true;
			FormParametrsMnogoug->X2->Text=IntToStr(ob1.xkoor[1]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
			FormParametrsMnogoug->Y2->Text=IntToStr(ob1.ykoor[1]-10);
			if (KolVersh==2) {
				FormParametrsMnogoug->dl2->Caption="A2A1";
				FormParametrsMnogoug->d2->Text=FloatToStr(ob1.LenSt(1,0));
			}
			else FormParametrsMnogoug->d2->Text=FloatToStr(ob1.LenSt(1,2));
			if (KolVersh>=3) {
				FormParametrsMnogoug->A3->Visible=true;
				FormParametrsMnogoug->X3->Visible=true;
				FormParametrsMnogoug->z3->Visible=true;
				FormParametrsMnogoug->Y3->Visible=true;
				FormParametrsMnogoug->dl3->Visible=true;
				FormParametrsMnogoug->d3->Visible=true;
				FormParametrsMnogoug->sl1->Visible=true;
				FormParametrsMnogoug->s1->Visible=true;
				FormParametrsMnogoug->rl1->Visible=true;
				FormParametrsMnogoug->r1->Visible=true;
				FormParametrsMnogoug->C1->Visible=true;
				FormParametrsMnogoug->cx1->Visible=true;
				FormParametrsMnogoug->cy1->Visible=true;
				FormParametrsMnogoug->zs1->Visible=true;
				FormParametrsMnogoug->r1->Text=FloatToStr(ob1.LenSt(0,2));
				FormParametrsMnogoug->X3->Text=IntToStr(ob1.xkoor[2]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
				FormParametrsMnogoug->Y3->Text=IntToStr(ob1.ykoor[2]-10);
				FormParametrsMnogoug->s1->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d1->Text),StrToFloat(FormParametrsMnogoug->d2->Text),StrToFloat(FormParametrsMnogoug->r1->Text)));
				FormParametrsMnogoug->cx1->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X2->Text),StrToFloat(FormParametrsMnogoug->X3->Text)));
				FormParametrsMnogoug->cy1->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y2->Text),StrToFloat(FormParametrsMnogoug->Y3->Text)));
				if (KolVersh==3) {
					FormParametrsMnogoug->dl3->Caption="A3A1";
					FormParametrsMnogoug->d3->Text=FloatToStr(ob1.LenSt(2,0));
				}
				else FormParametrsMnogoug->d3->Text=FloatToStr(ob1.LenSt(2,3));
				if (KolVersh>=4) {
					FormParametrsMnogoug->A4->Visible=true;
					FormParametrsMnogoug->X4->Visible=true;
					FormParametrsMnogoug->z4->Visible=true;
					FormParametrsMnogoug->Y4->Visible=true;
					FormParametrsMnogoug->dl4->Visible=true;
					FormParametrsMnogoug->d4->Visible=true;
					FormParametrsMnogoug->sl2->Visible=true;
					FormParametrsMnogoug->s2->Visible=true;
					FormParametrsMnogoug->rl2->Visible=true;
					FormParametrsMnogoug->r2->Visible=true;
					FormParametrsMnogoug->C2->Visible=true;
					FormParametrsMnogoug->cx2->Visible=true;
					FormParametrsMnogoug->cy2->Visible=true;
					FormParametrsMnogoug->zs2->Visible=true;
					FormParametrsMnogoug->r2->Text=FloatToStr(ob1.LenSt(0,3));
					FormParametrsMnogoug->X4->Text=IntToStr(ob1.xkoor[3]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
					FormParametrsMnogoug->Y4->Text=IntToStr(ob1.ykoor[3]-10);
					FormParametrsMnogoug->s2->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d3->Text),StrToFloat(FormParametrsMnogoug->r1->Text),StrToFloat(FormParametrsMnogoug->r2->Text)));
					FormParametrsMnogoug->cx2->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X3->Text),StrToFloat(FormParametrsMnogoug->X4->Text)));
					FormParametrsMnogoug->cy2->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y3->Text),StrToFloat(FormParametrsMnogoug->Y4->Text)));
					if (KolVersh==4) {
						FormParametrsMnogoug->dl4->Caption="A4A1";
						FormParametrsMnogoug->d4->Text=FloatToStr(ob1.LenSt(3,0));
					}
					else FormParametrsMnogoug->d4->Text=FloatToStr(ob1.LenSt(3,4));
					if (KolVersh>=5) {
						FormParametrsMnogoug->A5->Visible=true;
						FormParametrsMnogoug->X5->Visible=true;
						FormParametrsMnogoug->z5->Visible=true;
						FormParametrsMnogoug->Y5->Visible=true;
						FormParametrsMnogoug->dl5->Visible=true;
						FormParametrsMnogoug->d5->Visible=true;
						FormParametrsMnogoug->sl3->Visible=true;
						FormParametrsMnogoug->s3->Visible=true;
						FormParametrsMnogoug->rl3->Visible=true;
						FormParametrsMnogoug->r3->Visible=true;
						FormParametrsMnogoug->C3->Visible=true;
						FormParametrsMnogoug->cx3->Visible=true;
						FormParametrsMnogoug->cy3->Visible=true;
						FormParametrsMnogoug->zs3->Visible=true;
						FormParametrsMnogoug->r3->Text=FloatToStr(ob1.LenSt(0,4));
						FormParametrsMnogoug->X5->Text=IntToStr(ob1.xkoor[4]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
						FormParametrsMnogoug->Y5->Text=IntToStr(ob1.ykoor[4]-10);
						FormParametrsMnogoug->s3->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d4->Text),StrToFloat(FormParametrsMnogoug->r2->Text),StrToFloat(FormParametrsMnogoug->r3->Text)));
						FormParametrsMnogoug->cx3->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X4->Text),StrToFloat(FormParametrsMnogoug->X5->Text)));
						FormParametrsMnogoug->cy3->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y4->Text),StrToFloat(FormParametrsMnogoug->Y5->Text)));
						if (KolVersh==5) {
							FormParametrsMnogoug->dl5->Caption="A5A1";
							FormParametrsMnogoug->d5->Text=FloatToStr(ob1.LenSt(4,0));
						}
						else FormParametrsMnogoug->d5->Text=FloatToStr(ob1.LenSt(4,5));
						if (KolVersh>=6) {
							FormParametrsMnogoug->A6->Visible=true;
							FormParametrsMnogoug->X6->Visible=true;
							FormParametrsMnogoug->z6->Visible=true;
							FormParametrsMnogoug->Y6->Visible=true;
							FormParametrsMnogoug->dl6->Visible=true;
							FormParametrsMnogoug->d6->Visible=true;
							FormParametrsMnogoug->sl4->Visible=true;
							FormParametrsMnogoug->s4->Visible=true;
							FormParametrsMnogoug->rl4->Visible=true;
							FormParametrsMnogoug->r4->Visible=true;
							FormParametrsMnogoug->C4->Visible=true;
							FormParametrsMnogoug->cx4->Visible=true;
							FormParametrsMnogoug->cy4->Visible=true;
							FormParametrsMnogoug->zs4->Visible=true;
							FormParametrsMnogoug->r4->Text=FloatToStr(ob1.LenSt(0,5));
							FormParametrsMnogoug->X6->Text=IntToStr(ob1.xkoor[5]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
							FormParametrsMnogoug->Y6->Text=IntToStr(ob1.ykoor[5]-10);
							FormParametrsMnogoug->s4->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d5->Text),StrToFloat(FormParametrsMnogoug->r3->Text),StrToFloat(FormParametrsMnogoug->r4->Text)));
							FormParametrsMnogoug->cx4->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X5->Text),StrToFloat(FormParametrsMnogoug->X6->Text)));
							FormParametrsMnogoug->cy4->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y5->Text),StrToFloat(FormParametrsMnogoug->Y6->Text)));
							if (KolVersh==6) {
								FormParametrsMnogoug->dl6->Caption="A6A1";
								FormParametrsMnogoug->d6->Text=FloatToStr(ob1.LenSt(5,0));
							}
							else FormParametrsMnogoug->d6->Text=FloatToStr(ob1.LenSt(5,6));
							if (KolVersh>=7) {
								FormParametrsMnogoug->A7->Visible=true;
								FormParametrsMnogoug->X7->Visible=true;
								FormParametrsMnogoug->z7->Visible=true;
								FormParametrsMnogoug->Y7->Visible=true;
								FormParametrsMnogoug->dl7->Visible=true;
								FormParametrsMnogoug->d7->Visible=true;
								FormParametrsMnogoug->sl5->Visible=true;
								FormParametrsMnogoug->s5->Visible=true;
								FormParametrsMnogoug->rl5->Visible=true;
								FormParametrsMnogoug->r5->Visible=true;
								FormParametrsMnogoug->C5->Visible=true;
								FormParametrsMnogoug->cx5->Visible=true;
								FormParametrsMnogoug->cy5->Visible=true;
								FormParametrsMnogoug->zs5->Visible=true;
								FormParametrsMnogoug->r5->Text=FloatToStr(ob1.LenSt(0,6));
								FormParametrsMnogoug->X7->Text=IntToStr(ob1.xkoor[6]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
								FormParametrsMnogoug->Y7->Text=IntToStr(ob1.ykoor[6]-10);
								FormParametrsMnogoug->s5->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d5->Text),StrToFloat(FormParametrsMnogoug->r4->Text),StrToFloat(FormParametrsMnogoug->r5->Text)));
								FormParametrsMnogoug->cx5->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X6->Text),StrToFloat(FormParametrsMnogoug->X7->Text)));
								FormParametrsMnogoug->cy5->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y6->Text),StrToFloat(FormParametrsMnogoug->Y7->Text)));
								if (KolVersh==7) {
									FormParametrsMnogoug->dl7->Caption="A7A1";
									FormParametrsMnogoug->d7->Text=FloatToStr(ob1.LenSt(6,0));
								}
								else FormParametrsMnogoug->d7->Text=FloatToStr(ob1.LenSt(6,7));
								if (KolVersh>=8) {
									FormParametrsMnogoug->A8->Visible=true;
									FormParametrsMnogoug->X8->Visible=true;
									FormParametrsMnogoug->z8->Visible=true;
									FormParametrsMnogoug->Y8->Visible=true;
									FormParametrsMnogoug->dl8->Visible=true;
									FormParametrsMnogoug->d8->Visible=true;
									FormParametrsMnogoug->sl6->Visible=true;
									FormParametrsMnogoug->s6->Visible=true;
									FormParametrsMnogoug->rl6->Visible=true;
									FormParametrsMnogoug->r6->Visible=true;
									FormParametrsMnogoug->C6->Visible=true;
									FormParametrsMnogoug->cx6->Visible=true;
									FormParametrsMnogoug->cy6->Visible=true;
									FormParametrsMnogoug->zs6->Visible=true;
									FormParametrsMnogoug->r6->Text=FloatToStr(ob1.LenSt(0,7));
									FormParametrsMnogoug->X8->Text=IntToStr(ob1.xkoor[7]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
									FormParametrsMnogoug->Y8->Text=IntToStr(ob1.ykoor[7]-10);
									FormParametrsMnogoug->s6->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d6->Text),StrToFloat(FormParametrsMnogoug->r5->Text),StrToFloat(FormParametrsMnogoug->r6->Text)));
									FormParametrsMnogoug->cx6->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X7->Text),StrToFloat(FormParametrsMnogoug->X8->Text)));
									FormParametrsMnogoug->cy6->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y7->Text),StrToFloat(FormParametrsMnogoug->Y8->Text)));
									if (KolVersh==8) {
										FormParametrsMnogoug->dl8->Caption="A8A1";
										FormParametrsMnogoug->d8->Text=FloatToStr(ob1.LenSt(7,0));
									}
									else FormParametrsMnogoug->d8->Text=FloatToStr(ob1.LenSt(7,8));
									if (KolVersh>=9) {
										FormParametrsMnogoug->A9->Visible=true;
										FormParametrsMnogoug->X9->Visible=true;
										FormParametrsMnogoug->z9->Visible=true;
										FormParametrsMnogoug->Y9->Visible=true;
										FormParametrsMnogoug->dl9->Visible=true;
										FormParametrsMnogoug->d9->Visible=true;
										FormParametrsMnogoug->sl7->Visible=true;
										FormParametrsMnogoug->s7->Visible=true;
										FormParametrsMnogoug->rl7->Visible=true;
										FormParametrsMnogoug->r7->Visible=true;
										FormParametrsMnogoug->C7->Visible=true;
										FormParametrsMnogoug->cx7->Visible=true;
										FormParametrsMnogoug->cy7->Visible=true;
										FormParametrsMnogoug->zs7->Visible=true;
										FormParametrsMnogoug->r7->Text=FloatToStr(ob1.LenSt(0,8));
										FormParametrsMnogoug->X9->Text=IntToStr(ob1.xkoor[8]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
										FormParametrsMnogoug->Y9->Text=IntToStr(ob1.ykoor[8]-10);
										FormParametrsMnogoug->d9->Text=FloatToStr(ob1.LenSt(8,9));
										FormParametrsMnogoug->s7->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d7->Text),StrToFloat(FormParametrsMnogoug->r6->Text),StrToFloat(FormParametrsMnogoug->r7->Text)));
										FormParametrsMnogoug->cx7->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X8->Text),StrToFloat(FormParametrsMnogoug->X9->Text)));
										FormParametrsMnogoug->cy7->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y8->Text),StrToFloat(FormParametrsMnogoug->Y9->Text)));
										if (KolVersh==9) {
											FormParametrsMnogoug->dl9->Caption="A9A1";
											FormParametrsMnogoug->d9->Text=FloatToStr(ob1.LenSt(8,0));
										}
										else FormParametrsMnogoug->d9->Text=FloatToStr(ob1.LenSt(8,9));
										if (KolVersh==10) {
											FormParametrsMnogoug->A10->Visible=true;
											FormParametrsMnogoug->X10->Visible=true;
											FormParametrsMnogoug->z10->Visible=true;
											FormParametrsMnogoug->Y10->Visible=true;
											FormParametrsMnogoug->dl10->Visible=true;
											FormParametrsMnogoug->d10->Visible=true;
											FormParametrsMnogoug->sl8->Visible=true;
											FormParametrsMnogoug->s8->Visible=true;
											FormParametrsMnogoug->rl8->Visible=true;
											FormParametrsMnogoug->r8->Visible=true;
											FormParametrsMnogoug->C8->Visible=true;
											FormParametrsMnogoug->cx8->Visible=true;
											FormParametrsMnogoug->cy8->Visible=true;
											FormParametrsMnogoug->zs8->Visible=true;
											FormParametrsMnogoug->r8->Text=FloatToStr(ob1.LenSt(0,9));
											FormParametrsMnogoug->X10->Text=IntToStr(ob1.xkoor[9]-FormMnogoug->Shape1->Left-FormMnogoug->Shape1->Width-10);
											FormParametrsMnogoug->Y10->Text=IntToStr(ob1.ykoor[9]-10);
											FormParametrsMnogoug->d10->Text=FloatToStr(ob1.LenSt(9,0));
											FormParametrsMnogoug->dl10->Caption="A10A1";
											FormParametrsMnogoug->s8->Text=FloatToStr(ob1.ploshTr(StrToFloat(FormParametrsMnogoug->d8->Text),StrToFloat(FormParametrsMnogoug->r7->Text),StrToFloat(FormParametrsMnogoug->r8->Text)));
											FormParametrsMnogoug->cx8->Text=FloatToStr(ob1.centerXtr(StrToFloat(FormParametrsMnogoug->X1->Text),StrToFloat(FormParametrsMnogoug->X9->Text),StrToFloat(FormParametrsMnogoug->X10->Text)));
											FormParametrsMnogoug->cy8->Text=FloatToStr(ob1.centerYtr(StrToFloat(FormParametrsMnogoug->Y1->Text),StrToFloat(FormParametrsMnogoug->Y9->Text),StrToFloat(FormParametrsMnogoug->Y10->Text)));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	ob1.centersEntering();
	FormParametrsMnogoug->Edit1->Text=FloatToStr(ob1.perimetr());
	FormParametrsMnogoug->Edit2->Text=FloatToStr(ob1.plosh());
	FormParametrsMnogoug->Edit3->Text=FloatToStr(ob1.centerMassX());
	ob1.setWeightCenterX((int)StrToFloat(FormParametrsMnogoug->Edit3->Text));
	FormParametrsMnogoug->Edit4->Text=FloatToStr(ob1.centerMassY());
	ob1.setWeightCenterY((int)StrToFloat(FormParametrsMnogoug->Edit4->Text));
}

void paramsDelete(){
	FormParametrsMnogoug->A1->Visible=false;
	FormParametrsMnogoug->A2->Visible=false;
	FormParametrsMnogoug->A3->Visible=false;
	FormParametrsMnogoug->A4->Visible=false;
	FormParametrsMnogoug->A5->Visible=false;
	FormParametrsMnogoug->A6->Visible=false;
	FormParametrsMnogoug->A7->Visible=false;
	FormParametrsMnogoug->A8->Visible=false;
	FormParametrsMnogoug->A9->Visible=false;
	FormParametrsMnogoug->A10->Visible=false;
	//
	FormParametrsMnogoug->X1->Visible=false;
	FormParametrsMnogoug->X2->Visible=false;
	FormParametrsMnogoug->X3->Visible=false;
	FormParametrsMnogoug->X4->Visible=false;
	FormParametrsMnogoug->X5->Visible=false;
	FormParametrsMnogoug->X6->Visible=false;
	FormParametrsMnogoug->X7->Visible=false;
	FormParametrsMnogoug->X8->Visible=false;
	FormParametrsMnogoug->X9->Visible=false;
	FormParametrsMnogoug->X10->Visible=false;
	//
	FormParametrsMnogoug->Y1->Visible=false;
	FormParametrsMnogoug->Y2->Visible=false;
	FormParametrsMnogoug->Y3->Visible=false;
	FormParametrsMnogoug->Y4->Visible=false;
	FormParametrsMnogoug->Y5->Visible=false;
	FormParametrsMnogoug->Y6->Visible=false;
	FormParametrsMnogoug->Y7->Visible=false;
	FormParametrsMnogoug->Y8->Visible=false;
	FormParametrsMnogoug->Y9->Visible=false;
	FormParametrsMnogoug->Y10->Visible=false;
	//
	FormParametrsMnogoug->z1->Visible=false;
	FormParametrsMnogoug->z2->Visible=false;
	FormParametrsMnogoug->z3->Visible=false;
	FormParametrsMnogoug->z4->Visible=false;
	FormParametrsMnogoug->z5->Visible=false;
	FormParametrsMnogoug->z6->Visible=false;
	FormParametrsMnogoug->z7->Visible=false;
	FormParametrsMnogoug->z8->Visible=false;
	FormParametrsMnogoug->z9->Visible=false;
	FormParametrsMnogoug->z10->Visible=false;
	//
	FormParametrsMnogoug->dl1->Visible=false;
	FormParametrsMnogoug->dl2->Visible=false;
	FormParametrsMnogoug->dl3->Visible=false;
	FormParametrsMnogoug->dl4->Visible=false;
	FormParametrsMnogoug->dl5->Visible=false;
	FormParametrsMnogoug->dl6->Visible=false;
	FormParametrsMnogoug->dl7->Visible=false;
	FormParametrsMnogoug->dl8->Visible=false;
	FormParametrsMnogoug->dl9->Visible=false;
	FormParametrsMnogoug->dl10->Visible=false;
	//
	FormParametrsMnogoug->d1->Visible=false;
	FormParametrsMnogoug->d2->Visible=false;
	FormParametrsMnogoug->d3->Visible=false;
	FormParametrsMnogoug->d4->Visible=false;
	FormParametrsMnogoug->d5->Visible=false;
	FormParametrsMnogoug->d6->Visible=false;
	FormParametrsMnogoug->d7->Visible=false;
	FormParametrsMnogoug->d8->Visible=false;
	FormParametrsMnogoug->d9->Visible=false;
	FormParametrsMnogoug->d10->Visible=false;
	//
	FormParametrsMnogoug->rl1->Visible=false;
	FormParametrsMnogoug->rl2->Visible=false;
	FormParametrsMnogoug->rl3->Visible=false;
	FormParametrsMnogoug->rl4->Visible=false;
	FormParametrsMnogoug->rl5->Visible=false;
	FormParametrsMnogoug->rl6->Visible=false;
	FormParametrsMnogoug->rl7->Visible=false;
	FormParametrsMnogoug->rl8->Visible=false;
	//
	FormParametrsMnogoug->r1->Visible=false;
	FormParametrsMnogoug->r2->Visible=false;
	FormParametrsMnogoug->r3->Visible=false;
	FormParametrsMnogoug->r4->Visible=false;
	FormParametrsMnogoug->r5->Visible=false;
	FormParametrsMnogoug->r6->Visible=false;
	FormParametrsMnogoug->r7->Visible=false;
	FormParametrsMnogoug->r8->Visible=false;
	//
	FormParametrsMnogoug->sl1->Visible=false;
	FormParametrsMnogoug->sl2->Visible=false;
	FormParametrsMnogoug->sl3->Visible=false;
	FormParametrsMnogoug->sl4->Visible=false;
	FormParametrsMnogoug->sl5->Visible=false;
	FormParametrsMnogoug->sl6->Visible=false;
	FormParametrsMnogoug->sl7->Visible=false;
	FormParametrsMnogoug->sl8->Visible=false;
	//
	FormParametrsMnogoug->s1->Visible=false;
	FormParametrsMnogoug->s2->Visible=false;
	FormParametrsMnogoug->s3->Visible=false;
	FormParametrsMnogoug->s4->Visible=false;
	FormParametrsMnogoug->s5->Visible=false;
	FormParametrsMnogoug->s6->Visible=false;
	FormParametrsMnogoug->s7->Visible=false;
	FormParametrsMnogoug->s8->Visible=false;
	//
	FormParametrsMnogoug->C1->Visible=false;
	FormParametrsMnogoug->C2->Visible=false;
	FormParametrsMnogoug->C3->Visible=false;
	FormParametrsMnogoug->C4->Visible=false;
	FormParametrsMnogoug->C5->Visible=false;
	FormParametrsMnogoug->C6->Visible=false;
	FormParametrsMnogoug->C7->Visible=false;
	FormParametrsMnogoug->C8->Visible=false;
	//
	FormParametrsMnogoug->cx1->Visible=false;
	FormParametrsMnogoug->cx2->Visible=false;
	FormParametrsMnogoug->cx3->Visible=false;
	FormParametrsMnogoug->cx4->Visible=false;
	FormParametrsMnogoug->cx5->Visible=false;
	FormParametrsMnogoug->cx6->Visible=false;
	FormParametrsMnogoug->cx7->Visible=false;
	FormParametrsMnogoug->cx8->Visible=false;
	//
	FormParametrsMnogoug->zs1->Visible=false;
	FormParametrsMnogoug->zs2->Visible=false;
	FormParametrsMnogoug->zs3->Visible=false;
	FormParametrsMnogoug->zs4->Visible=false;
	FormParametrsMnogoug->zs5->Visible=false;
	FormParametrsMnogoug->zs6->Visible=false;
	FormParametrsMnogoug->zs7->Visible=false;
	FormParametrsMnogoug->zs8->Visible=false;
	//
	FormParametrsMnogoug->cy1->Visible=false;
	FormParametrsMnogoug->cy2->Visible=false;
	FormParametrsMnogoug->cy3->Visible=false;
	FormParametrsMnogoug->cy4->Visible=false;
	FormParametrsMnogoug->cy5->Visible=false;
	FormParametrsMnogoug->cy6->Visible=false;
	FormParametrsMnogoug->cy7->Visible=false;
	FormParametrsMnogoug->cy8->Visible=false;
}

void __fastcall TFormMnogoug::Button5Click(TObject *Sender)
{
	FormParametrsMnogoug->Show();
	params();
}
//---------------------------------------------------------------------------

void __fastcall TFormMnogoug::Button6Click(TObject *Sender)
{
	params();
	ob1.setMoveToX(StrToInt(Edit1->Text));
	ob1.setMoveToY(StrToInt(Edit4->Text));
	Timer1->Enabled=true;
}
//-------------------------------------------------------------------------

void __fastcall TFormMnogoug::Timer1Timer(TObject *Sender)
{
	if (ob1.getWeightCenterX()!=ob1.getMoveToX()) {
		ob1.movingByX(0,KolVersh);
	}
	if (ob1.getWeightCenterX()==ob1.getMoveToX()) {
		Timer1->Enabled=false;
		Timer2->Enabled=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Timer2Timer(TObject *Sender)
{
	if (ob1.getWeightCenterY()!=ob1.getMoveToY()) {
		ob1.movingByY(0,KolVersh);
	}
	if (ob1.getWeightCenterY()==ob1.getMoveToY()) Timer2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Button8Click(TObject *Sender)
{
	if (ob1.getTurnByX()==-500 && ob1.getAngle()==0) {
		ob1.setTurnByX(StrToFloat(Edit5->Text));
		ob1.setTurnByY(StrToFloat(Edit6->Text));
		ob1.setAngle(StrToFloat(Edit7->Text));
	}
	params();
	ob1.turning();
	Timer3->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Timer3Timer(TObject *Sender)
{
	if (ob1.getWeightCenterX()!=ob1.getMoveToX()) {
		ob1.movingByX(1,KolVersh);
	}
	if (ob1.getWeightCenterX()==ob1.getMoveToX()) {
		Timer3->Enabled=false;
		Timer4->Enabled=true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormMnogoug::Timer4Timer(TObject *Sender)
{
	if (ob1.getWeightCenterY()!=ob1.getMoveToY()) {
		ob1.movingByY(1,KolVersh);
	}
	if (ob1.getWeightCenterY()==ob1.getMoveToY()) Timer4->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Image1Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=1;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image2Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=2;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image3Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=3;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image4Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=4;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image5Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=5;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image6Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=6;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image7Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=7;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image8Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=8;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image9Click(TObject *Sender) {Edit2->Text="0"; stdFigNum=9;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image10Click(TObject *Sender){Edit2->Text="0"; stdFigNum=10; Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}
void __fastcall TFormMnogoug::Image11Click(TObject *Sender){Edit2->Text="0"; stdFigNum=11; Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();}

void __fastcall TFormMnogoug::Button7Click(TObject *Sender)
{	ob1.changingSize(StrToFloat(Edit8->Text),KolVersh);}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Timer5Timer(TObject *Sender)
{
	ob1.changingSize(StrToFloat(Edit8->Text),KolVersh);
	Edit1->Text="500";
	Edit4->Text="500";
	Button6->Click();
	if (i==10) {
		Timer5->Enabled=false;
		i=0;
	}
	i++;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Image12Click(TObject *Sender)
{
	Edit8->Text="1,01";
	Timer5->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::Image13Click(TObject *Sender)
{
	Edit8->Text="0,99";
	Timer5->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFormMnogoug::ComboBox1Change(TObject *Sender)
{
	Edit2->Enabled=true;
	Edit3->Enabled=true;
	Button1->Enabled=true;
	if (ComboBox1->Text=="�����") {KolVersh=2;}
	if (ComboBox1->Text=="3-��������") {KolVersh=3;}
	if (ComboBox1->Text=="4-��������") {KolVersh=4;}
	if (ComboBox1->Text=="5-��������") {KolVersh=5;}
	if (ComboBox1->Text=="6-��������") {KolVersh=6;}
	if (ComboBox1->Text=="7-��������") {KolVersh=7;}
	if (ComboBox1->Text=="8-��������") {KolVersh=8;}
	if (ComboBox1->Text=="9-��������") {KolVersh=9;}
	if (ComboBox1->Text=="10-��������") {KolVersh=10;}
	if (Button4->Visible==true) {
		Button4->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormMnogoug::Button9Click(TObject *Sender)
{
	params();
	ob1.setDegree(StrToFloat(Edit7->Text));
	Edit7->Text="1";
	Timer6->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFormMnogoug::Timer6Timer(TObject *Sender)
{
	static int i=0;
	params();
	ob1.setAngle(StrToFloat(Edit7->Text));
	ob1.turningVersh();
	Edit1->Text="500";
	Edit4->Text="500";
	Button6->Click();
	i++;
	if (i==ob1.getDegree()) {
		i=0;
		Timer6->Enabled=false;
		Edit7->Text=IntToStr(ob1.getDegree());
	}
}
//--------------------------------------------------------------------------
void __fastcall TFormMnogoug::FormClick(TObject *Sender)
{
	Edit2->Text="0"; stdFigNum=1;  Button4->Click(); paramsDelete();  BitBtn2->Click(); BitBtn1->Click();
}
//---------------------------------------------------------------------------


void __fastcall TFormMnogoug::Image15Click(TObject *Sender){ Button9->Click();}
//---------------------------------------------------------------------------


