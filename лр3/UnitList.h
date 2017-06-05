//---------------------------------------------------------------------------

#ifndef UnitListH
#define UnitListH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
struct ListElement{
	AnsiString Name;
	int Amount;
	int CehNumber;

	ListElement *Next;
};

class List{
	private: ListElement *Head,*First;
	public:
		List();
		~List();
		void addFirstElement(AnsiString name, int amount, int cehNumber);
		void addElement(AnsiString name, int amount, int cehNumber);
		void showList();
		void findProduction(AnsiString product);
		void findCEH(int number);
		void findAmount(int amount);
		ListElement* find(AnsiString name);
		bool deleteProduction(AnsiString name);
		bool deleteLast();
};