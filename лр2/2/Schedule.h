//---------------------------------------------------------------------------

#ifndef ScheduleH
#define ScheduleH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
class Aircraft{
	private:
		char type[20];
		int year;
		int fuel;
		int index;
	public:
		Aircraft();
		char* getType();
		void setType(AnsiString t);
		int getYear();
		void setYear(int );
		int getFuel();
		void setFuel(int);
		int getIndex();
		void setIndex(int);
};

class Schedule{
	private:
		int flightNumber;
		char destination[20];
		int distance;
		Aircraft plane;
		int beginTimeMinutes;
		int beginTimeHours;
		int endTimeMinutes;
		int endTimeHours;
	public:
		Schedule();
		int getFlightNumber();
		void setFlightNumber(int fnum);
		char* getDestination();
		void setDestination(AnsiString dest);
		int getDistance();
		void setDistance(int dist);
		char* getPlaneType();
		int getPlaneFuel();
		void setPlane(Aircraft pl);
		int getBeginTimeMinutes();
		void setBeginTimeMinutes(int btm);
		int getBeginTimeHours();
		void setBeginTimeHours(int bth);
		int getEndTimeHours();
		void setEndTimeHours(int eth);
		int getEndTimeMinutes();
		void setEndTimeMinutes(int etm);
};

bool isWithoutSymbols(AnsiString str);
