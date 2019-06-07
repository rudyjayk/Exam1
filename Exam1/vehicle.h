/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

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

//Base class for inheritance
class Vehicle
{
protected:
	string _color; //Color of the vehcile
	vector<Wheel> wheels; //Vector of the Wheel class that is used for composition

public:

	/*
	*Base Constructor for the vehcile class
	*Input: Takes in a string that represents the color of the vehicle
	*		 sets _color = color 
	*/
	Vehicle(string color) {

		_color = color;
	}

	/*
	*This is the Virtual function that all classed inherited to vehicle uses
	*This method is different for all classes
	*Also an abstract base class because of the "= 0"
	*/
	virtual void Description() = 0;
};


#endif// !VEHICLE_H

