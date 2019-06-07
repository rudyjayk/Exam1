#ifndef PICKUP_H
#define PICKUP_H

#include "vehicle.h"

class Pickup : public Vehicle {

private:
	int hauling_capacity;

public:
	Pickup(string color, int capacity);

	void Description();

	bool addWeight(int weight);

};

#endif // !PICKUP_H

