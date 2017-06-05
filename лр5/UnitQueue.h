//---------------------------------------------------------------------------

#ifndef UnitQueueH
#define UnitQueueH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>

struct Item{
	Item* next;
	Item* previous;
	int number;
};

class Queue {
	protected:
		Item* Head;
		Item* Tail;

	public:
		Queue();

		void add(int number);
		void retrieveFromQueue();
		void show(TListBox* ListBox);
		void _delete();
};
