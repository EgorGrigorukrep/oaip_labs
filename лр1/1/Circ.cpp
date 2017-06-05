//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream.h>
#include <math.h>
#include "UnitStart.h"
#include "UnitCircle.h"
#include "UnitMnogoug.h"
#include "Circ.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Circ::Circ(int *cx1,int *cy1,int *r1)
{
	cx=cx1;
	cy=cy1;
	r=r1;
}

void Circ::ris()
{
	int y,x;
	FormCircle->Canvas->Pen->Color=clRed;
	FormCircle->Canvas->Pen->Width=3;
	FormCircle->Canvas->MoveTo(*cx,*cy-*r);
	for (y=-(*r)+1; y<=*r; y+=1) {
		x=sqrt(powl(*r,2)-powl(y,2));
		FormCircle->Canvas->LineTo(*cx+x,*cy+y);
	}
	for (y=*r-1; y>=-*r; y-=1) {
		x=sqrt(powl(*r,2)-powl(y,2));
		FormCircle->Canvas->LineTo(*cx-x,*cy+y);
	}
	FormCircle->Canvas->Pen->Color=clBlack;
	FormCircle->Canvas->Pen->Width=1;
}

float Circ::plosh(){
	return M_PI*(*r)*(*r);
}

float Circ::perim(){
	return 2*M_PI*(*r);
}

bool Circ::peremeshX(int xkon){
	if (*cx<xkon) (*cx)++;
	else (*cx)--;
	draw();
	ris();
	if (*cx==xkon) return true;
	else return false;
}

bool Circ::peremeshY(int ykon){
	if (*cy<ykon) (*cy)++;
	else (*cy)--;
	draw();
	ris();
	if (*cy==ykon) return true;
	else return false;
}

void Circ::povorot(int xotn,int yotn,int uggr){
	float ugrad=uggr*M_PI/180;
	int dx,dy;
	float rast=sqrt(powl(xotn-*cx,2)+powl(yotn-*cy,2));
	if (*cx<=xotn&&*cy<=yotn){
		int a=yotn-*cy;
		float a1=asin(a/rast),a2=ugrad-a1;
		dx=rast*(cos(a1)-cos(a2));
		dy=rast*(sin(a1)+sin(a2));
		extern xkon,ykon;
		xkon=*cx+dx; ykon=*cy+dy;
	}
	if (*cx>=xotn&&*cy<=yotn) {
		int c=*cx-xotn;
		float a1=asin(c/rast),a2=ugrad-a1;
		dx=rast*(sin(a1)+sin(a2));
		dy=rast*(cos(a1)-cos(a2));
		extern xkon,ykon;
		xkon=*cx-dx; ykon=*cy+dy;
	}
	if (*cx>=xotn&&*cy>=yotn){
		int a=*cy-yotn;
		float a1=asin(a/rast),a2=ugrad-a1;
		dx=rast*(cos(a1)-cos(a2));
		dy=rast*(sin(a1)+sin(a2));
		extern xkon,ykon;
		xkon=*cx-dx; ykon=*cy-dy;
	}
	if (*cx<=xotn&&*cy>=yotn) {
		int c=xotn-*cx;
		float a1=asin(c/rast),a2=ugrad-a1;
		dx=rast*(sin(a1)+sin(a2));
		dy=rast*(cos(a1)-cos(a2));
		extern xkon,ykon;
		xkon=*cx+dx; ykon=*cy-dy;
	}
}
void Circ::uvelich(int xm,int ym,int n){
	const int center=500;
	//extern bool prinadlezh;
	//if (prinadlezh==false) {
		if (*cx==center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy==center+10) {
			(*r)++;
		}
		if (*cx<center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy<center+10) {
			(*cx)--;
			(*cy)--;
			(*r)++;
		}
		if (*cx>center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy>center+10) {
			(*cx)++;
			(*cy)++;
			(*r)++;
		}
		if (*cx<center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy>center+10) {
			(*cx)--;
			(*cy)++;
			(*r)++;
		}
		if (*cx>center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy<center+10) {
			(*cx)++;
			(*cy)--;
			(*r)++;
		}
		if (*cx<center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy==center+10) {
			(*cx)--;
			(*r)++;
		}
		if (*cx>center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy==center+10) {
			(*cx)++;
			(*r)++;
		}
		if (*cx==center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy<center+10) {
			(*cy)--;
			(*r)++;
		}
		if (*cx==center+FormCircle->Shape1->Left+FormCircle->Shape1->Width+10&&*cy>center+10) {
			(*cy)++;
			(*r)++;
		}
		draw();
		ris();
	//}
	//else {
		(*r)++;
		draw();
		ris();
	//}
}

void Circ::changing(float k){
	(*r)*=k;
	draw();
	ris();
}
