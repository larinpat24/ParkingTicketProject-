#pragma once
#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include "ParkedCar.h"
#include "ParkingMeter.h"

const double BASE_FINE = 25.0; // Constant for the base fine

const double HOURLY_FINE = 10.0; // Constant for the additional hourly fine

class ParkingTicket
{
private:
	ParkedCar car; // holds the parked car
	double fine; // holds the parking fine
	int minutes; // holds minutes illegally parked

	void calculateFine() //calculateFine method
	{
		fine = BASE_FINE + (HOURLY_FINE * (minutes / 60));
	}
public:
	ParkingTicket(); // default constructor

	ParkingTicket(ParkedCar &, int); // constructor

	ParkingTicket(const ParkingTicket &);// copy constructor

	void setCar(ParkedCar c) // mutator
	{
		car = c;
	}
	void setMinutes(int m)
	{
		minutes = m;
	}

	ParkedCar getCar() const
	{
		return car;
	}
	double getFine() const
	{
		return fine;
	}
	void print(); // print function
};
#endif
