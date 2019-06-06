#include "racecar.h"

RaceCar::RaceCar(string color) : Vehicle(color) {}

void RaceCar::Description() {

	cout << "Description of Racecar:\n" << "Color: " << _color << endl
		<< "Top speed: 250mph\n" << "Wheel radius: 305mm\n";
}

void RaceCar::revEngine() {

	cout << "VROOOOOOM! The racecar's engine has been rev'd!\n";
}
