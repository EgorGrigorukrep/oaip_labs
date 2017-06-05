//---------------------------------------------------------------------------

#ifndef classProductionH
#define classProductionH
//---------------------------------------------------------------------------
#endif
class Production{
	private:
		char name[20];
		int amount;
		int numberOfCEH;
	public:
		Production();
		Production(const char* n,int a, int number);
		char* getName();
		void setName();
		void setNamePrm(char*);
		int getAmount();
		void setAmount();
		void setAmountPrm(int a);
		void setAmountPrm(char*);
		int getNumberOfCEH();
		void setNumberOfCEH();
		void setNumberOfCEHPrm(int n);
		void setNumberOfCEHPrm(char*);
};