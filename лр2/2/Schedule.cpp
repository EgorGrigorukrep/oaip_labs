//---------------------------------------------------------------------------

#pragma hdrstop
#include "Schedule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <vcl.h>
Aircraft::Aircraft(){
	year=0;
	fuel=0;
}
char* Aircraft::getType(){return type;}
void Aircraft::setType(AnsiString t){ strcpy(type,t.c_str());}
int Aircraft::getYear(){ return year;}
void Aircraft::setYear(int y){year=y;}
int Aircraft::getFuel(){ return fuel;}
void Aircraft::setFuel(int f){ fuel=f;}
int Aircraft::getIndex(){ return index;}
void Aircraft::setIndex(int ind){index=ind;}


Schedule::Schedule(){
	flightNumber=0;
	distance=0;
	beginTimeMinutes=0;
	beginTimeHours=0;
	endTimeMinutes=0;
	endTimeHours=0;
}
int Schedule::getFlightNumber(){return flightNumber;}
void Schedule::setFlightNumber(int fnum){ flightNumber=fnum;}
char* Schedule::getDestination(){return destination;}
void Schedule::setDestination(AnsiString dest){ strcpy(destination,dest.c_str());}
int Schedule::getDistance(){ return distance;}
void Schedule::setDistance(int dist){ distance=dist;}
char* Schedule::getPlaneType(){return plane.getType();}
int Schedule::getPlaneFuel(){return plane.getFuel();}
void Schedule::setPlane(Aircraft pl){ plane=pl;}
int Schedule::getBeginTimeMinutes(){return beginTimeMinutes;}
void Schedule::setBeginTimeMinutes(int btm){ beginTimeMinutes=btm;}
int Schedule::getBeginTimeHours(){return beginTimeHours;}
void Schedule::setBeginTimeHours(int bth){ beginTimeHours=bth;}
int Schedule::getEndTimeHours(){return endTimeHours;}
void Schedule::setEndTimeHours(int eth){ endTimeHours=eth;}
int Schedule::getEndTimeMinutes(){return endTimeMinutes;}
void Schedule::setEndTimeMinutes(int etm){ endTimeMinutes=etm;}

bool isWithoutSymbols(AnsiString str){
	int i,length=str.Length();
	bool isRight=true;
	for (i = 1; i < length; i++) {
		if (str[i]>57 || str[i]<48) {
			isRight=false;
			break;
		}
	}
	return isRight;
}
