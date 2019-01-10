//specification file for the PoliceOfficer class
#ifndef POLICE_OFFICER_H
#define POLICE_OFFICER_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

// PoliceOfficer class
class PoliceOfficer
{
private:
	string name; //officer's name
	string badgeNumber; //badge number
	ParkingTicket *ticket; //pointer to a ticket

public:
	//Default constructor
	PoliceOfficer()
	{
		name = " "; 
		badgeNumber = " "; 
		ticket = NULL;
	}

	//constructor
	//the parameter n is the officer's name
	//the parameter bn is the officer's badge number

	PoliceOfficer(string n, string bn)
	{
		name = n;
		badgeNumber = bn;
		ticket = NULL;
	}

	//copy constructor
	PoliceOfficer(const PoliceOfficer &officer2)
	{
		name = officer2.name;
		badgeNumber = officer2.badgeNumber;
		ticket = new ParkingTicket(*officer2.ticket);
	}

	//mutators
	void setName(string n)
	{
		name = n;
	}

	void setBadgeNumber(string b)
	{
		badgeNumber = b;
	}

	//accessors
	string getName()
	{
		return name;
	}

	string getBadgeNumber()
	{
		return badgeNumber;
	}

	//patrol function
	ParkingTicket *patrol(const ParkedCar &, const ParkingMeter &);

	//print function
	void print();
};

#endif
