//---------------------------------------------------------------------------

#ifndef CircH
#define CircH
//---------------------------------------------------------------------------
#endif
class Circ{
	public:
		int *cx,*cy,*r;
		Circ(int *cx1,int *cy1,int *r1);
		void ris();
		float plosh();
		float perim();
		bool peremeshX(int xkon);
		bool peremeshY(int ykon);
		void povorot(int xotn,int yotn,int uggr);
		void uvelich(int xm,int ym,int n);
		void changing(float k);
};