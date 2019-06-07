/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#ifndef PICKUP_H
#define PICKUP_H

#include "vehicle.h"

//Pickup Class that inherits from Vehicl class
//The relationship -> Pickup "is a" Vehicle
class Pickup : public Vehicle {

private:
	int hauling_capacity; //Integer to determine hauling capacity of the pickup truck

public:

	/*
	*Base Constructor for the Pickup class
	*Input: A string that represents color and an integer that represents hauling capacity
	*/
	Pickup(string color, int capacity);

	/*
	*Method used to print out the description of the vehicle back to the user
	*Description includes color, speed, tire radius, and hauling capcity
	*Changed this Method into a void so that printing out the message is more convenient
	*than setting a string to the message and returning the string and making it harder to print to user.
	*Also this is a virtual method
	*/
	void Description();

	/*
	*This is the unique function that was asked of in the prompt
	*This is a method used to add weight to the pickup truck
	*Input:  An integer that represents the weight being added to the pickup
	*Output: If you exceed the hauling capcity then it returns false and lets you know
	*Output: If you have room then it returns true and tells you have succesfully added weight
	*/
	bool addWeight(int weight);

};

#endif // !PICKUP_H

