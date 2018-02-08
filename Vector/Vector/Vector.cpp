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


