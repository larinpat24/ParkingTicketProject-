// Main.cpp : Defines the entry point for the console application.
// Chariane Nkengfack, Niral Patel, Liz Moise

#include "stdafx.h"

//we need these to access the class functions, as well as create instances of the class
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>

using namespace std;

int main()
{
	//an instance of each class
	ParkedCar car;
	ParkingMeter meter;
	PoliceOfficer police;

	//declare variables
	string make, model, color, licenseNum, officer, badgenum;

	//collect data from the user about the car
	cout << "What is the make of the car?" << endl; //use getline instead of cin statements just in case someone types in "Mercedes Benz" for example and the compiler does
													//not take the second half as a declaration of the next cin statement
	getline(cin, make);
	cout << endl << "What is the model of the car?" << endl;
	getline(cin, model);
	cout << endl << "What is the color of the car?" << endl;
	getline(cin, color);
	cout << endl << "What is the license number of the car?" << endl;
	getline(cin, licenseNum);
	
	//make sure the values the user enters are sent to the correct functions
	car.setMake(make);
	car.setModel(model);
	car.setColor(color);
	car.setLicenseNumber(licenseNum);

	//an instance of the class
	ParkingTicket ticket;

	cout << endl << "-----------------------------------------------------" << endl << endl; //separate the code

	int minParked = 0;
	cout << "Enter the total number of minutes you parked for: " << endl;
	cin >> minParked;
	car.setMinutesParked(minParked); //make sure the values are sent to their functions

	int minPayed = 0;
	cout << endl << "Enter the total number of minutes you payed to park for: " << endl;
	cin >> minPayed;
	meter.setMinutesPurchased(minPayed); //make sure the values are sent to their functions

	ticket.setMinutes(minParked - minPayed); //this is how we get the illegally parked minutes

	cout << endl;
	meter.print(); //print the meter info

	cout << endl << "-----------------------------------------------------" << endl; //separate the code

	//we need these to print out the car details entered by the user
	ParkedCar carDetails(make, model, color, licenseNum, minParked);
	ParkingTicket showCarDetails(car, minParked);

	ParkingMeter meter2 = ParkingMeter(minPayed);

	cout << endl << "-----------------------------------------------------" << endl << endl; //separate the code

	//collect the police officer's information
	cout << "Who is the officer that will inspect your car?" << endl;
	cout << "Officer ";
	cin >> officer;
	police.setName(officer);

	cout << endl << "What is your officer's badge number?" << endl;
	cin >> badgenum;
	police.setBadgeNumber(badgenum);

	PoliceOfficer officer2 = PoliceOfficer(officer, badgenum);

	cout << endl << "-----------------------------------------------------" << endl << endl; //separate the code

	//display the police officer's information
	cout << "The officer issuing the ticket is: " << endl;
	cout << "Officer Name: " << police.getName() << endl;
	cout << "Badge Number: " << police.getBadgeNumber() << endl;

	cout << endl << "-----------------------------------------------------" << endl; //separate the code

	//display the official parking ticket statement based on all information mentioned above
	cout << endl << "---OFFICIAL PARKING TICKET STATEMENT--" << endl;
	police.patrol(car, meter);
	
	cout << endl; //separate the code
	return 0; //end the program
}
