#include "Vector.hpp"
#include <iostream>

using namespace std;

//Default Constructor
Vector::Vector()
	: x(0), y(0), z(0)
{
}

//Constructor with 3 parameters
Vector::Vector(double x, double y, double z)
	: x(x), y(y), z(z)
{
}

//Copty Constructor
Vector::Vector(const Vector &rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
}

//Destructor
Vector::~Vector() { }

//Get x coordinate
//RETURN	: x coordinate
double Vector::get_X()
{
	return 0.0;
}

//Get y coordinate
//RETURN	: y coordinate
double Vector::get_Y()
{
	return 0.0;
}

//Get x coordinate
//RETURN	: z coordinate
double Vector::get_Z()
{
	return 0.0;
}

//Set x coordinate
//PRE	: double parameter
//POST	: x is set 
void Vector::set_X(double x)
{
	this->x = x;
}

//Set y coordinate
//PRE	: double parameter
//POST	: y is set 
void Vector::set_Y(double y)
{
	this->y = y;
}

//Set z coordinate
//PRE	: double parameter
//POST	: x is set  
void Vector::set_Z(double z)
{
	this->z = z;
}

//Set all coordinates to 0's
//POST	: set x, y, z to 0
void Vector::clear()
{
	x = y = z = 0;
}

//Overloaed increment operator(prefix)
//PRE	: Vector initialized
//POST	: increment of each element
//RETURN: reference of this object
Vector & Vector::operator++()
{
	++this->x;
	++this->y;
	++this->z;

	return *this;
}

//Overloaed increment operator(postfix)
//PRE	: Vector initialized
//POST	: increment of each element
//RETURN: reference of this object

Vector Vector::operator++(int)
{
	Vector temp(*this);
	operator++();
	return temp;
}

//Overloaded decrement operator(prefix)
//PRE	: Vector initialized
//POST	: decrement of each element
//RETURN: reference of this object
Vector & Vector::operator--()
{
	--this->x;
	--this->y;
	--this->z;

	return *this;
}

//Overloaded decrement operator(postfix)
//PRE	: Vector initialized
//POST	: decrement of each element
//RETURN: reference of this object
Vector Vector::operator--(int)
{
	Vector temp(*this);
	operator--();
	return temp;
}
