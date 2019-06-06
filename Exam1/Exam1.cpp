/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/


#include "vehicle.h"
#include "pickup.h"
#include "racecar.h"
#include "sedan.h"
#include "wheel.h"

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;



// STEP 1: Complete the implementation of the Vehicle base class 
// as described in the UML diagram

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality unique to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.



int main()
{
	Vehicle* Garage[3];

	// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
	// in the Garage array. Remember the classes are defined in the namespace Exam1.
	//Garage[0] = ???
	//Garage[1] = ???
	//Garage[2] = ???

	Garage[0] = new RaceCar("Black");
	Garage[1] = new Sedan("Blue", 5);
	Garage[2] = new Pickup("Red", 2000);

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		Garage[i]->Description();

		// add code to execute the "special" functionality of each class
		if (typeid(Sedan) == typeid(*Garage[i])) {
			dynamic_cast<Sedan*>(Garage[i])->addPassenger();
		}
		else if (typeid(Pickup) == typeid(*Garage[i])) {
			dynamic_cast<Pickup*>(Garage[i])->addWeight(100);
		}
		else {
			dynamic_cast<RaceCar*>(Garage[i])->revEngine();
		}
		cout << "\n\n";
	}
}
