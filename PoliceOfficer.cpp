#include "stdafx.h"

//we need these to access the class functions, as well as create instances of the class
#include "ParkingMeter.h"
#include "ParkedCar.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

#include <iostream> //needed for cin cout statements
using namespace std;

void getOfficer() //function that helps us retrieve police officer's name and baddge number
{
	PoliceOfficer officerInfo; //an instance of the class

	officerInfo.getName(); //retieve the data we already set in here
	officerInfo.getBadgeNumber(); //repeat that process
}

ParkingTicket * PoliceOfficer::patrol(const ParkedCar &minsPark, const ParkingMeter &minsPurchase)
{
	ParkingTicket ticket; //create an instance of the ParkingTicket object

	int temp = minsPark.getMinutesParked() - minsPurchase.getminutesPurchased(); //we create a temp variable so we don't have to store this value in the private member variable "minutes"
	ticket.setMinutes(temp);

	if (minsPurchase.getminutesPurchased() < minsPark.getMinutesParked()) //if the car was parked for the amount of time it was paid for
	{
		cout << endl << "Your time has expired. Prepare to pay a fine." << endl; //default message for anyone who went over their allotted meter minutes
		if (temp <= 60) //for the first hour of illegal parking
		{
			cout << endl << "Total Parking Fine (With Base Fees): " << BASE_FINE << endl << endl;
		}
		else if (temp > 60) //for every hour after the first hour of illegal parking
		{
			ticket.print(); //takes us straight to the private member function, "calculateFine"
		}
	}
	else if (minsPurchase.getminutesPurchased() >= minsPark.getMinutesParked()) //if the car's parked minutes have not exceeded the purchased minutes...
	{
		cout << endl << "Your time has not expired yet. You will not be charged an additional fine." << endl;
	}

	return nullptr;
}

void PoliceOfficer::print()
{
	getOfficer(); //calls the getOfficer function(); 
}
