

32 of 1,118
parking ticket simulator
Inbox
x

Chariane Nkengfack
Attachments
Jan 5, 2019, 12:37 AM (5 days ago)
to NiralP

heres the files
9 Attachments

#pragma once
//Specification file for the ParkedCar class
#ifndef PARKED_CAR_H
#define PARKED_CAR_H
#include <string>
#include <iostream>
using namespace std;
//ParkedCar class
class ParkedCar
{
private:
	string make; //The car's make
	string model; //The car's model
	string color; //The car's color
	string licenseNumber; //The car's license number 
	int minutesParked; //minutes parked

public:
	//Default constructor 
	//copy Constructor 
	ParkedCar(const ParkedCar &);
	//Mutator 
	void setMake(string m)
	{
		make = m;
	}
	void setModel(string m)
	{
		model = m;
	}
	void setColor(string c)
	{
		color = c;
	}
	void setLicenseNumber(string lic)
	{
		licenseNumber = lic;
	}
	void setMinutesParked(int m)
	{
		minutesParked = m;
	}
	//Accessors
	string getMake()const
	{
		return make;
	}
	string getModel()const
	{
		return model;
	}
	string getColor()const
	{
		return color;
	}
	string getLicenseNumber()const
	{
		return licenseNumber;
	}
	int getMinutesParked()const
	{
		return minutesParked;
	}
	ParkedCar() //set all the values to the blank default
	{
		make = "";
		model = "";
		color = "";
		licenseNumber = "";
		minutesParked = 0;
	}

	ParkedCar(string m, string mo, string c, string l, int min) //set the values of what the user entered to what is going to later on be displayed for them
	{
		make = m;
		model = mo;
		color = c;
		licenseNumber = l;
		minutesParked = min;
	}

	//print function
	void print()
	{
		cout << "";
	}
};
#endif
