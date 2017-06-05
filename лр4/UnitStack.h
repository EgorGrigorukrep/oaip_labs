//---------------------------------------------------------------------------

#ifndef UnitStackH
#define UnitStackH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>

struct stackElement{
	char info;
	double calculation;
	stackElement* next;
};

class Stack{
	stackElement* head;

	public:
		Stack();

		void Push(char info);
		void PushDouble(double calculation);
		char Pop();
		double PopDouble();
		char Peek();
		AnsiString Show();
		void deleteStack();
};