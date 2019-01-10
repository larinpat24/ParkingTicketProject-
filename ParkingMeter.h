#pragma once
#ifndef PARKING_METER_H
#define PARKING_METER_H
#include <iostream> 
using namespace std;

class ParkingMeter
{
private:
	int minutesPurchased; // holds minutes purchade at meter
public:
	ParkingMeter() // default constructor
	{
		minutesPurchased = 0;
	}
	ParkingMeter(int m) // constructor
	{
		minutesPurchased = m;
	}
	void setMinutesPurchased(int m) // mutator
	{
		minutesPurchased = m;
	}
	int getminutesPurchased() const // accessor
	{
		return minutesPurchased;
	}
	void print() // print function
	{
		cout << "Meter Information: " << endl;
		cout << "\tMinutes Purchased: " << minutesPurchased << endl;
	}
};
#endif
