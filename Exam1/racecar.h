/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#ifndef RACECAR_H
#define RACECAR_H

#include "vehicle.h"

//RaceCar class that is inherited from the vehicle class
//Relationship is -> RaceCar "is a" Vehicle
class RaceCar : public Vehicle {
	
public:

	/*
	*Base Constructor for the RaceCar class
	*Input: A string that represents the color of the racecar
	*/
	RaceCar(string color);

	/*
	*Method used to print out a description of the racecar back to the user
	*Description includes color, speed, tire radius 
	*Changed this Method into a void so that printing out the message is more convenient
	*than setting a string to the message and returning the string and making it harder to print to user.
	*Also this is a virtual method
	*/
	void Description();
	
	/*
	*This is the unique function the prompt asked for
	*Method to rev the engine of the racecar
	*This method just prints a message to the user showing that the racecar rev'd the engine
	*/
	void revEngine();

};

#endif // !RACECAR_H
