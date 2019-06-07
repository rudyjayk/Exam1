/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#include "sedan.h"

//Call Vehicle class because of inheritance
Sedan::Sedan(string color, int seats) : Vehicle(color) {

	number_of_seats = seats; //Sets the variable number_of_seats
}


void Sedan::Description() { //Description of Sedan

   cout << "Description of Sedan:\n" << "Color: " << _color << endl
		<< "Number of seats: " << number_of_seats << endl
		<< "Top speed: 95mph\n" << "Wheel radius: 381mm\n";
		
}

bool Sedan::addPassenger() { //Method for adding a passengger

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