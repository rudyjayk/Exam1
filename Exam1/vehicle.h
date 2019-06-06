#ifndef VEHICLE_H
#define VEHICLE_H

#include "wheel.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Vehicle
{
protected:
	string _color;
	int _topspeed;
	vector<Wheel> wheels;

public:
	Vehicle(string color) {

		_color = color;
	}

	virtual void Description() = 0;
};


#endif// !VEHICLE_H

