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
	return x;
}

//Get y coordinate
//RETURN	: y coordinate
double Vector::get_Y()
{
	return y;
}

//Get x coordinate
//RETURN	: z coordinate
double Vector::get_Z()
{
	return z;
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

//Overloaded insertion operator
//PRE    : (ostream) << (Vector object)
//POST   : when compiler sees above, it will implement as defined
//RETURN : ostream
ostream & operator<<(ostream & os, const Vector & obj)
{
	os << "X: " << obj.x << "\tY: " << obj.y 
		<< "\t Z: " << obj.z << endl;

	return os;
}

//Swap values between two objects
//PRE	: both are Vector object
//POST	: swap each other
void swap(Vector & rhs, Vector & lhs)
{
	std::swap(rhs.x, lhs.x);
	std::swap(rhs.y, lhs.y);
	std::swap(rhs.z, lhs.z);
}

//Overloaded assignment operator
//PRE	: both are Vecotor object
//POST	: lhs is overrided with rhs
Vector & Vector::operator=(Vector rhs)
{
	swap(*this, rhs);

	return *this;
}

//Overloaded += operator
//POST	: rhs Vector is added to lhs Vector
Vector Vector::operator+=(const Vector & rhs)
{
	this->x += rhs.x;
	this->y += rhs.y;
	this->z += rhs.z;

	return *this;
}

//Overloaded + operator
//POST	: rhs Vector is added to lhs Vector
//RETURN: current Vector object
Vector operator+(Vector lhs, const Vector & rhs)
{
	lhs += rhs;
	return lhs;
}

//Overloaded -= operator
//POST	: lhs Vector is subtracted by rhs
//RETURN: reference of current Vector object
Vector Vector::operator-=(const Vector & rhs)
{
	this->x -= rhs.x;
	this->y -= rhs.y;
	this->z -= rhs.z;

	return *this;
}


//Overloaded - operator
//POST	: lhs Vector is subtracted by rhs
//RETURN: current Matrix object
Vector operator-(Vector lhs, const Vector & rhs)
{
	lhs -= rhs;
	return lhs;
}

