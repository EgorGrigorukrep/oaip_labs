//---------------------------------------------------------------------------

#ifndef MnogougH
#define MnogougH
//---------------------------------------------------------------------------
#endif
#include <vector>
class Mnogoug{
	private:
		int moveToX, moveToY;
		int weightCenterX, weightCenterY;
		int turnByX, turnByY;
		float angle;
		int turnedKoorX[10];
		int turnedKoorY[10];
		int degree;
	public:
		int KolVersh;
		int xkoor[10];
		int ykoor[10];
		float dlst[10];
		float plshtr[8];
		int centersX[8];
		int centersY[8];
		Mnogoug ();
		Mnogoug (int n1);
		void vvod(int i);
		void ris();
		float LenSt(int i1,int i2);
		float perimetr();
		float plosh();
		float ploshTr(float a,float b,float c);
		float centerXtr(int x1,int x2,int x3);
		float centerYtr(int y1,int y2,int y3);
		void centersEntering();
		float centerMassX();
		float centerMassY();
		void movingByX(bool,int);
		void movingByY(bool,int);
		void turning();
		void turningVersh();
		void changingSize(float k,int KolVersh);

		int getMoveToX();
		void setMoveToX(int x);
		int getMoveToY();
		void setMoveToY(int y);
		int getWeightCenterX();
		void setWeightCenterX(int wcx);
		int getWeightCenterY();
		void setWeightCenterY(int wcy);
		int getXMoved();
		void setXMoved(int xm);
		int getYMoved();
		void setYMoved(int ym);
		int getTurnByX();
		void setTurnByX(int tx);
		int getTurnByY();
		void setTurnByY(int ty);
		float getAngle();
		void setAngle(int a);
		int getTurnedKoorX(int i);
		void setTurnedKoorX(int i,int x);
		int getTurnedKoorY(int i);
		void setTurnedKoorY(int i,int y);
		int getDegree();
		void setDegree(int d);
};