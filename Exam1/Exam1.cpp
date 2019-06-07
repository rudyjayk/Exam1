/*Exam1.cpp
Whitworth University - Computer Science
A selection of code that shows the understanding of what we have learned
in the first few chapters

Program Creates a Vehicle class that is the base class of different vehicles.
With that it has a description method that will print to the user the description of the certain vehicle.
And each vehicle has a different unique function that is also used.

Last Modified: 06/07/2019
Rudyjay Keopuhiwa
*/


/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/


#include "vehicle.h"
#include "pickup.h"
#include "racecar.h"
#include "sedan.h"
#include "wheel.h"


int main()
{
	//Creates an array of Vehicle pointers that are used to demonstrate the different vehicle classes
	Vehicle* Garage[3];

	//Creates instances of different vehicles and allocate memory of different vehicle classes
	Garage[0] = new RaceCar("Black");
	Garage[1] = new Sedan("Blue", 5);
	Garage[2] = new Pickup("Red", 2000);

	for (int i = 0; i < 3; ++i)
	{
		//Calls the description method throughout all classes
		Garage[i]->Description();

		//Because there are different elements we had to use the "typeid" and "dynamic_cast" keywords as shown below
		//This proccess was mainly to call the unique function of each different vehicle
		if (typeid(Sedan) == typeid(*Garage[i])) {
			dynamic_cast<Sedan*>(Garage[i])->addPassenger();
		}
		else if (typeid(Pickup) == typeid(*Garage[i])) {
			dynamic_cast<Pickup*>(Garage[i])->addWeight(1000);
		}
		else {
			dynamic_cast<RaceCar*>(Garage[i])->revEngine();
		}
		cout << "\n\n";

		//Deallocate the memory that was originally allocated so no memory problems
		delete Garage[i];
	}

	
}
