/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#ifndef WHEEL_H
#define WHEEL_H

//Wheel class that uses composition
//Relationship -> Vehicle "has a " wheel
class Wheel
{
private:
	int _radius; //An integer that represents the radius of the wheel, usually in mm

public:

	/*
	*Base Constructor for the wheel class
	*Input: an integer that is used to determine the radius of the wheel
	*/
	Wheel(int radius);
};

#endif // !WHEEL_H

