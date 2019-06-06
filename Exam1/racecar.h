#ifndef RACECAR_H
#define RACECAR_H

#include "vehicle.h"

class RaceCar : public Vehicle {
	
public:
	RaceCar(string color);

	void Description();

	void revEngine();

};

#endif // !RACECAR_H
