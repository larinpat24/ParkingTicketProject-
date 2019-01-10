#include "stdafx.h"

//we need these to access the class functions, as well as create instances of the class
#include "ParkedCar.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

#include <iostream> //we need this for our cin and cout statements
#include <string> //we need this for our string inputs

using namespace std;

ParkingTicket::ParkingTicket() //default constructor
{
	fine = 0; //initialize it to 0
}

ParkingTicket::ParkingTicket(ParkedCar &objectcar, int min) //we use this constructor to pass/display all the values of the car's properties
{
	cout << endl << "Details of the parked car: " << endl;
	cout << "Make: " << objectcar.getMake() << endl;
	cout << "Model: " << objectcar.getModel() << endl;
	cout << "Color: " << objectcar.getColor() << endl;
	cout << "License number: " << objectcar.getLicenseNumber() << endl;
}

ParkingTicket::ParkingTicket(const ParkingTicket &fineForParking)
{
	fineForParking.getFine();
}

void ParkingTicket::print()
{
	calculateFine(); //since we cannot access calculateFine anywhere else because it is a private data member, we will call it here
	cout << endl << "Total Parking Fine (With Extra Fees): $" << fine  << " for " << minutes  << " minutes" << endl << endl;
}
