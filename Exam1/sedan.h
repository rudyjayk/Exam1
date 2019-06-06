#ifndef SEDAN_H
#define SEDAN_H

#include "vehicle.h"


class Sedan: public Vehicle {
private:
	int number_of_seats;
	
public:
	Sedan(string color, int seats);

	void Description(); //take note of change in string and void

	void addPassenger();
};

#endif // !SEDAN_H

