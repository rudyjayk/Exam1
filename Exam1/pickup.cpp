#include "pickup.h"


Pickup::Pickup(string color, int capacity) : Vehicle(color) {

	hauling_capacity = capacity;
}

void Pickup::Description() {

	cout << "Description of Pickup Truck:\n" << "Color: " << _color << endl
		<< "Hauling Capacity: " << hauling_capacity << endl
		<< "Top speed: 85mph\n" << "Wheel radius: 432mm\n";
}

void Pickup::addWeight(int weight) {

	cout << "You have added " << weight << " to the Pickup Truck!\n";
	cout << "You have " << hauling_capacity - weight << " capacity in the Pickup!\n";

}


