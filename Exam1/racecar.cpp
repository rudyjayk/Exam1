/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#include "racecar.h"

//Calls Vehicle class because of inheritance
RaceCar::RaceCar(string color) : Vehicle(color) {}

void RaceCar::Description() {//Description of racecar

	cout << "Description of Racecar:\n" << "Color: " << _color << endl
		<< "Top speed: 250mph\n" << "Wheel radius: 305mm\n";
}

void RaceCar::revEngine() {//Rev engine

	cout << "VROOOOOOM! The racecar's engine has been rev'd!\n";
}
