#include "sedan.h"

Sedan::Sedan(string color, int seats) : Vehicle(color) {

	number_of_seats = seats;
}


void Sedan::Description() {

   cout << "Description of Sedan:\n" << "Color: " << _color << endl
		<< "Number of seats: " << number_of_seats << endl
		<< "Top speed: 95mph\n" << "Wheel radius: 381mm\n";
		
}

bool Sedan::addPassenger() {

	if (number_of_seats != 0) {

		cout << "You have successfully added a passenger to the sedan!\n";
		number_of_seats--;
		return true;
	}
	else {

		cout << "You do not have any more room for passengers!\n";
		return false;
	}
	
	
}