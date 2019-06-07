/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#ifndef SEDAN_H
#define SEDAN_H


#include "vehicle.h"

//Sedan Class which is inherited from the vehicle class
//The relationship -> Sedan "is a" Vehicle 
class Sedan: public Vehicle {
private:
	int number_of_seats; //Integer that represents the number of seats in the sedan
	
public:

	/*
	*Base Constructor for the sedan class
	*Input: A string that represents the color of the Sedan 
			An integer that represents the number of seats the Sedan has
	*/
	Sedan(string color, int seats);

	/*
	*Method used to print out a descriptionof the Sedan back to the user
	*Description includes color, number of seats, top speed, tire radius
	*Changed this Method into a void so that printing out the message is more convenient
	*than setting a string to the message and returning the string and making it harder to print to user.
	*Also this is a virtual method
	*/
	void Description(); //take note of change in string and void

	/*
	*This the unique function that the prompt asked for
	*Method used to addPassenger to the Sedan
	*This method is depending on the number of seats the Sedan HAs
	*Output: If there is room to add another then the function reurns true and tells the user they successfully added a passenger
			 If there is no room it returns false and tells the user that there is no room	
	*/
	bool addPassenger();
};

#endif // !SEDAN_H

