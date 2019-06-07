/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#include "pickup.h"
#include <stdexcept>

//Calls Vehicle class because of inheritance
Pickup::Pickup(string color, int capacity) : Vehicle(color) {

	hauling_capacity = capacity; // Sets the variable hauling_capacity
}

void Pickup::Description() { //Description of Pickup

	cout << "Description of Pickup Truck:\n" << "Color: " << _color << endl
		<< "Hauling Capacity: " << hauling_capacity << endl
		<< "Top speed: 85mph\n" << "Wheel radius: 432mm\n";
}

bool Pickup::addWeight(int weight) { //Add weight to pickup truck
	
	if (weight >= hauling_capacity) {

		cout << "Too much weight on Pickup Truck\n";
		return false;
	}
	cout << "You have added " << weight << " to the Pickup Truck!\n";
	cout << "You have " << hauling_capacity - weight << " capacity in the Pickup!\n";
	return true;

}


