//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitDraw.h"
#include "UnitCircle.h"
#include "Circ.h"
#include "UnitMnogoug.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void draw(){
	FormCircle->Canvas->FillRect(Rect(FormCircle->Shape1->Left+FormCircle->Shape1->Width,0,FormCircle->ClientWidth,FormCircle->ClientHeight));
	FormCircle->Canvas->Pen->Color=clRed;
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,10);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,110);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+15,85);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,110);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+5,85);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,10);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+110,10);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+85,15);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+110,10);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+85,5);
	//
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,110);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,1010);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+110,10);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+1610,10);
	FormCircle->Canvas->Pen->Width=2;
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+110,20);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+116,0);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+110,0);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+116,20);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,120);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+4,110);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,120);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+14,110);
	FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,120);
	FormCircle->Canvas->LineTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,130);
	FormCircle->Canvas->Ellipse(FormCircle->Shape1->Left+FormCircle->Shape1->Width+12,12,FormCircle->Shape1->Left+FormCircle->Shape1->Width+22,32);
	FormCircle->Canvas->Pen->Color=clBlack;
	FormCircle->Canvas->Pen->Width=1;
	for (int i=FormCircle->Shape1->Left+FormCircle->Shape1->Width+10; i < FormCircle->ClientWidth; i+=100) {
		FormCircle->Canvas->MoveTo(i,10);
		FormCircle->Canvas->LineTo(i,FormCircle->ClientHeight);
	}
	for (int i=10; i < FormCircle->ClientHeight; i+=100) {
		FormCircle->Canvas->MoveTo(FormCircle->Shape1->Left+FormCircle->Shape1->Width+10,i);
		FormCircle->Canvas->LineTo(FormCircle->ClientWidth,i);
	}
}

void drawMnogoug(){
	FormMnogoug->Canvas->FillRect(Rect(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width,0,FormMnogoug->ClientWidth,FormMnogoug->ClientHeight));
	FormMnogoug->Canvas->Pen->Color=clRed;
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,10);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,110);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+15,85);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,110);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+5,85);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,10);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+110,10);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+85,15);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+110,10);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+85,5);
	//
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,110);
	FormMnogoug->Canvas->Pen->Color=clBlack;
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,1010);
	FormMnogoug->Canvas->Pen->Color=clRed;
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+110,10);
	FormMnogoug->Canvas->Pen->Color=clBlack;
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+1610,10);
	FormMnogoug->Canvas->Pen->Color=clRed;
	FormMnogoug->Canvas->Pen->Width=2;
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+110,20);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+116,0);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+110,0);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+116,20);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,120);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+4,110);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,120);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+14,110);
	FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,120);
	FormMnogoug->Canvas->LineTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,130);
	FormMnogoug->Canvas->Ellipse(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+12,12,FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+22,32);
	FormMnogoug->Canvas->Pen->Color=clBlack;
	FormMnogoug->Canvas->Pen->Width=1;
	for (int i=FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10; i < 2000; i+=100) {
		FormMnogoug->Canvas->MoveTo(i,10);
		FormMnogoug->Canvas->LineTo(i,FormMnogoug->ClientHeight);
	}
	for (int i=10; i < 1500; i+=100) {
		FormMnogoug->Canvas->MoveTo(FormMnogoug->Shape1->Left+FormMnogoug->Shape1->Width+10,i);
		FormMnogoug->Canvas->LineTo(FormMnogoug->ClientWidth,i);
	}
}

