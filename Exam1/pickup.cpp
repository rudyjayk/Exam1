#include "pickup.h"
#include <stdexcept>


Pickup::Pickup(string color, int capacity) : Vehicle(color) {

	hauling_capacity = capacity;
}

void Pickup::Description() {

	cout << "Description of Pickup Truck:\n" << "Color: " << _color << endl
		<< "Hauling Capacity: " << hauling_capacity << endl
		<< "Top speed: 85mph\n" << "Wheel radius: 432mm\n";
}

bool Pickup::addWeight(int weight) {
	
	if (weight >= hauling_capacity) {

		cout << "Too much weight on Pickup Truck\n";
		return false;
	}
	cout << "You have added " << weight << " to the Pickup Truck!\n";
	cout << "You have " << hauling_capacity - weight << " capacity in the Pickup!\n";
	return true;

}


